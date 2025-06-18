/*
	Program		: UAS.c
	Author		: 2450081120 - Maulana Arby Fatsani
	Kelas		: D
	Deskripsi	: Header file dari multiple linked list
	Tanggal		: 18-06-2025
*/

#include<stdio.h>

#define nMax 10
#define nil NULL
#define InfoOrtu(P) (P)->InfoOrtu
#define InfoAnak(P) (P)->InfoAnak
#define NextOrtu(P) (P)->NextOrtu
#define NextAnak(P) (P)->NextAnak
#define FirstOrtu(L) (L).FirstOrtu
#define FirstAnak(L) (L).FirstAnak

typedef struct {
	int abs, ord;
}Point;

typedef struct {
	Point SudutAtas;
	Point SudutBawah;
	int Panjang, Lebar;
	int Luas;
}Kotak;

typedef struct ElmOrtu *addressOrtu;
typedef struct ElmAnak *addressAnak;
typedef struct ElmOrtu {
	Kotak infoOrtu;
	addressOrtu nextOrtu;
	addressAnak nextAnak;
}ElmOrtu;

typedef struct ElmAnak {
	int infoAnak;
	addressAnak nextAnak;
}ElmAnak;

typedef struct {
	addressOrtu FirstOrtu;
	
}ListOrtu;

typedef struct {
	addressAnak FirstAnak;
	
}ListAnak;

typedef struct {
	ListOrtu TList[nMax+1];
	int neff;
}TabList;

void CreatePoint(Point *P);

float HitungPanjang(Point abs);

int HitungLebar(Point ord);

float HitungLuas(Point ord, Point abs, Kotak K);

void CetakKotak (Kotak *K);

