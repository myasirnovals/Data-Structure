//
// Created by myasi on 10/06/2025.
//

#include "btree.h"
#include <stdio.h>
#include <conio.h>

void CreateTree(Tree* T, int x, Tree L, Tree R)
{
    *T = Alokasi(x);
    if (*T != nil)
    {
        left(*T) = L;
        right(*T) = R;
    }
}

address Alokasi(int X)
{
    address P;

    P = (address)malloc(sizeof(Node));
    if (P != nil)
    {
        info(P) = X;
        left(P) = nil;
        right(P) = nil;
    }

    return P;
}

void DeAlokasi(address P)
{
    free(P);
}

int getRoot(Tree T)
{
    return info(T);
}

Tree getLeft(Tree T)
{
    return left(T);
}

Tree getRight(Tree T)
{
    return right(T);
}

int TinggiPohon(Tree T)
{
    int tinggi;

    tinggi = 0;
    if (T != nil)
    {
        tinggi = 1 + Maksimum(TinggiPohon(left(T)), TinggiPohon(right(T)));
    }

    return tinggi;
}

int Maksimum(int Kiri, int Kanan)
{
    if (Kiri > Kanan)
    {
        return Kiri;
    }
    else
    {
        return Kanan;
    }
}

Tree InsSearch (Tree T, int x)
{
    if (T == nil)
    {
        CreateTree(&T, x, nil, nil);
    } else if (x < info(T))
    {
        left(T) = InsSearch(left(T), x);
    } else
    {
        right(T) = InsSearch(right(T), x);
    }

    return T;
}

void CetakTree(Tree T)
{
    if (T != nil)
    {
        printf("%d", info(T));
    }
}

void PreOrder(Tree T)
{
    if (T != nil)
    {
        CetakTree(T);
        PreOrder(left(T));
        PreOrder(right(T));
    }
}

void InOrder(Tree T)
{
    if (T != nil)
    {
        PreOrder(left(T));
        CetakTree(T);
        PreOrder(right(T));
    }
}

void PostOrder(Tree T)
{
    if (T != nil)
    {
        PreOrder(left(T));
        PreOrder(right(T));
        CetakTree(T);
    }
}
