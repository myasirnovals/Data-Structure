/* 	Program		: UAS.c
	Author		: 2450081113 - Dhela Junita Ananda
	Date		: 18 Juni 2025
	Description	: 
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define nMak 10
#define Nil NULL
#define InfoOrtu(P) (P)->InfoOrtu
#define InfoAnak(P) (P)->InfoAnak
#define nextOrtu(P) (P)->nextOrtu
#define nextAnak(P) (P)->nextAnak
#define firstOrtu(L) (L).firstOrtu
#define firstAnak(L) (L).firstAnak

typedef struct {
	int obs, ord;
} Point;

typedef struct {
	Point SudutAtas;
	Point SudutBawah;
	int Panjang;
	int lebar;
	int luas;
} Kotak;

typedef struct tElmOrtu *addressOrtu;
typedef struct tErlmAnak *addressAnak;

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
	ListOrtu TList[nMak+1];
	int nEff;
}TabList;

// prototype

void CreateListOrtu(ListOrtu *L);
void CreateAnak(ListAnak *L);
addressOrtu alokasiOrtu(Kotak data);
addressAnak alokasiAnak (int Info);

void insertFirstOrtu(ListOrtu *L, addressOrtu P);
void insertFirstAnak(ListAnak *L, addressAnak P);
void printAll(TabList T);
void isiData(TabList *T);

int main() {
	TabList T;
	int i;
	T.nEff = 2;
	
	for (i=0; i<T.nEff; i++) {
		CreateListOrtu(&T.TList[i]);
	}
	isiData(&T);
	printAll(T);
	
	return 0;
}

// Implementasi
void CreateListOrtu(ListOrtu *L) {
	firstOrtu(*L) = Nil;
}
 
 
