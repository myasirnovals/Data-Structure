/*
	Program		: uas.c
	Author		: Arly Maulana
	Kelas		: D
	NIM			: 2450081118
	Deksripsi	: File body yang berisi realisasi prototype dari header
	Tanggal		: 18 Juni 2025
*/

#include "uas.h"

addressOrtu AlokasiOrtu(kotak dataOrtu) {
	// Kamus
    addressOrtu P = (addressOrtu)malloc(sizeof(elmOrtu));

    // Algoritma
    if (P != Nil) {
        infoOrtu(P) = dataOrtu;
        nextOrtu(P) = Nil;
        nextAnak(P) = Nil;
    }
    return P;
}

addressAnak AlokasiAnak(int dataAnak) {
	// Kamus
    addressAnak P = (addressAnak)malloc(sizeof(elmAnak));

    // Algoritma
    if (P != Nil) {
        infoAnak(P) = dataAnak;
        nextAnak(P) = Nil;
    }
    return P;
}

void CreateListOrtu(listOrtu *L) {
    firstOrtu(*L) = Nil;
}

void AddFirstOrtu(listOrtu *L, addressOrtu P) {
    nextOrtu(P) = firstOrtu(*L);
    firstOrtu(*L) = P;
}

void AddFirstAnak(addressOrtu Ort, addressAnak Anak) {
    nextAnak(Anak) = nextAnak(Ort);
    nextAnak(Ort) = Anak;
}

void PrintListOrtu(listOrtu L) {
	// Kamus
    addressOrtu P = firstOrtu(L);
    
    // Algoritma
    while (P != Nil) {
        if (nextAnak(P) != Nil) {
            addressAnak Q = nextAnak(P);
            while (Q != Nil) {
                printf("<%d> ", infoAnak(Q));
                Q = nextAnak(Q);
            }
        }
        printf("\n");
        P = nextOrtu(P);
    }
    printf("--------------------------\n");
}

void HitungKotak(kotak *K) {
    K->panjang = abs(K->p2.abs - K->p1.abs);
    K->lebar = abs(K->p2.ord - K->p1.ord);
    K->luas = K->panjang * K->lebar;
}

void InputKotak(kotak *K) {
    printf("x1 : ");
    scanf("%d", &K->p1.abs);
    printf("y1 : ");
    scanf("%d", &K->p1.ord);
    printf("x2 : ");
    scanf("%d", &K->p2.abs);
    printf("y2 : ");
    scanf("%d", &K->p2.ord);

    HitungKotak(K);
}

int CekKotakSama(kotak K1, kotak K2) {
    return (K1.p1.abs == K2.p1.abs && K1.p1.ord == K2.p1.ord &&
            K1.p2.abs == K2.p2.abs && K1.p2.ord == K2.p2.ord);
}
