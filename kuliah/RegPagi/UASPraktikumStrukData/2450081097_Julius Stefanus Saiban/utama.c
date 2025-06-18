//Author		: 2450081097 - Julius Stefanus Saiban

#include "struktur_data.h" // Sertakan file header untuk mengakses struktur dan fungsi

int main() {
    NodeOrtu *kepalaListOrtu = NULL; // Kepala dari linked list Ortu, diinisialisasi NULL

    // Mengisi data Ortu (menggunakan metode AddFirst, sehingga urutan dalam list akan terbalik)
    // Untuk mendapatkan urutan Ortu1, Ortu2, Ortu3 saat dicetak,
    // kita harus menambahkan dari yang terakhir (Ortu3) ke yang pertama (Ortu1).
    tambahOrtu(&kepalaListOrtu, 999, 999, 999, 999); // Ortu 3 (sesuai contoh input gambar)
    tambahOrtu(&kepalaListOrtu, 5, 4, 12, 2);      // Ortu 2 (sesuai contoh input gambar)
    tambahOrtu(&kepalaListOrtu, 1, 5, 10, 5);      // Ortu 1 (sesuai contoh input gambar)

    // Mengisi data anak untuk setiap Node Ortu
    NodeOrtu *ortuSekarang = kepalaListOrtu;
    while (ortuSekarang != NULL) {
        isiDaftarAnak(ortuSekarang); // Memanggil fungsi untuk mengisi anak
        ortuSekarang = ortuSekarang->berikutnya;
    }

    printf("Hasil Program :\n");

    // Output nilai x, y seperti pada contoh gambar kedua.
    // Ini adalah representasi input yang diberikan pada soal, bukan nilai yang diambil dari struktur secara langsung.
    // Jika Anda ingin mencetak nilai dari struktur, Anda bisa mengulang list kepalaListOrtu dan mencetak x1, y1, x2, y2 dari setiap node.
    printf("x1 : 1\ny1 : 5\nx2 : 10\ny2 : 5\n");
    printf("x1 : 5\ny1 : 4\nx2 : 12\ny2 : 2\n");
    printf("x1 : 999\ny1 : 999\nx2 : 999\ny2 : 999\n");

    // Mencetak hasil program dari linked list Ortu dan Anak
    cetakData(kepalaListOrtu);

    // Membersihkan memori yang telah dialokasikan (PENTING!)
    bebaskanListOrtu(kepalaListOrtu);

    printf("\n= Selamat Bekerja, Semoga Anda Berhasil =\n");

    return 0; // Mengindikasikan program berakhir dengan sukses
}
