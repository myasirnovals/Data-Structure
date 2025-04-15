//
// Created by myasi on 15/04/2025.
//

#include <stdlib.h>

#include "list.h"

// Prototype linear list
// konstruktor
void CreateList(List* L)
{
    First(*L) = Nil;
}

// Destruktor/Dealokator
address Alokasi(infoType X)
{
    // kamus
    address newNode;

    // algoritma
    newNode = (Node*)malloc(sizeof(Node));

    Info(newNode) = X;
    Next(newNode) = Nil;

    return newNode;
}

void DeAlokasi(address P)
{
    free(P);
}

// {Kelompok operasi cek elemen kosong atau penuh}
boolean ListEmpty(List L)
{
    if (First(L) == Nil)
    {
        return true;
    }

    else

    {
        return false;
    }
}

// {Kelompok interaksi dengan I/O device, Baca/Tuis
void InsFirst(List* L, infoType X)
{
    address P;

    P = Alokasi(X);

    if (P != Nil)
    {
        Info(P) = X;
        Next(P) = Nil;

        First(*L) = P;
    }
}

void InsAfter(List* L, infoType X, infoType Y)
{
    address P, Prec;
    int i;

    if (Y <= 1)
    {
        InsFirst(L, X);
    }
    else if (Y >= NbElm(*L))
    {
        InsLast(L, X);
    }
    else
    {
        P = Alokasi(X);

        Info(P) = X;
        Prec = First(*L);

        for (i = 1; i < Y - 1; i++)
        {
            Prec = Next(Prec);
        }

        Next(P) = Next(Prec);
        Next(Prec) = P;
    }
}

void InsLast(List* L, infoType X)
{
    address newNode, current;

    newNode = Alokasi(X);
    current = First(*L);

    if (newNode != Nil)
    {
        while (Next(current) != Nil)
        {
            current = Next(current);
        }

        Info(newNode) = X;
        Next(current) = newNode;
    }
}

// Penghapusan elemen
void DelFirst(List* L, infoType* X)
{
    address delNode;

    delNode = First(*L);
    First(*L) = Next(First(*L));

    *X = Info(delNode);
    DeAlokasi(delNode);
}

void DelLast(List* L, infoType* X);

void DelAfter(List* L, infoType* X, infoType Y);

// cetak list
void PrintInfo(List L);

// Kelompok operasi lain terhadap type
int NbElm(List L);

address Search(List L, infoType X);

void InversList(List* L);

List getNewInversList(List L);
