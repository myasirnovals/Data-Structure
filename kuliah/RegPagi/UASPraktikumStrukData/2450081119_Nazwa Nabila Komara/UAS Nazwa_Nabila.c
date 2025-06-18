/*	Program		: uas.c
	Author		: 2450081119 - Nazwa Nabila Komara
	Date		: 18 Juni 2025
	Description	: 
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define nMax 10
#define Nil Null
#define InfoOrtu(p) (p)->InfoOrtu
#define InfoAnak(p) (p)->InfoAnak
#define nextOrtu(p) (p)->nextOrtu
#define nextAnak(p) (p)->nextAnak
#define FirstOrtu (L) (L).firstOrtu
#define FirstAnak (L) (L).firstAnak 

typedef struct{
	int abs, ord;
}Point;

typedef struct{
	Point SudutAtas;
	Point SudutBawah;
	int Panjang, lebar;
	int luas;
}Kotak;

typedef struct tElmOrtu *addressOrtu;
typedef struct tElmAnak *addressAnak;

typedef struct tElmOrtu{
	Kotak InfoOrtu;
	addressOrtu nextOrtu;
	addressAnak nextAnak;
}ElmOrtu;

typedef struct tElmAnak{
	int InfoAnak;
	addressAnak nextAnak;
}ElmAnak;

typedef struct{
	addressOrtu firstOrtu;
}ListOrtu;

typedef struct{
	addressAnak firstAnak;
}ListAnak;

typedef struct{
	ListOrtu TList[nMax+1];
	int nEff;
}TabList;

// Prototype
void CreateListOrtu(ListOrtu *L);
void CreateListAnak(ListAnak *L);
addressOrtu alokasiOrtu(Kotak data) {
	addressOrtu P = (addressOrtu) malloc(sizeof(ElmOrtu));
	if (P != NULL) {
		P->InfoOrtu= data;
		P->nextOrtu = NULL;
		P->nextAnak = NULL;
	}
	return P;
}
addressAnak alokasiAnak (int info) {
	addressAnak P = (addressAnak) malloc(sizeof(ElmAnak));
	if (P != NULL) {
		P->nextAnak = NULL;
		P->nextAnak = NULL;
	}
	return P;
}

//main driver
int main() {
	TabList MyTab;
	Kotak MyKotak;
	ListOrtu MyListOrtu;
	int x1, y1, x2, y2;
}




