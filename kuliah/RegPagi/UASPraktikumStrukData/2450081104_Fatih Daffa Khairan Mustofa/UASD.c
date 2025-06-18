/*
  Program	: UAS.c
  Author	: Fatih Daffa Khairan Mustofa - 2450081104
  Kelas		: D
  Deskripsi	:
  Tanggal	: 18 Juni 2025
*/

#include "UASD.h"

void CreateListOrtu (ListOrtu *Lo){
	// kamus
	
	// algoritma
	FirstOrtu(*Lo) = Nil;
}

void CreateListAnak (ListAnak *La){
	// kamus
	
	// algoritma
	FirstAnak(*La) = Nil;
}

void AddListOrtu (ListOrtu *Lo){
	// kamus
	
	// algoritma
	
}

void CreateTabList (Point *P){
	// kamus
	
	// algoritma
}

void CreatePoint (Point *P){
	// kamus
	int x1, x2, y1, y2;
	int abs, ord;
	// algoritma
	x1 = P->abs;
	y1 = P->ord;
}

int HitungPjg (Kotak K, Point P){
	// kamus
	int Pjg;
	Point P1, P2;
	// algoritma
	Pjg = P1.ord + P2.ord;
	
	return Pjg;
}

int HitungLbr (Kotak K, Point P){
	// kamus
	int Lbr;
	Point P1, P2;
	// algoritma
	Lbr = P1.abs + P2.abs;
	
	return Lbr;
}

float HitungLuas (Kotak k, Point P){
	// kamus
	//Point P1, P2;
	Kotak K;
	int Lbr, Pjg, Luas;
	
	// algoritma
	//Lbr = P1.abs + P2.abs;
	//Pjg = P1.ord + P2.ord;
	Luas = HitungPjg(K, P) * HitungLbr(K, P);
	
	return Luas;
}
