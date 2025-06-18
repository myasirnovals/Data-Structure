/*
	Program		: mUAS.c
	Nama 		: Alsa Ilhami Binsar - 2450081112
	Kelas 		: D
	Deskripsi 	: 
	Tanggal 	: 18/06/2025
*/

#include "uasalsa.h"


int main(){
	//kamus
	ListOrtu MyListOrtu;
	ListAnak MyListAnak;
	TabList MyTabList;
	Point MyPoint;
	int x1, y1, x2, y2;
	//algoritma
	CreatePoint(&MyPoint);
	CreateTabList(&MyTabList);
	
	while(x1 != 999 && y1 != 999 && x2 != 999 && y2 != 999){
		printf("x1: "); scanf("%d", &x1);
		printf("y1: "); scanf("%d", &y1);
		printf("x2: "); scanf("%d", &x2);
		printf("y2: "); scanf("%d", &y2);
		}
	
	return 0;
}
