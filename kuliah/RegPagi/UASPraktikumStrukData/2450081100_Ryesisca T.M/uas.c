/*	Program 	: uas.c
	Author		: Ryesisca Tajwita Mulyadi - 2450081100
	Date		: 18/06/25 13:04
	Description	: Ulangan Akhir Semester Praktikum
*/

// Preprocessor
#include <stdio.h>
#include <stdlib.h>

// Deklarasi Prototype 
#define nMax 10
#define nil NULL
#define infoOrtu(P) (P) -> infoOrtu
#define infoAnak(P) (P) -> infoAnak
#define nextOrtu(P) (P) -> nextOrtu
#define nextAnak(P) (P) -> nextAnak
#define firstOrtu(L) (L).firstOrtu
#define firstAnak(L) (L).firstAnak

// Tipe Point
typedef struct { 
	int x, y;
	} Point;
	
typedef struct { 
	Point p1, p2;
	int panjang, lebar, luas;
	} Kotak;

// Tipe List

typedef struct ElmOrtu *addressOrtu;
typedef struct ElmAnak *addressAnak;

typedef struct ElmOrtu {
	Kotak infoOrtu;
	addressOrtu nextOrtu;
	addressAnak firstAnak;
	} ElmOrtu;

typedef struct ElmAnak {
	int infoAnak ;
	addressAnak nextAnak ;
	} ElmAnak;

typedef struct{
	addressOrtu firstOrtu;
	}ListOrtu;

typedef struct{
	addressAnak firstAnak;
	}ListAnak;
	
typedef struct{
	ListOrtu TList[nMax + 1];
	int nEff;
	} Tablist;

// Body Prototype 
void createList (Tablist *TB) {
/*	I.S : List terdefinisi kosong
   	F.S : List diisi point
*/
	TB->nEff = 0;
}

int hitungLuas (Kotak K){
// Menghitung luas kotak

	return K.panjang * K.lebar;
}
void addFirstAnak (addressAnak *La, int N){
/* 	I.S : La terdefinisi kosong
	F.S : La diisi elemen ke N
*/
	// Kamus
	addressAnak awal; 
	
	// Algoritma 
	awal = (addressAnak) malloc(sizeof(ElmAnak));
	awal -> infoAnak = N;
	awal -> nextAnak = *La;
	*La = awal;
	
}

void cetakList (Tablist TB){
	// Kamus
	int i;
	addressAnak A;
	addressOrtu P;
	
	// Algoritma
	for(i=0; i < TB.nEff; i++){
		printf("Kotak ke-%d\n", i + 1);
	
		P = TB.TList[i].firstOrtu;
		if(P != NULL){
			printf("Panjang : %d\n", P -> infoOrtu.panjang);
	 		printf("Lebar   : %d\n", P -> infoOrtu.lebar);
			printf("Luas    : %d\n", P -> infoOrtu.luas);
			printf("Anak-anak: ");
			A = P -> firstAnak;
			while (A != NULL) {
				printf ("%d", A -> infoAnak);
				A = A -> nextAnak;
			}
		}
	}
}

// Main Driver
int main () {
	
	// Kamus
	ListOrtu Lo;
	
	// Algoritma 
	createList(&Lo);
	
	return 0;
}
