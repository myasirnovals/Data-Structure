/*
program		:uas.c
outhor		:2450081109 - FIQRI ARISANDI
kelas		:D
Deskripsi	:header file dari file multiple linked list
tanggal		:18-06-2025
*/

#include "uas.h"

void InisialisasiList(DaftarKotak *L) {
    Awal(*L) = Nil;
}

addrKotak BuatKotak(int panjang, int lebar) {
    addrKotak P = (addrKotak) malloc(sizeof(NodeKotak));
    if (P != Nil) {
        Pj(P) = panjang;
        Lb(P) = lebar;
        Area(P) = panjang * lebar;
        DaftarNilai(P) = Nil;
        NextKotak(P) = Nil;
    }
    return P;
}

addrNilai BuatNilai(int nilai) {
    addrNilai P = (addrNilai) malloc(sizeof(NodeNilai));
    if (P != Nil) {
        DataNilai(P) = nilai;
        NextNilai(P) = Nil;
    }
    return P;
}

void TambahKotak(DaftarKotak *L, addrKotak P) {
    if (Awal(*L) == Nil) {
        Awal(*L) = P;
    } else {
        addrKotak temp = Awal(*L);
        while (NextKotak(temp) != Nil) {
            temp = NextKotak(temp);
        }
        NextKotak(temp) = P;
    }
}

void TambahNilaiKeAwal(addrNilai *L, addrNilai P) {
    NextNilai(P) = *L;
    *L = P;
}

void MasukkanData(DaftarKotak *L) {
    int xAwal, yAwal, xAkhir, yAkhir;

    printf("Gunakan 999 999 999 999 untuk menyelesaikan input.\n");
    printf("x1 : "); scanf("%d", &xAwal);
    printf("y1 : "); scanf("%d", &yAwal);
    printf("x2 : "); scanf("%d", &xAkhir);
    printf("y2 : "); scanf("%d", &yAkhir);

    while (!(xAwal == 999 && yAwal == 999 && xAkhir == 999 && yAkhir == 999)) {
        int panjang = abs(xAkhir - xAwal);
        int lebar = abs(yAkhir - yAwal);
        int nilaiDasar = (xAwal + yAwal) + (xAkhir + yAkhir);
        int i;
        addrKotak kotak = BuatKotak(panjang, lebar);
        int jumlahNilai = (Area(kotak) > 10) ? 5 : (Area(kotak) >= 5 ? 4 : 3);

        for ( i = 0; i < jumlahNilai; i++) {
            addrNilai nilai = BuatNilai(nilaiDasar - i);
            TambahNilaiKeAwal(&DaftarNilai(kotak), nilai);
        }

        TambahKotak(L, kotak);

        printf("x1 : "); scanf("%d", &xAwal);
        printf("y1 : "); scanf("%d", &yAwal);
        printf("x2 : "); scanf("%d", &xAkhir);
        printf("y2 : "); scanf("%d", &yAkhir);
    }
}

void CetakSemua(DaftarKotak L) {
    addrKotak K = Awal(L);
    int i;
    while (K != Nil) {
        printf("+--------+ ");
        for ( i = 0; i < Lb(K); i++) {
            printf("|        |\n");
        }
        printf("+--------");
        addrNilai N = DaftarNilai(K);
        while (N != Nil) {
            printf(" <%d>", DataNilai(N));
            N = NextNilai(N);
        }
        printf("\n\n");
        K = NextKotak(K);
    }
}

