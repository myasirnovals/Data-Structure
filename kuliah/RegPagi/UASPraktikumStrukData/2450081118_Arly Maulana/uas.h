/*
	Program		: uas.h
	Author		: Arly Maulana
	Kelas		: D
	NIM			: 2450081118
	Deksripsi	: File header yang berisi prototype
	Tanggal		: 18 Juni 2025
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define nMaks 10
#define Nil NULL

typedef struct tElmOrtu elmOrtu;
typedef struct tElmAnak elmAnak;

typedef elmOrtu *addressOrtu;
typedef elmAnak *addressAnak;

#define infoOrtu(P)	(P)->InfoOrtu
#define infoAnak(P)	(P)->infoAnak
#define nextOrtu(P)	(P)->nextOrtu
#define nextAnak(P)	(P)->nextAnak
#define firstOrtu(L)	(L).firstOrtu
#define firstAnak(L)	(L).firstAnak

typedef struct{
	int abs, ord;
}point;

typedef struct{
	point p1, p2;
	int panjang, lebar, luas;
}kotak;

struct tElmOrtu {
	kotak InfoOrtu;
	addressOrtu nextOrtu;
	addressAnak nextAnak;
};

struct tElmAnak {
	int infoAnak;
	addressAnak nextAnak;
};

typedef struct{
	addressOrtu firstOrtu;
}listOrtu;

typedef struct{
	addressAnak firstAnak;
}listAnak;

typedef struct{
	int nEff;
}tabList;

addressOrtu AlokasiOrtu(kotak dataOrtu);
addressAnak AlokasiAnak(int dataAnak);
void CreateListOrtu(listOrtu *L);
void CreateListAnak(listAnak *L);
void AddFirstOrtu(listOrtu *L, addressOrtu P);
void AddFirstAnak(addressOrtu Ort, addressAnak Anak);
void PrintListOrtu(listOrtu L);
void HitungKotak(kotak *K);
void InputKotak(kotak *K);
