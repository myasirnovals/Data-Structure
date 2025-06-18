//Author		: 2450081097 - Julius Stefanus Saiban

#include "struktur_data.h" // Sertakan file header yang telah dibuat
#include <math.h>          // Untuk fungsi abs()

// Implementasi Fungsi-fungsi

NodeAnak* buatNodeAnak(int nilai) {
    NodeAnak *nodeBaru = (NodeAnak*)malloc(sizeof(NodeAnak));
    if (nodeBaru == NULL) {
        fprintf(stderr, "Alokasi memori gagal untuk NodeAnak!\n");
        exit(1); // Keluar dari program jika alokasi memori gagal
    }
    nodeBaru->nilai = nilai;
    nodeBaru->berikutnya = NULL;
    return nodeBaru;
}

void tambahAnak(NodeAnak **referensiKepala, int nilai) {
    NodeAnak *nodeBaru = buatNodeAnak(nilai);
    nodeBaru->berikutnya = *referensiKepala;
    *referensiKepala = nodeBaru; // Node baru menjadi kepala
}

NodeOrtu* buatNodeOrtu(int x1, int y1, int x2, int y2) {
    NodeOrtu *nodeBaru = (NodeOrtu*)malloc(sizeof(NodeOrtu));
    if (nodeBaru == NULL) {
        fprintf(stderr, "Alokasi memori gagal untuk NodeOrtu!\n");
        exit(1); // Keluar dari program jika alokasi memori gagal
    }
    nodeBaru->x1 = x1;
    nodeBaru->y1 = y1;
    nodeBaru->x2 = x2;
    nodeBaru->y2 = y2;

    // Hitung panjang, lebar, dan luas
    // Menggunakan abs() dari math.h untuk memastikan nilai positif
    nodeBaru->panjang = abs(x2 - x1);
    nodeBaru->lebar = abs(y2 - y1);
    nodeBaru->luas = nodeBaru->panjang * nodeBaru->lebar;

    nodeBaru->kepalaListAnak = NULL; // Inisialisasi daftar anak kosong
    nodeBaru->berikutnya = NULL;
    return nodeBaru;
}

void tambahOrtu(NodeOrtu **referensiKepala, int x1, int y1, int x2, int y2) {
    NodeOrtu *nodeBaru = buatNodeOrtu(x1, y1, x2, y2);
    nodeBaru->berikutnya = *referensiKepala;
    *referensiKepala = nodeBaru; // Node baru menjadi kepala
}

void isiDaftarAnak(NodeOrtu *nodeOrtu) {
    if (nodeOrtu == NULL) {
        return; // Tidak ada node ortu, kembali
    }

    int jumlahAnak;
    // Logika penentuan jumlah anak berdasarkan luas kotak ortu
    if (nodeOrtu->luas > 10) {
        jumlahAnak = 5;
    } else if (nodeOrtu->luas >= 5 && nodeOrtu->luas <= 10) {
        jumlahAnak = 4;
    } else { // luas < 5
        jumlahAnak = 3;
    }

    // "Isi dari setiap elemen Anak dimulai dari penjumlahan koordinat 2 titik pembentuk kotak,
    // dan untuk nilai elemen selanjutnya nilai yang sama selalu berkurang 1 hingga elemen terakhir Anak."
    // Asumsi "penjumlahan koordinat" adalah x1+y1+x2+y2.
    int nilaiAwalAnakDariRumus = nodeOrtu->x1 + nodeOrtu->y1 + nodeOrtu->x2 + nodeOrtu->y2;

    // Karena menggunakan AddFirst, untuk mendapatkan urutan nilai menurun (S, S-1, S-2, ...),
    // kita harus menambahkan nilai terkecil terlebih dahulu, lalu nilai berikutnya, hingga nilai terbesar (S)
    // Jika ingin nilai anak tercetak meningkat (seperti contoh gambar)
    // Dan "berkurang 1" berarti nilai dalam list itu sendiri, bukan urutan cetak.
    // Jika contoh output yang dicetak adalah 15, 16, 17, 18, 19,
    // maka kita harus menambahkan 19, 18, 17, 16, 15 ke list (karena AddFirst)
    // Mari kita ikuti yang di soal: "nilai selanjutnya nilai yang sama selalu berkurang 1"
    // Ini berarti jika nilai pertama adalah N, maka node berikutnya N-1, N-2 dst.
    // Dengan AddFirst, node yang ditambahkan terakhir akan berada di awal list.
    // Jadi, jika kita ingin (nilaiAwal, nilaiAwal-1, ..., nilaiAwal-(jumlahAnak-1))
    // maka kita harus menambahkan (nilaiAwal-(jumlahAnak-1)), lalu (nilaiAwal-(jumlahAnak-2)), ..., lalu nilaiAwal.
    int i;
	for (i = 0; i < jumlahAnak; i++) {
        tambahAnak(&(nodeOrtu->kepalaListAnak), nilaiAwalAnakDariRumus - (jumlahAnak - 1 - i));
    }
}

void cetakListAnak(NodeAnak *kepala) {
    NodeAnak *sekarang = kepala;
    while (sekarang != NULL) {
        printf(" <%d>", sekarang->nilai);
        sekarang = sekarang->berikutnya;
    }
    printf("\n");
}

void cetakData(NodeOrtu *kepala) {
    NodeOrtu *ortuSekarang = kepala;
    while (ortuSekarang != NULL) {
        printf("+-------+Luas :%d, Panjang : %d, Lebar : %d\n",
               ortuSekarang->luas, ortuSekarang->panjang, ortuSekarang->lebar);
        printf("|\n");
        printf("|\n");
        printf("+-------+");
        cetakListAnak(ortuSekarang->kepalaListAnak);
        ortuSekarang = ortuSekarang->berikutnya;
    }
}

void bebaskanListAnak(NodeAnak *kepala) {
    NodeAnak *temp;
    while (kepala != NULL) {
        temp = kepala;
        kepala = kepala->berikutnya;
        free(temp); // Bebaskan memori node anak
    }
}

void bebaskanListOrtu(NodeOrtu *kepala) {
    NodeOrtu *temp;
    while (kepala != NULL) {
        temp = kepala;
        kepala = kepala->berikutnya;
        bebaskanListAnak(temp->kepalaListAnak); // Bebaskan daftar anak terlebih dahulu
        free(temp); // Bebaskan memori node ortu
    }
}
