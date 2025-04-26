//
// Created by myasi on 26/04/2025.
//
#include "../lib/list.h"
#include "point.c"

#include <stdlib.h> // untuk malloc dan free

/* Konstruktor membentuk List */
void CreateList(List* L)
{
    First(*L) = Nil;
}

/* Alokasi sebuah elemen */
address Alokasi(infotype X)
{
    address P = (address)malloc(sizeof(ElmtList));
    if (P != Nil)
    {
        Info(P) = X;
        Next(P) = Nil;
    }
    return P;
}

/* Dealokasi sebuah elemen */
void DeAlokasi(address P)
{
    free(P);
}

/* Mengecek apakah List kosong */
boolean ListEmpty(List L)
{
    return (First(L) == Nil);
}

/* Penambahan Elemen */
void InsFirst(List* L, infotype X)
{
    address P = Alokasi(X);
    if (P != Nil)
    {
        Next(P) = First(*L);
        First(*L) = P;
    }
}

void InsLast(List* L, infotype X)
{
    address P = Alokasi(X);
    if (P != Nil)
    {
        if (ListEmpty(*L))
        {
            First(*L) = P;
        }
        else
        {
            address Q = First(*L);
            while (Next(Q) != Nil)
            {
                Q = Next(Q);
            }
            Next(Q) = P;
        }
    }
}

void InsAfter(List* L, infotype X, infotype Y)
{
    address Q = First(*L);
    while (Q != Nil && !EQ(Info(Q), Y))
    {
        Q = Next(Q);
    }
    if (Q != Nil)
    {
        address P = Alokasi(X);
        if (P != Nil)
        {
            Next(P) = Next(Q);
            Next(Q) = P;
        }
    }
}

/* Penghapusan Elemen */
void DelFirst(List* L, infotype* X)
{
    if (!ListEmpty(*L))
    {
        address P = First(*L);
        *X = Info(P);
        First(*L) = Next(P);
        DeAlokasi(P);
    }
}

void DelLast(List* L, infotype* X)
{
    if (!ListEmpty(*L))
    {
        address P = First(*L);
        address Q = Nil;

        while (Next(P) != Nil)
        {
            Q = P;
            P = Next(P);
        }
        *X = Info(P);
        if (Q == Nil)
        {
            First(*L) = Nil;
        }
        else
        {
            Next(Q) = Nil;
        }
        DeAlokasi(P);
    }
}

void DelAfter(List* L, infotype* X, infotype Y)
{
    address Q = First(*L);
    while (Q != Nil && !EQ(Info(Q), Y))
    {
        Q = Next(Q);
    }
    if (Q != Nil && Next(Q) != Nil)
    {
        address P = Next(Q);
        *X = Info(P);
        Next(Q) = Next(P);
        DeAlokasi(P);
    }
}

/* Print Info */
void PrintInfo(List L)
{
    if (ListEmpty(L))
    {
        printf("list kosong\n");
    }
    else
    {
        address P = First(L);
        while (P != Nil)
        {
            CetakPOINT(Info(P));
            P = Next(P);
        }
    }
}

/* Menghitung banyaknya elemen List */
int NbElmt(List L)
{
    int count = 0;
    address P = First(L);
    while (P != Nil)
    {
        count++;
        P = Next(P);
    }
    return count;
}

/* Search elemen dengan nilai tertentu */
address Search(List L, infotype X)
{
    address P = First(L);
    while (P != Nil)
    {
        if (EQ(Info(P), X))
        {
            return P;
        }
        P = Next(P);
    }
    return Nil;
}

/* Membalik List tanpa alokasi/dealokasi */
void InversList(List* L)
{
    address prev = Nil;
    address curr = First(*L);
    address next;
    while (curr != Nil)
    {
        next = Next(curr);
        Next(curr) = prev;
        prev = curr;
        curr = next;
    }
    First(*L) = prev;
}

/* Menghasilkan list baru, hasil invers dari L */
List getNewInversList(List L)
{
    List L2;
    CreateList(&L2);
    address P = First(L);
    while (P != Nil)
    {
        InsFirst(&L2, Info(P));
        P = Next(P);
    }
    return L2;
}
