/*
	Program 	:
	Author 		: 2450081095 - Muamar jaenul anwar sidiq
	Kelas 		: D
	Deskripsi 	: Header dari multiple lingked list
	Tanggal 	: 18/06/2025
*/
#include <stdio.h>


#define nil_NULL
#define infoOrtu(p) (p)->nextOrtu
#define infoAnak(p) (p)->infoAnak
#define nextOrtu(p) (p)-> nextOrtu
#define nextAnak(p) (p)->nextAnak
#define firstOrtu(L) (L).firstOrtu
#define firstAnak(L) (L).firstAnak
#define nMax 10


typedef struct {
	int abs,ord;
}point;

typedef struct {
	point sudutAtas;
	point sudutBawah;
	int Panjang,lebar;
	int luas;
}kotak;

typedef struct ElmOrtu *addressOrtu;
typedef struct ElmOrtu *addressAnak;

typedef struct  ElmOrtu {
	kotak infoOrtu;
	addressOrtu nextOrtu;
	addressAnak nextAnak;
	
}ElmOrtu;

typedef struct ElmAnak{
	int infoAnak;
	addressAnak nextAnak;
}ElmAnak;

typedef struct {
	addressOrtu firstOrtu;
}ListOrtu;

typedef struct {
	addressAnak firstAnak;
}ListAnak;

typedef struct {
	ListOrtu TList[nMax+1];
	int neff;
}TabList;

void CreateTabList (TabList *T);

float HitungPanjang(point abs);

int HitungLebar(point ord);

float HitungLuas(point ord,point abs, kotak k);











	 
