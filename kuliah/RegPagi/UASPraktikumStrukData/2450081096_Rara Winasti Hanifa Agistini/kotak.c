/*
	Program		: kotak.c 
	Author		: 2450081096_Rara Winasti Hanifa Agistini
	Kelas		: D
	Deskripsi	: Body prototype dari file kotak.h
	Date		: 18 Juni 2025
*/
#include "kotak.h"

void CreateList(ListOrtu *L) {
    First(*L) = Nil;
}

ortuAddress AlokasiOrtu(int panjang, int lebar) {
    ortuAddress P = (ortuAddress) malloc(sizeof(Ortu));
    if (P != Nil) {
        (*P).panjang = panjang;
        (*P).lebar = lebar;
        (*P).luas = panjang * lebar;
        (*P).listAnak = Nil;
        (*P).next = Nil;
    }
    return P;
}

anakAddress AlokasiAnak(int nilai) {
    anakAddress P = (anakAddress) malloc(sizeof(Anak));
    if (P != Nil) {
        (*P).nilai = nilai;
        (*P).next = Nil;
    }
    return P;
}

void AddOrtu(ListOrtu *L, ortuAddress P) {
    if (First(*L) == Nil) {
        First(*L) = P;
    } else {
        ortuAddress last = First(*L);
        while ((*last).next != Nil) {
            last = (*last).next;
        }
        (*last).next = P;
    }
}

void AddFirstAnak(anakAddress *L, anakAddress P) {
    (*P).next = *L;
    *L = P;
}

void InputData(ListOrtu *L) {
    int x1, y1, x2, y2;
    while (1) {
        printf("x1 : "); scanf("%d", &x1);
        printf("y1 : "); scanf("%d", &y1);
        printf("x2 : "); scanf("%d", &x2);
        printf("y2 : "); scanf("%d", &y2);

        if (x1 == 999 && y1 == 999 && x2 == 999 && y2 == 999) break;

        int panjang = abs(x2 - x1);
        int lebar = abs(y1 - y2);
        int nilaiAwal = (x1 + y1) + (x2 + y2);

        ortuAddress ortu = AlokasiOrtu(panjang, lebar);

        int jumlahAnak = 0;
        if ((*ortu).luas > 10) jumlahAnak = 5;
        else if ((*ortu).luas >= 5) jumlahAnak = 4;
        else jumlahAnak = 3;
		int i;
        for ( i = 0; i < jumlahAnak; i++) {
            anakAddress anak = AlokasiAnak(nilaiAwal - i);
            AddFirstAnak(&((*ortu).listAnak), anak);
        }

        AddOrtu(L, ortu);
    }
}

void Tampil(ListOrtu L) {
    ortuAddress o = First(L);
    while (o != Nil) {
        printf("+------+ Luas :%d, Panjang : %d, Lebar : %d\n", (*o).luas, (*o).panjang, (*o).lebar);
        int i;
        for ( i = 0; i < (*o).lebar; i++) {
            printf("|      |\n");
        }
        printf("+------");
        anakAddress a = (*o).listAnak;
        while (a != Nil) {
            printf("<%d> ", (*a).nilai);
            a = (*a).next;
        }
        printf("\n\n");
        o = (*o).next;
    }
}
