/*	Program 	: point.h
	Author  	: 2450081096_Rara Winasti Hanifa Agistini
	Kelas   	: D
	Deskripsi 	: Header file dari prototype point
	Tanggal 	: 12 April 2025
*/

#ifndef POINT_H
#define POINT_H
#include "boolean.h"
#include <stdio.h>
#include <conio.h>
#include "math.h"
#define Absis(P) (P).X
#define Ordinat(P) (P).Y
#define PI 3.14159265

/**Definisi ABSTRACT DATA TYPE POINT **/
typedef struct{
	int X; //absis
	int Y; //ordinat
}POINT;

/* Prototype POINT */

/* Konstruktor membentuk POINT */

POINT CreatePOINT(int x, int y);
POINT CreatePOINT2(int xBaru, int yBaru);

// Selektor POINT
int GetAbsis (POINT P);

// Mengirimkan komponen Absis dari P
int GetOrdinat (POINT P); // Mengirimkan komponen Ordinat dari P POINT

/* Set nilai komponen */
void SetAbsis (POINT *P, int newX); 
void SetOrdinat (POINT *P, int newy);

/* Destruktor/Dealokator: tidak perlu */

/*{KELOMPOK Interaksi dengan I/O device, BACA/TULIS */ 
void BacaPOINT (POINT *P); 
void CetakPOINT (POINT P);

/** Kelompok operasi relasional terhadap POINT **/
boolean EQ (POINT P1, POINT P2);
// Mengirinkan true jika PI- P2, dan false jika sebaliknya 
boolean NEQ (POINT P1, POINT P2); 
// Mengirimkan true jika PI tidak sama dengan P2, dan false jika sebaliknya 
boolean LT (POINT P1, POINT P2); 
// Mengirimkan true jika P1 P2, dan false jika sebaliknya
// Definisi lebih kecil: posisi titik lebih ke kiri atau ke bawah dalam bidang kartesian
boolean MT (POINT P1, POINT P2);
// Mengirimkan true jika PI > P2, dan false jika sebaliknya.
// Definisi lebih besar: posisi titik lebih ke kanan atau ke atas dalam bidang kartesian 

/* Kelompok menentukan di mana P berada */ 
boolean IsOrigin (POINT P);
// Menghasilkan true jika P berada pada titik origin yaitu nilai X-0 dan Y-0, dan false jika sebaliknya 
boolean IsOnSbX (POINT P);
// Menghasilkan true jika P terletak Pada sumbu X yaitu nilai Y=0, dan false jika sebaliknya
boolean IsOnSbY (POINT P); 
// Menghasilkan true jika P terletak pada sumbu Y yaitu nilai X-0, dan false jika sebaliknya 
int Kuadran (POINT P);
// Menghasilkan kuadran dari P: 1,2,3, atau 4 
// Precondition: P bukan Titik Origin, dan P tidak terletak di salah satu Bumbu
float Jarak2Point(POINT P1, POINT P2);

/* KELOMPOK OPERASI LAIN TERHADAP TYPE */
POINT Mirror01 (POINT P, boolean SbX, boolean SbY); // Menghasilkan salinan P yang dicerminkan tergantung nilai SbX dan SBY 
// Jika SbX bernilai true, maka dicerminkan terhadap Sumbu X
// Jika SbY bernilai true, maka dicerminkan terhadap Sumbu Y
float JarakO (POINT P);
// Menghitung jarak P dari titik origin (0,0)
void GeserkeSbX (POINT *P);
void GeserkeSbY (POINT *P);

#endif
