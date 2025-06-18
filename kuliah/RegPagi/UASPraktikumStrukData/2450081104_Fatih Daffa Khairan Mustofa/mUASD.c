/*
  Program	: mUAS.c
  Author	: Fatih Daffa Khairan Mustofa - 2450081104
  Kelas		: D
  Deskripsi	:
  Tanggal	: 18 Juni 2025
*/

#include <stdio.h>
#include "UASD.h"


int main(){
	// kamus
	int x1, y1, x2, y2;
	Kotak K;
	Point P;
	// algoritma
	CreatePoint(&P);
	printf("Masukan Koordinat x dan y:\n");
	while (x1 != 999 && x2 != 999 && y1 != 999 && y2 != 999){
		printf("x1: ");
		scanf("%d", &x1);
		printf("y1 :");
		scanf("%d", &y1);
		printf("x2 :");
		scanf("%d", &x2);
		printf("y2 :");
		scanf("%d", &y2);
	}
	printf("Luasnya Adalah %d", HitungLuas(K, P));
	return 0;
}
