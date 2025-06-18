/*
program 	: uas.h
author		: 2450081110 - muhammad umair tilmisani
kelas 		: D 
deskripsi 	: 
tanggal		: 18/06/2025
*/


#ifndef uas_H
#define uas_H

#include <stdio.h>
#include <stdlib.h>

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
void InputData(ListOrtu *L);

#endif
