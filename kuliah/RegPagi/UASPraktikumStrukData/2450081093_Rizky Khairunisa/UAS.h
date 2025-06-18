/* 
	Program : UAS.h
	Author : 2450081093 - Rizky Khairunisa
	Kelas  : D
	Deskripsi : Header prototype dari file UAS
	Date	: 18 Juni 2025
*/

// Preprocessor
#ifndef _LIST_H
#define _LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define nMax 10
#define Nil NULL
#define infoOrtu(P) (P)->infoOrtu
#define infoAnak(P) (P)->infoAnak
#define nextOrtu(P) (P)->nextOrtu
#define nextAnak(P) (P)->nextAnak
#define FirstOrtu(L) (L).firstOrtu
#define FirstAnak(L) (L).firstAnak

typedef struct {
	int abs, ord;
}Point;

typedef struct {
	Point P1, P2;
	int pjg, lbr, Luas;
}Kotak;

typedef struct tElmOrtu *addressOrtu;
typedef struct tElmAnak *addressAnak;
typedef struct tElmOrtu {
	Kotak infoOrtu;
	addressOrtu nextOrtu;
	addressAnak nextAnak;
}ElmOrtu;     

typedef struct tElmAnak {
	int infoAnak;
	addressAnak nextAnak;
}ElmAnak;

typedef struct {
	addressOrtu firstOrtu;
}ListOrtu;

typedef struct {
	addressAnak firstAnak;
}ListAnak;

typedef struct {
	ListOrtu TList[nMax+1];
	int nEff;
}TabList;

// Head of Prototype
void CreateList (ListOrtu *L);
addressOrtu AlokasiOrtu (Point a, Point b);
addressAnak AlokasiAnak (int nilai);
void AddOrtu (ListOrtu *L, ElmOrtu *P);
void AddFirstAnak(ListAnak *L, ElmAnak  *P);
void InputData (ListOrtu *L);
int HitungLuas(Point P1, Point P2);
void CetakData(ListOrtu L);

#endif
 
