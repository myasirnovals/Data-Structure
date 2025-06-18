/*
 	Program		: uas.h
 	Author		: 2450081098, Riggo Yoga Darmawan
 	Kelas		: D
 	Deskripsi	: Header file dari multiple linked list
 	Tanggal		: 18 - 06 - 2025
*/

#include <stdio.h>

#define nMax 10
#define nil NULL
#define InfoOrtu(P) -> (P) InfoOrtu
#define InfoAnak(P) -> (P) InfoAnak
#define NextOrtu(P) -> (P) NextOrtu
#define NextAnak(P) -> (P) NextAnak
#define firstOrtu(L) -> (L) firstOrtu
#define firstAnak(L) -> (L) firstAnak

typedef struct{
	int abs, ord;
}Point;

typedef struct{
	Point SudutAtas;
	Point SudutBawah;
	int Panjang, Lebar;
	int Luas;
}Kotak;

typedef struct ElmtOrtu *AddressOrtu;
typedef struct ElmtAnak *AddressAnak;

typedef struct ElmOrtu {
	Kotak InfoOrtu;
	AddressOrtu NextOrtu;
	AddressAnak NextAnak;
}ElmOrtu;

typedef struct ElmtAnak {
	int InfoAnak;
	AddressAnak NextAnak;
}ElmAnak;

typedef struct {
	AddressOrtu firstOrtu;
}ListOrtu;

typedef struct {
	AddressAnak firstAnak;
}ListAnak;

typedef struct {
	ListOrtu TList[nMax + 1];
	int neff;
}TabList;

void CreatePoint(Point *P);

float HitungPanjang (Point abs);

int HitungLebar (Point ord);

float HitungLuas (Point ord, Point obs, Kotak K);

