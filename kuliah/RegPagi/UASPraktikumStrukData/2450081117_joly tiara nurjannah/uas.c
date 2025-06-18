/*
	Program	: uas.c
	Aouthor	: Joly Tiara Nurjannah _ 2450081117
	Kelas 	: D
	Date	: 18 juni 2025
*/

#include <stdio.h>
#include <stdlib.h>

#define nMax 10
#define nil NULL
#define infoOrtu(P) (P)->infoOrtu
#define infoAnak(P) (P)->infoAnak
#define nextOrtu(P) (P)->nextOrtu
#define nextAnak(P) (P)->nextAnak
#define firstOrtu(L) (L)->firstOrtu
#define firstAnak(L) (L)->firstAnak

typedef struct Point {
    int abs, ord;
} Point;

typedef struct Kotak {
    Point SudutAtas;
    Point SudutBawah;
    int Panjang, Lebar;
    int Luas;
} Kotak;

typedef struct ElmOrtu *addressOrtu;
typedef struct ElmAnak *addressAnak;

typedef struct ElmOrtu {
    Kotak infoOrtu;
    addressOrtu nextOrtu;
    addressAnak nextAnak;
} ElmOrtu;

typedef struct ElmAnak {
    int infoAnak;
    addressAnak nextAnak;
} ElmAnak;

typedef struct ListOrtu {
    addressOrtu firstOrtu;
} ListOrtu;

typedef struct ListAnak {
    addressAnak firstAnak;
} ListAnak;

typedef struct {
    ListOrtu TList[nMax+1];
    int nEff;
} TabList;

// head prototype
int hitungLuas(Kotak K);
void addFirstAnak(addressAnak *first, int data);
void addKotak(TabList *L, int panjang, int lebar, int x1, int y1, int x2, int y2);
void createList(TabList *L);

// main
int hitungLuas(Kotak K) {
    return K.Panjang * K.Lebar;
}

void addFirstAnak(addressAnak *first, int data) {
    addressAnak newNode = (addressAnak) malloc(sizeof(ElmAnak));
    newNode->infoAnak = data;
    newNode->nextAnak = *first;
    *first = newNode;
}

void addKotak(TabList *L, int panjang, int lebar, int x1, int y1, int x2, int y2) {
    if (L->nEff >= nMax) {
        printf("List is full\n");
        return;
    }
    addressOrtu p = (addressOrtu) malloc(sizeof(ElmOrtu));
    p->infoOrtu.Panjang = panjang;
    p->infoOrtu.Lebar = lebar;
    p->infoOrtu.Luas = hitungLuas(p->infoOrtu);
    p->infoOrtu.SudutAtas.abs = x1;
    p->infoOrtu.SudutAtas.ord = y1;
    p->infoOrtu.SudutBawah.abs = x2;
    p->infoOrtu.SudutBawah.ord = y2;

    p->nextAnak = NULL;
    p->nextOrtu = NULL;

    int total = (x1 + y1) + (x2 + y2);
    int jumlahAnak = 0;
    if (p->infoOrtu.Luas > 10) jumlahAnak = 4;
    else if (p->infoOrtu.Luas > 5) jumlahAnak = 3;
    else jumlahAnak = 1;
    }

void createList(TabList *L) {
    L->nEff = 0;
}


int main() {
    TabList myList;
    createList(&myList);

    addKotak(&myList, 3, 4, 1, 2, 3, 4);
    addKotak(&myList, 2, 2, 2, 3, 4, 5);
    cetak(myList);

    return 0;
}

