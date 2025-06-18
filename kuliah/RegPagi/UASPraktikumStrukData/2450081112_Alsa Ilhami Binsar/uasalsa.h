/*
	Program		: mUAS.c
	Nama 		: Alsa Ilhami Binsar - 2450081112
	Kelas 		: D
	Deskripsi 	: 
	Tanggal 	: 18/06/2025
*/

#include <stdio.h>

#define nMax 10

#define nil NULL
#define InfoOrtu(P) (P)->InfoOrtu
#define InfoAnak(P) (P)->InfoAnak
#define NextOrtu(P) (P)->NextOrtu
#define NextAnak(P) (P)->NextAnak
#define FirstOrtu(L) (L).FirstOrtu
#define FirstAnak(L) (L).FirstAnak

//Tipe Bentukan
typedef struct{
	int abs, ord;
}Point;

typedef struct{
	Point P1, P2;
	float pjg, lbr, luas;
}Kotak;

typedef struct ElmOrtu *addressOrtu;
typedef struct ElmAnak *addressAnak;

typedef struct tElmOrtu{
	Kotak InfoOrtu;
	addressOrtu NextOrtu;
	addressAnak NextAnak;
}ElmOrtu;

typedef struct tElmAnak{
	int InfoAnak;
	addressAnak NextAnak;
}ElmAnak;

typedef struct{
	addressOrtu FirstOrtu;
}ListOrtu;

typedef struct{
	addressAnak FirstAnak;
}ListAnak;

typedef struct{
	ListOrtu T[nMax + 1];
	int nEff;
}TabList;

//prototype
void CreateListOrtu (ListOrtu *LO);

void CreateListAnak(ListAnak *LA);

void CreateTabList(TabList *T);

void CreatePoint(Point *P);

int HitungPanjang(Point ord, Kotak K);

int HitungLebar(Point abs, Kotak K);

float HitungLuas(Point abs, Point ord, Kotak K);

void CetakKotak (Kotak K);

void AlokasiOrtu (int O);

void AlokasiAnak (int A);
