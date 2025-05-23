//
// Created by myasi on 15/04/2025.
//

#ifndef LIST_H
#define LIST_H

// library
#include <stdio.h>
#include <conio.h>

#include "boolean.h"

// definisi untuk memanipulasi data
#define Nil NULL
#define Info(P) (P)->info
#define Next(P) (P)->next
#define First(L) (L).First

// definisi adt list
typedef struct tElmList *address;
typedef int infoType;

typedef struct tElmList
{
    infoType info;
    address next;
} Node;

typedef struct
{
    address First;
} List;

// Prototype linear list
// konstruktor
void CreateList(List *L);

// Destruktor/Dealokator
address Alokasi(infoType X);

void DeAlokasi(address P);

// {Kelompok operasi cek elemen kosong atau penuh}
boolean ListEmpty(List L);

// {Kelompok interaksi dengan I/O device, Baca/Tulis}
// Penambahan elemen
void InsFirst(List *L, infoType X);

void InsLast(List *L, infoType X);

void InsAfter(List *L, infoType X, infoType Y);

// Penghapusan elemen
void DelFirst(List *L, infoType *X);

void DelLast(List *L, infoType *X);

void DelAfter(List *L, infoType *X, infoType  Y);

// cetak list
void PrintInfo(List L);

// Kelompok operasi lain terhadap type
int NbElm(List L);

address Search(List L, infoType X);

void InversList(List *L);

List getNewInversList(List L);

#endif //LIST_H
