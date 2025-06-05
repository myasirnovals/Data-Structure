//
// Created by myasi on 03/06/2025.
//

#include "doubleLinkList.h"

#include <stdio.h>

boolean ListEmpty(List L)
{
    if (First(L) == Nil)
    {
        return true;
    } else
    {
        return false;
    }
}

void CreateList(List *L)
{
    First(*L) = Nil;
}

address Alokasi (infotype X)
{
    address newNode;

    newNode = (ELmtList *)malloc(sizeof(ELmtList));

    Info(newNode) = X;
    Next(newNode) = Nil;
    Prev(newNode) = Nil;

    return newNode;
}

void Dealokasi (address P)
{
    free(P);
}

address Search(List L, infotype X)
{
    address nodeCurr;

    nodeCurr = First(L);
    while (nodeCurr != Nil)
    {
        if (Info(nodeCurr) == X)
        {
            return nodeCurr;
        }

        nodeCurr = Next(nodeCurr);
    }

    return Nil;
}

void AddFirst(List *L, infotype X)
{
    address newNode;

    newNode = Alokasi(X);

    if (newNode != Nil)
    {
        Info(newNode) = X;
        Next(newNode) = First(*L);
        First(*L) = Prev(newNode);
        First(*L) = newNode;
    }
}

void AddLast(List *L, infotype X)
{
    address newNode, nodeCurr;

    newNode = Alokasi(X);
    nodeCurr = First(*L);

    if (newNode != Nil)
    {
        while (Next(nodeCurr) != Nil)
        {
            nodeCurr = Next(nodeCurr);
        }

        Next(nodeCurr) = newNode;
        Prev(newNode) = nodeCurr;
    }
}

void DelFirst(List *L, infotype *X)
{
    address delNode, nodeCurr, tmp;

    delNode = First(*L);
    First(*L) = Next(First(*L));

    *X = Info(delNode);
    tmp = delNode;
    Dealokasi(tmp);

    tmp = Nil;
    Prev(First(*L)) = Nil;
}

void DelLast(List *L, infotype *X)
{
    address delNode, tmp1, tmp2;

    delNode = First(*L);
    *X = Info(delNode);
    tmp1 = delNode;

    while (Next(tmp1) != Nil)
    {
        tmp1 = Next(tmp1);
    }

    tmp2 = Prev(tmp1);
    Next(tmp2) = Nil;
    Dealokasi(tmp1);
}

void CetakList(List L)
{
    address nodeCurr;

    nodeCurr = First(L);
    printf("NUll");
    while (nodeCurr != Nil)
    {
        printf(" <- [%d] -> ", Info(nodeCurr));

        nodeCurr = Next(nodeCurr);
    }
    printf("NULL");
}