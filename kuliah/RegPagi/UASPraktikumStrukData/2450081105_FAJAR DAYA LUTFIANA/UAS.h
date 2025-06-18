/*
Program : UAS.H
Nama : 2450081105_Fajar Daya Lutfiana
Kelas : D
Deskripsi : Header file dari UAS Praktikum
*/

//preprocessor
#ifndef UAS_H
#define UAS_H

#include<stdlib.h>
#include<stdio.h>
#include"boolean.h"
//definisi
#define nil NULL
#define InfoOrtu(P) P->InfoOrtu
#define InfoAnak(P) P->InfoAnak
#define NextAnak(P) P->nextAnak
#define NextOrtu(P) P->nextOrtu
#define FirstOrtu(L) (L).FirstOrtu
#define FirstAnak(L) (L).FirstAnak

#define nMax 10
//Kamus Global
typedef struct{
	int abs;
	int ord;
}Point;

typedef struct{
	int panjang;
	int lebar;
	int luas;
	Point P1,P2;
}Kotak;

typedef struct tElmtOrtu *addressOrtu;
typedef struct tElmtAnak *addressAnak;

typedef struct tElmtOrtu{
	Kotak Info;
	addressOrtu nextOrtu;
	addressAnak nextAnak;
}ElmtOrtu;

typedef struct tElmtAnak{
	int Info;
	addressAnak nextAnak;
}ElmtAnak;

typedef struct{
	addressOrtu FirstOrtu;
}ListOrtu;

typedef struct{
	addressAnak FirstAnak;
}ListAnak;

typedef struct{
	ListOrtu T[nMax+1];
	int nEff;
}TabList;

/*Prototipe UAS*/

addressAnak AlokasiAnak(int X);
addressOrtu AlokasiOrtu(Kotak X);
void CreateTabel(TabList *T);
void CreateListOrtu(ListOrtu *Lo);
void CreateListAnak(ListAnak *La);
int HitungPanjang(int a, int b);
int HitungLebar(int a,int b);
int HitungLuas(int a,int b);
void CetakKotak(TabList T);


#endif
