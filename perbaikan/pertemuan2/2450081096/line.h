/*
	Program		: line.h
	Author		: 2450081096_Rara Winasti Hanifa Agistini
	Kelas		: D
	Deskripsi	: Header file dari prototype Line
	Tanggal		: 12 April 2025
*/

#ifndef LINE_H
#define LINE_H
#include "boolean.h"
#include "point.h"
#include <stdio.h>
#include <conio.h>

#define FirstPoint(L) (L).PAwal
#define EndPoint(L) (L).PAkhir

/** Definisi ABSTRACT DATA TYPE Line **/
typedef struct {
	POINT PAwal;  // Titik Awal
	POINT PAkhir; // Titik Akhir
}Line;

/* Prototype Line */
void CreateLine (Line *L);
/*  I.S: L terdefinisi, tidak diketahui nilainya
	F.S: membentuk sebuah Line dari komponen-komponennya dengan L diinisialisasi nilainua dengan PAwal = (0,0) dan PAkhir = (0,0)
*/	

void CreateLine2 (Line *L, POINT First, POINT End);
/* 	I.S: L terdefinisi, tidak diketahui nilalinya
	F.S: membentuk sebuah Line dari komponen-komponennya dengan L diinisialisasi nilainua dengan PAwal = First dan PAkhir = End 
*/

/* Selector Line **/
POINT GetPAwal (Line L);
// Mengirimkan komponen Titik Awal dari L
POINT GetPAkhir (Line L);
// Mengirimkan komponen Titik Akhir dari L

/* Set nilai komponen */
void SetPAwal (Line *L, POINT newFirstP);
/* 	I.S: L terdefinisi, dengan nilainya sembarang
	F.S: Mengubah nilai komponen Titik Awal dari L dengan PAwal=newFirstP */
void SetPAkhir (Line *L, POINT newEndP);
/* 	I.S: L terdefinisi, dengan nilainya sembarang
	F.S: Mengubah nilai komponen Titik Akhir dari L dengan PAkhir=newEndP */
  
/* Destruktor/Dealokator: tidak perlu */

/** { KELOMPOK Interaksi dengan I/O device, BACA/TULIS} **/

void BacaLine (Line *L);
/* 	I.S: L terdefinisi, mungkin kosong
	F.S: Komponen L dengan nilai PAwal dan PAkhir dari yang dibaca */
void CetakLine (Line L);
/* 	I.S: L terdefinisi, mungkin kosong
	F.S: Menampilan nilai Komponen L ke layar dengan format "(P1(X1,Y1), P2(X2,Y2))" */

/** Kelompok operasi relasional terhadap LINE **/ 
boolean IsEQLine(Line L1, Line L2);
// Mengirimkan true jika L1 = L2, yaitu =
// jika titik awa; dari L1 sama dengan titik awal dari L2 dan 
// titik akhir L1 sama titik akhir dari L2

boolean IsNEQLine(Line P1, Line P2);
// Mengirimkan true jika P1 tidak sama dengan P2, negasi dari EQLine

/** Kelompok menentukan di mana L berada **/

boolean IsLOnSbX(Line L);
// Menghasilkan true jika L terletak pada sumbu X yaitu titik awal dan titik akhir dari L berada pada sumbu X, dan false jika sebaliknya
boolean IsLOnSbY(Line L);
// Menghasilkan true jika L terletak pada sumbu Y yaitu titik awal dan titik akhir dari L berada pada sumbu X, dan false jika sebaliknya
boolean IsTegakLurus(Line L1, Line L2);
// Menghasilkan true jika L1 saling tegak lurus terhadap L2, dan false jika sebaliknya. Hint: gunakan gradien Garis.
boolean IsSejajar(Line L1, Line L2);
// Menghasilkan true jika L1 saling "sejajar" terhadap L2, dan false jika sebaliknya. Hint: gunakan gradien Garis.

/** KELOMPOK OPERASI LAIN TERHADAP TYPE **/
void GeserLine(Line *L, int deltaX, int deltaY);
/* 	I.S: L terdefinisi, mungkin kosong
	F.S: L bergeser sebesar absisnya deltaX dan ordinatnya deltaX */

#endif
