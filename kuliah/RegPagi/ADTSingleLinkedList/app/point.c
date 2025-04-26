//
// Created by myasi on 26/04/2025.
//
#include "../lib/point.h"
#include <math.h>    // Untuk fungsi sqrt dan pow

/* Konstruktor membentuk POINT */
void CreatePOINT(POINT *P) {
    P->X = 0;
    P->Y = 0;
}

void CreatePOINT2(POINT *P, int XBaru, int YBaru) {
    P->X = XBaru;
    P->Y = YBaru;
}

/* Selektor POINT */
int GetAbsis(POINT P) {
    return P.X;
}

int GetOrdinat(POINT P) {
    return P.Y;
}

/* Set nilai komponen */
void SetAbsis(POINT *P, int newX) {
    P->X = newX;
}

void SetOrdinat(POINT *P, int newY) {
    P->Y = newY;
}

/* Interaksi dengan I/O device, BACA/TULIS */
void BacaPOINT(POINT *P) {
    int x, y;
    scanf("%d %d", &x, &y);
    P->X = x;
    P->Y = y;
}

void CetakPOINT(POINT P) {
    printf("(%d , %d)\n", P.X, P.Y);
}

/* Operasi relasional terhadap POINT */
boolean EQ(POINT P1, POINT P2) {
    return (P1.X == P2.X) && (P1.Y == P2.Y);
}

boolean NEQ(POINT P1, POINT P2) {
    return !EQ(P1, P2);
}

boolean LT(POINT P1, POINT P2) {
    return (P1.X < P2.X) || ((P1.X == P2.X) && (P1.Y < P2.Y));
}

boolean MT(POINT P1, POINT P2) {
    return (P1.X > P2.X) || ((P1.X == P2.X) && (P1.Y > P2.Y));
}

/* Menentukan di mana P berada */
boolean IsOrigin(POINT P) {
    return (P.X == 0) && (P.Y == 0);
}

boolean IsOnSbX(POINT P) {
    return (P.Y == 0);
}

boolean IsOnSbY(POINT P) {
    return (P.X == 0);
}

int Kuadran(POINT P) {
    if (P.X > 0 && P.Y > 0) return 1;
    if (P.X < 0 && P.Y > 0) return 2;
    if (P.X < 0 && P.Y < 0) return 3;
    if (P.X > 0 && P.Y < 0) return 4;
    return 0; // Bukan di kuadran manapun
}

/* Operasi lain terhadap POINT */
POINT MirrorOf(POINT P, boolean SbX, boolean SbY) {
    POINT result = P;
    if (SbX) result.Y = -result.Y;
    if (SbY) result.X = -result.X;
    return result;
}

float JarakO(POINT P) {
    return sqrt((float)P.X * P.X + (float)P.Y * P.Y);
}

void GeserKeSbX(POINT *P) {
    P->Y = 0;
}

void GeserKeSbY(POINT *P) {
    P->X = 0;
}
