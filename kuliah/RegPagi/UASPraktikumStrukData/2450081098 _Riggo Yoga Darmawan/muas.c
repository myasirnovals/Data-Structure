/*
 	Program		: muas.c
 	Author		: 2450081098, Riggo Yoga Darmawan
 	Kelas		: D
 	Deskripsi	: Main driver dari multiple linked list
 	Tanggal		: 18 - 06 - 2025
*/

#include <stdio.h>
#include "uas.h"

int main() {
	//Kamus
	TabList MyList;
	Kotak MyKotak;
	Point MyPoint;
	int x1, y1, x2, y2;
	//Algoritma
	while(x1 !=999 && y1 !=999 && x2 !=999 && y2 !=999){
		printf("x1 : "); scanf("%d",&x1);
		printf("y1 : "); scanf("%d",&y1);
		printf("x2 : "); scanf("%d",&x2);
		printf("y2 : "); scanf("%d",&y2);
	}
	
	return 0;
}
