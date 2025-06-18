/*	
	Nama : Ahmad Rafi Nasti
	Nim : 2450081079
	Kelas : Informatika C
	Judul : UAS Praktikum
	Tanggal : 18/06/2025 
*/

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

int main(){
	int x1, y1, x2, y2;
	
	printf("Masukan Koordinat x dan y1:\n");
	printf("x1:");
	scanf("%d", &x1);
	printf("y1:");
	scanf("%d", &y1);
	printf("x2:");
	scanf("%d", &x2);
	printf("y2:");
	scanf("%d", &y2);
	
	printf("\nKoordinat yang dimasukkan:\n");
	printf("Koordinat 1 (%d, %d)\n", x1, y1);
	printf("Koordinat 2 (%d, %d)\n", x2, y2);


	return 0;

}
