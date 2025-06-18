/*
	Progrgam 		: UAS.h
	Author	 		: 2450081116 - Diki Bagas Putra
	Kelas	 		: D
	Hari/Tanggal	: Rabu - 18/08/2025
	Deskripsi		: UAS Praktikum Struktur Data
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define nMaks 10

#define Nil NULL
#define InfoOrtu(P) (P)->InfoOrtu
#define infoAnak(P) (P)->infoAnak
#define nextOrtu(P) (P)->nextOrtu
#define nextAnak(P) (P)->nextAnak
#define firstOrtu(L) (L).firstOrtu
#define firstAnak(L) (L).firstAnak

typedef struct tElmOrtu *addressOrtu;
typedef struct tElmAnak *addressAnak;

// tipe bentukan
typedef struct point {
	int abs, ord;
} point;

typedef struct kotak {
	point p1, p2;
	int panjang, lebar, luas;
} kotak;

typedef struct elmOrtu {
	kotak InfoOrtu;
	addressOrtu nextOrtu;
	addressAnak nextAnak;
} elmOrtu;

typedef struct elmAnak {
	int infoAnak;
	addressAnak nextAnak;
} elmAnak;

typedef struct listOrtu {
	addressOrtu firstOrtu;
} listOrtu;

typedef struct listAnak {
	addressAnak firstAnak;
} listAnak;

typedef struct tabList {
	int neff;
} tabList;

addressOrtu alokasiOrtu(kotak k);
addressAnak alokasiAnak(int isiAnak);
void createListOrtu(listOrtu *L);
void createListAnak(listAnak *L);
void addFirstOrtu(listOrtu *L, kotak K);
void addFirstAnak(addressOrtu parent, int isiAnak);

void createListOrtu(listOrtu *L) {
/*
	I.S : L terdefinisi, belum ada isinya
	F.S : membuat sebuah list untuk menyimpan kotak yang terdiri atas
		  panjang, lebar dan luas
*/
	firstOrtu(*L) = Nil;
}

void createListAnak(listAnak *L) {
/*
	I.S : L terdefinisi, belum ada isinya
	F.S : membuat sebuah List untuk menyimpan penjumlahan nilai 2 koordinat
		  pembentuk kotak, yang diisi secara Addfirst
*/
	firstAnak(*L) = Nil;
}
