/*
	Program		: mline.c
	Author		: 2450081096_Rara Winasti Hanifa Agistini
	Kelas		: D
	Deskripsi	: Main driver dari ADT Line
	Tanggal		: 12 April 2025
*/

#include "line.h"

int main() {
	
	Line L1, L2;
	int deltaX, deltaY;
	
	printf("Nilai L1 : \n");
	BacaLine(&L1);
	CetakLine(L1);
	
	printf("\n\nNilai L2 : \n");
	CetakLine(L2);
	
	printf("\n\nOperasi relasional terhadap line: \n");
	if (IsEQLine(L1,L2)) {
		printf("Nilai L1 sama dengan L2\n");
	} else {
		printf("Nilai L1 tidak sama dengan L2\n");
	}
	printf("\nMenentukan dimana L berada : \n");
	if(IsLOnSbX(L1)) {
		printf("Garis L1 berada di sumbu x\n");
	}
	if(IsLOnSbY(L1)) {
		printf("Garis L1 berada di sumbu y\n");
	}

	if(IsLOnSbX(L2)) {
		printf("Garis L2 berada di sumbu x\n");
	}
	if(IsLOnSbY(L2)) {
		printf("Garis L2 berada di sumbu y\n");
	}
	
	if(IsTegakLurus(L1,L2)) {
		printf("Garis L1 tegak lurus dengan L2\n");
	}
	if(IsSejajar(L1,L2)) {
		printf("Garis L1 sejajar dengan L2\n");
	}
	
	printf("\nOperasi Lain Terhadap Type :\n");
	printf("Masukan nilai deltaX : ");
	scanf("%d", &deltaX);
	printf("Masukan nilai deltaY : ");
	scanf("%d", &deltaY);
	GeserLine(&L1, (int) deltaX, (int) deltaY);
	printf("Nilai L1 :\n");
	CetakLine(L1);
	printf("\n");
	printf("Nilai L2 :\n");
	GeserLine(&L2, (int) deltaX, (int) deltaY);
	CetakLine(L2);
	
	return 0;
}
