//
// Created by myasi on 18/03/2025.
//

#include <stdio.h>
#include "boolean.h"

typedef struct
{
    int Hour;
    int Minute;
    int Second;
} JAM;

// KONSTRUKTOR
void CreateJam(JAM* J, int HH, int MM, int SS)
{
    (*J).Hour = HH;
    (*J).Minute = MM;
    (*J).Second == SS;
}

// Selektor nilai biasanya diawali dengan kata GET, biasnya ada tipe
// Kembalian yang sesuai dengan tipe data pada ADT
int GetHour(JAM J)
{
    return J.Hour;
}

int GetMinute(JAM J)
{
    return J.Minute;
}

int GetSecond(JAM J)
{
    return J.Second;
}

// Set nilai biasnya diawali dengan kata SET bisanya selalu pakai void (prosedur)
void SetHour(JAM* J, int newHour)
{
    (*J).Hour = newHour;
}

void SetMinute(JAM* J, int newMinute)
{
    (*J).Minute = newMinute;
}

void SetSecond(JAM* J, int newSecond)
{
    (*J).Second = newSecond;
}

void ReadJam(JAM* J)
{
    int hh, mm, ss;
    do
    {
        printf("Masukan jam: ");
        scanf("%d", &hh);
        printf("\n");

        printf("Masukan Menit: ");
        scanf("%d", &mm);
        printf("\n");

        printf("Masukan Detik: ");
        scanf("%d", &ss);
        printf("\n");
    }
    while (hh < 0 || hh > 23 || mm < 0 || mm > 59 || ss < 0 || ss > 59);

    CreateJam(&(*J), hh, mm, ss);
}

void PrintJam(JAM J)
{
    printf("%d:%d:%d", J.Hour, J.Minute, J.Second);
}

boolean IsJValid(int H, int M, int S)
{
    if ((H >= 0 && H <= 23) && (M >= 0 && M <= 59) && (S >= 0 && S <= 59))
    {
        return true;
    }
    else
    {
        return false;
    }
}

boolean JLT(JAM J1, JAM J2)
{
    if ((J1.Hour < J2.Hour) || (J1.Minute < J2.Minute) || (J1.Second < J2.Second))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Reset(JAM *J)
{
    (*J).Hour = 0;
    (*J).Minute = 0;
    (*J).Second = 0;
}

long int JamToDetik (JAM J)
{
    /**
     *Rumus : detik = 3600 * hour + menit * 60 + detik
     */
    long int detik;

    detik = (J.Hour * 3600) + (J.Minute * 60) + J.Second;
    return detik;
}