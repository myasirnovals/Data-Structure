/* 
	Program: Uas.h
	Nama: Gusni keanu
	Kelas: D
	NIM: 2450081101
	Deskripsi: UAS Praktikum Struktur Data
	Tanggal: 18-06-2025
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define nMax 10
#define InfoOrtu(P) (P)->InfoOrtu
#define InfoAnak(P) (P)->InfoAnak
#define Nil_NULL
#define nextOrtu(P) (P)->nextOrtu
#define nextAnak(P) (P)->nextAnak
#define firstOrtu(L) (L).firstOrtu
#define firstAnak(L) (L).firstAnak


typedef struct{
	int abs, ord;
}point;	


typedef struct{
	point p1,p2;
	int panjang,lebar,luas;
}kotak;


typedef struct Elm*addressOrtu;

typedef struct Elm*addressAnak;
	
typedef struct{
	kotak InfoOrtu;
	addressOrtu nextOrtu;
	addressAnak	nextAnak;
}ElmOrtu;

typedef struct{
	int InfoAnak;
	addressAnak nextAnak;
	
}ELmAnak;	


typedef struct{
	addressOrtu firstOrtu;
}ListOrtu;

typedef struct{
	addressAnak firstAnak;
}ListAnak;

typedef struct {
	int nEff;
}TabList;

void CreaetListOrtu(ListOrtu *L);
addressOrtu alokasiOrtu(int p, int l);
addressAnak alokasiAnak(int nilai);
void insertlastOrtu(ListOrtu*L,addressOrtu P);
void addFirstAnak(addressAnak *L,addressAnak P);
void generateAnak(addressOrtu ortu);
void printAll(ListOrtu);
