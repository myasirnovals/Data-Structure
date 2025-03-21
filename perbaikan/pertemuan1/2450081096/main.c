/*
Program: Adt Jam.c
    Author: 2450081096_ Rara Winasti Hanifa Agistini
    Date: 19 Maret 2025
    Desce: Latihan Adt Jam
*/
#include<stdio.h>
#include<conio.h>
#include "boolean.h"

//type bentukan jam
typedef struct
{
    int jj, mm, dd;
} jam;

//prototype
void CreateJam(jam* j);
/*	i.s:
    F.s:
*/
void SetJam(jam* j, int jam, int mnt, int dtk);
/*	i.s:
    F.s:
*/
void CetakJam(jam j);
/*	i.s:
    F.s:
*/

jam CopyJam(jam j);
//Copy jam baru dari j
boolean Is2JamSama(jam j1, jam j2);
//kirim true jika j1=j2, false juka j1 bukan sama dengan j2
int jam2Detik(jam j);
//kamus j jadi detik

// main drive
int main()
{
    //kamus
    jam Myjam, Myjam1, Myjam3;
    int jam, mnt, dtk;
    int detik;
    //Algoritma
    CreateJam(&Myjam);
    printf("input jam:");
    scanf("%d", &jam);
    printf("input mnt:");
    scanf("%d", &mnt);
    printf("input dtk:");
    scanf("%d", &dtk);
    SetJam(&Myjam, jam, mnt, dtk);
    CetakJam(Myjam);
    Myjam1 = CopyJam(Myjam);
    CetakJam(Myjam1);
    if (Is2JamSama(Myjam, Myjam1))
        printf("sama");

    return 0;
}


//Body prototype
void CreateJam(jam* j)
{
    (*j).jj = 0;
    (*j).mm = 0;
    (*j).dd = 0;
}

void SetJam(jam* j, int jam, int mnt, int dtk)
{
    (*j).jj = jam;
    (*j).mm = mnt;
    (*j).dd = dtk;
}

void CetakJam(jam j)
{
    printf("[%d:%d:%d]", j.jj, j.mm, j.dd);
}

jam CopyJam(jam j)
{
    //kamus
    jam j2;
    //Algoritma
    j2 = j;
    return (j2);
}

boolean Is2JamSama(jam j1, jam j2)
{
    //kamus
    boolean sama;
    //algoritma
    sama = false;
    if (j1.jj == j2.jj && j1.mm == j2.mm && j1.dd == j2.dd)
        sama = true;

    return (sama);
}
