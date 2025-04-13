/* 	
	Program	 	: line.c
	Author	 	: 2450081096_Rara Winasti Hanifa Agistini
	Kelas		: D
	Deskripsi 	: body file dari prototype line
	Tanggal 	: 12 April 2025
*/

#define _LINE_H
#include "boolean.h"
#include "point.h"
#include <stdio.h>
#include <conio.h>

#define FirstPoint(L) (L).PAwal
#define EndPoint(L) (L).PAkhir

/** Definisi ABSTRACT DATA TYPE Line **/
typedef struct{
	POINT PAwal; 
	POINT PAkhir; 
	
}Line;

/* Prototype Line */
//Konstruktor membentuk Line 
void CreateLine(Line *L) {
	(*L).PAwal.X= 0;
	(*L).PAwal.Y= 0;
	(*L).PAkhir.X= 0;
	(*L).PAkhir.Y= 0;
}
void CreateLine2 (Line *L, POINT First, POINT End) {
	FirstPoint(*L)= First;
	EndPoint(*L)=End;
}

/*Selektor Line*/
POINT GetPAwal(Line L) {
	return (L.PAwal);
}
POINT GetPAkhir (Line L) {
	return(L.PAkhir);
}

/* Set nilai komponen */
void SetPAwal (Line *L, POINT FirstPBaru) {
	L->PAwal = FirstPBaru;
}
void SetPAkhir (Line *L, POINT EndPBaru) {
	L->PAkhir = EndPBaru;
}

/* Destruktor/Dealokator: tidak perlu */
/* ( KELOMPOK Interaksi dengan I/O device, BACA/TULIS) */ 
void BacaLine (Line *L) {
	printf("Masukkan koordinat X untuk P1 : ");
	scanf("%d", &L->PAwal.X);
	printf("Masukkan koordinat Y untuk P1 : ");
	scanf("%d", &L->PAwal.Y);
	printf("Masukkan koordinat X untuk P2 : ");
	scanf("%d", &L->PAkhir.X);
	printf("Masukkan koordinat Y untuk P2 : ");
	scanf("%d", &L->PAkhir.Y);
}
void CetakLine (Line L) {
	printf("Garis : P1(%d,%d) , P2(%d,%d)", L.PAwal.X, L.PAwal.Y, L.PAkhir.X, L.PAkhir.Y);
}

/* Kelompok operasi relasional terhadap Line */
boolean IsEQLine(Line L1, Line L2) {
	return((L1.PAwal.X==L2.PAwal.X && L1.PAwal.Y==L2.PAwal.Y) && (L1.PAkhir.X==L2.PAkhir.X && L2.PAkhir.Y==L2.PAkhir.Y));
}
boolean IsNEQLine(Line L1, Line L2) {
	return((L1.PAwal.X!=L2.PAwal.X && L1.PAwal.Y!=L1.PAwal.Y) && (L1.PAkhir.X!=L2.PAkhir.X && L1.PAkhir.Y!=L2.PAkhir.Y));
}

/* Kelompok menentukan di mana L berada */ 
boolean IsLOnSbX(Line L) {
	return (L.PAwal.Y==0 && L.PAkhir.Y==0);
}
boolean IsLOnSbY(Line L) {
	return (L.PAwal.X==0 && L.PAkhir.X==0);
}
boolean IsTegakLurus(Line L1, Line L2) {
	int gradien1, gradien2;
	gradien1= (L1.PAkhir.Y-L1.PAwal.Y)/(L1.PAkhir.X-L1.PAwal.X);
	gradien2= (L2.PAkhir.Y-L2.PAwal.Y)/(L2.PAkhir.X-L2.PAwal.X);
	return(gradien1*gradien2==-1);
}
boolean IsSejajar(Line L1, Line L2) {
	int gradien1, gradien2;
	gradien1= (L1.PAkhir.Y-L1.PAwal.Y)/(L1.PAkhir.X-L1.PAwal.X);
	gradien2= (L2.PAkhir.Y-L2.PAwal.Y)/(L2.PAkhir.X-L2.PAwal.X);
	return(gradien1==gradien2);
}

/* KELOMPOK OPERASI LAIN TERHADAP TYPE */ 
void GeserLine (Line *L, int deltaX, int deltaY) {
	Line G;
	G=(*L);
	G.PAwal.X = G.PAwal.X + deltaX;
	G.PAwal.Y = G.PAwal.Y + deltaY;
	G.PAkhir.X = G.PAkhir.X + deltaX;
	G.PAkhir.Y = G.PAkhir.Y + deltaY;
	(*L)=G;
}

