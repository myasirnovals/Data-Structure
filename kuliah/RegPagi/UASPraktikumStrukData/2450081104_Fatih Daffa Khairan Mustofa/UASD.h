/*
  Program	: UAS.h
  Author	: Fatih Daffa Khairan Mustofa - 2450081104
  Kelas		: D
  Deskripsi	:
  Tanggal	: 18 Juni 2025
*/

#include <stdio.h>
#define nMax 10

#define Nil NULL
#define InfoOrtu(P) (P)->InfoOrtu
#define InfoAnak(P) (P)->InfoAnak
#define NextOrtu(P) (P)->NextAnak
#define NextAnak(P) (P)->NextAnak
#define FirstOrtu(L) (L).FirstOrtu
#define FirstAnak(L) (L).FirstAnak

// tipe bentukan
typedef struct {
	int abs, ord;
}Point;

typedef struct {
	Point P1, P2;
	int Pjg, Lbr, Luas;
}Kotak;

typedef struct tElmOrtu *addressOrtu;

typedef struct tElmAnak *addressAnak;

typedef struct tElmOrtu{
	Kotak InfoOrtu;
	addressOrtu NextOrtu;
	addressAnak NextAnak;
}ElmOrtu;

typedef struct tElmAnak{
	int InfoAnak;
	addressAnak NextAnak;
}ElmAnak;

typedef struct {
	addressOrtu FirstOrtu;
}ListOrtu;

typedef struct {
	addressAnak FirstAnak;
}ListAnak;

typedef struct {
	ListOrtu T[nMax + 1];
	int nEff;
}TabList;

// prototype
void CreateListOrtu (ListOrtu *Lo);

void CreateListAnak (ListAnak *La);

void AddListOrtu (ListOrtu *Lo);

void CreateTabList (Point *P);

void CreatePoint (Point *P);

float HitungLuas (Kotak k, Point P);
