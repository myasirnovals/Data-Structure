/*
	Program		: kotak.h
	Author		: 2450081096_Rara Winasti Hanifa Agistini
	Kelas		: D
	Deskripsi	: Header file fari kotak.c
	Date		: 18 Juni 2025
*/
#ifndef KOTAK_H
#define KOTAK_H

#include <stdio.h>
#include <stdlib.h>

#define nMax 10
#define Nil NULL

typedef struct tAnak *anakAddress;
typedef struct tOrtu *ortuAddress;

typedef struct tAnak {
    int nilai;
    anakAddress next;
} Anak;

typedef struct tOrtu {
    int panjang;
    int lebar;
    int luas;
    anakAddress listAnak;
    ortuAddress next;
} Ortu;

typedef struct {
    ortuAddress first;
} ListOrtu;

#define First(L) ((L).first)

void CreateList(ListOrtu *L);
ortuAddress AlokasiOrtu(int panjang, int lebar);
anakAddress AlokasiAnak(int nilai);
void AddOrtu(ListOrtu *L, ortuAddress P);
void AddFirstAnak(anakAddress *L, anakAddress P);
void Tampil(ListOrtu L);
void InputData(ListOrtu *L);

#endif
