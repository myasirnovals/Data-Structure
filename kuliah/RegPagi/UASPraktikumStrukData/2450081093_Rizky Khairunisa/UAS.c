/* 
	Program : UAS.c
	Author : 2450081093 - Rizky Khairunisa
	Kelas  : D
	Deskripsi : Body prototype dari file UAS
	Date	: 18 Juni 2025
*/

#include "UAS.h"

void CreateList(ListOrtu *L) {
    FirstOrtu(*L) = Nil;
}


addressOrtu AlokasiOrtu(Point a, Point b) {
    addressOrtu P = (addressOrtu) malloc(sizeof(ElmOrtu));
    if (P != Nil) {
        infoOrtu(P).P1 = a;
        infoOrtu(P).P2 = b;
        infoOrtu(P).pjg = abs(b.abs - a.abs);
        infoOrtu(P).lbr = abs(b.ord - a.ord);
        infoOrtu(P).Luas = infoOrtu(P).pjg * infoOrtu(P).lbr;
        nextOrtu(P) = Nil;
        nextAnak(P) = Nil;
    }
    return P;
}

addressAnak AlokasiAnak(int nilai) {
    addressAnak P = (addressAnak) malloc(sizeof(ElmAnak));
    if (P != Nil) {
        infoAnak(P) = nilai;
        nextAnak(P) = Nil;
    }
    return P;
}

void AddOrtu(ListOrtu *L, ElmOrtu *P) {
    addressOrtu temp = (addressOrtu) P;
    if (FirstOrtu(*L) == Nil) {
        FirstOrtu(*L) = temp;
    } else {
        addressOrtu Q = FirstOrtu(*L);
        while (nextOrtu(Q) != Nil) {
            Q = nextOrtu(Q);
        }
        nextOrtu(Q) = temp;
    }
}

void AddFirstAnak(ListAnak *L, ElmAnak *P) {
    addressAnak temp = (addressAnak) P;
    nextAnak(temp) = FirstAnak(*L);
    FirstAnak(*L) = temp;
}

void InputData(ListOrtu *L) {
   
}

int HitungLuas(Point P1, Point P2) {
    int panjang = abs(P2.abs - P1.abs);
    int lebar = abs(P2.ord - P1.ord);
    return panjang * lebar;
}

void CetakData(ListOrtu L) {
    addressOrtu P = FirstOrtu(L);
    int i = 1;
    while (P != Nil) {
        printf("Ortu ke-%d:\n", i++);
        printf("  P1: (%d,%d)\n", infoOrtu(P).P1.abs, infoOrtu(P).P1.ord);
        printf("  P2: (%d,%d)\n", infoOrtu(P).P2.abs, infoOrtu(P).P2.ord);
        printf("  Panjang: %d\n", infoOrtu(P).pjg);
        printf("  Lebar: %d\n", infoOrtu(P).lbr);
        printf("  Luas: %d\n", infoOrtu(P).Luas);
        printf("  Anak: ");
        addressAnak A = nextAnak(P);
        if (A == Nil) {
            printf("Tidak ada anak\n");
        } else {
            while (A != Nil) {
                printf("%d ", infoAnak(A));
                A = nextAnak(A);
            }
            printf("\n");
        }
        P = nextOrtu(P);
    }
}


