/*
	Program		: UAS.c
	Nama 		: Alsa Ilhami Binsar - 2450081112
	Kelas 		: D
	Deskripsi 	: 
	Tanggal 	: 18/06/2025
*/

#include "uasalsa.h"

void CreateListOrtu (ListOrtu *LO){
	//kamus
	
	//algoritma
	FirstOrtu(*LO) = nil;
}

void CreateListAnak (ListAnak *LA){
	//kamus
	
	//algoritma
	FirstAnak(*LA) = nil;
}

void CreateTabList(TabList *T){
	//kamus
	
	//algoritma
	(*T).nEff = nil;
}

void CreatePoint(Point *P){
	//kamus
	
	//algoritma
	(*P).abs = nil;
	(*P).ord = nil;
}

int HitungPanjang(Point ord, Kotak K){
	//kamus
	int y1, y2;
	int panjang;
	//algoritma
	panjang = 0;
	panjang = panjang + (y1 + y2);
	
	return panjang = K.pjg;
}

int HitungLebar(Point abs, Kotak K){
	//kamus
	int x1, x2;
	int lebar;
	//algoritma
	lebar = 0;
	lebar = lebar + (x1 + x2);
	
	return lebar = K.lbr;
}

float HitungLuas(Point ord, Point abs, Kotak K){
	//kamus
	float luas;
	//algoritma
	luas = K.pjg * K.lbr;
	
	return luas = K.luas;
}

void CetakKotak (Kotak K){
	//kamus
	
	//algoritma
	
}

void AlokasiOrtu (int O){
	//kamus
	addressOrtu P;
	//algoritma
	P = malloc(sizeof(ElmOrtu));
}

void AlokasiAnak (int A){
	//kamus
	addressAnak P;
	//algoritma
	P = malloc(sizeof(ElmAnak));
}
