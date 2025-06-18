/*
	Program		: mUas.c
	Author		: Arly Maulana
	Kelas		: D
	NIM			: 2450081118
	Deksripsi	: File main driver untuk menguji setiap prototype yang telah dibuat
	Tanggal		: 18 Juni 2025
*/

#include "uas.h"

int main() {
    listOrtu daftarKotak;
    CreateListOrtu(&daftarKotak);

    kotak inputK;
    addressOrtu newOrtu;
    int sentinel_x = 999;

    printf("Masukkan koordinat kotak (input 999 untuk mengakhiri):\n");
    while (1) {
        InputKotak(&inputK);

        if (inputK.p1.abs == sentinel_x && inputK.p1.ord == sentinel_x &&
            inputK.p2.abs == sentinel_x && inputK.p2.ord == sentinel_x) {
            break;
        }

        newOrtu = AlokasiOrtu(inputK);
        if (newOrtu != Nil) {
            AddFirstOrtu(&daftarKotak, newOrtu);
        } else {
            printf("Alokasi memori untuk kotak gagal!\n");
        }
    }

    addressOrtu currentOrtu = firstOrtu(daftarKotak);

    if (currentOrtu != Nil) {
        AddFirstAnak(currentOrtu, AlokasiAnak(19));
        AddFirstAnak(currentOrtu, AlokasiAnak(18));
        AddFirstAnak(currentOrtu, AlokasiAnak(17));
        AddFirstAnak(currentOrtu, AlokasiAnak(16));
        AddFirstAnak(currentOrtu, AlokasiAnak(15));
    }

    if (currentOrtu != Nil && nextOrtu(currentOrtu) != Nil) {
        currentOrtu = nextOrtu(currentOrtu);
        AddFirstAnak(currentOrtu, AlokasiAnak(23));
        AddFirstAnak(currentOrtu, AlokasiAnak(22));
        AddFirstAnak(currentOrtu, AlokasiAnak(21));
        AddFirstAnak(currentOrtu, AlokasiAnak(20));
        AddFirstAnak(currentOrtu, AlokasiAnak(19));
    }


    printf("\n");
    PrintListOrtu(daftarKotak);

    return 0;
}
