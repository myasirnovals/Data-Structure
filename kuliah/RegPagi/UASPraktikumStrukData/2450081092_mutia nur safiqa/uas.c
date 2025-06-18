/*
	Name: UAS PRAKTIKUM
	Nim : 2450081092 
	Author:  Mutia nur safiqa
	Date: 18/06/25 13:01
	Description: uas.c
*/

#include <stdio.h>
#include <stdlib.h>

//deklarasi prototype
#define nMax 10
#define nil NULL
#define infoOrtu(P) (P)->infoOrtu
#define infoanak(P) (P)->infoAnak
#define nextOrtu(P) (P)->nextOrtu
#define nextAnak(P) (P)->nextAnak
#define firstOrtu(L) (L).firstOrtu
#define firstAnak(L) (L).firstAnak

typedef struct Point {
 	int X,Y;
 }Point;
 
typedef struct {
Point SudutAtas;
Point SudutBawah;
int Panjang, Lebar;
int Luas;
}Kotak;
 
typedef struct ElmOrtu *addressOrtu;
typedef struct ElmAnak *addressAnak;

typedef struct ElmOrtu{
 Kotak infoOrtu;
 addressOrtu nextOrtu;
 addressAnak nextAnak;
}ElmOrtu;

typedef struct ElmAnak {
 int infoAnak; 
 addressAnak nextAnak;
}ElmAnak;

typedef struct{
	addressOrtu firstOrtu;
}ListOrtu;
typedef struct{
	 addressAnak firstAnak;
}ListAnak;

typedef struct{
	ListOrtu TList[nMax+1];
	int nEff;
}Tablist;

//prototype
/* i.s :
	F.s :
*/
void createListOrtu(Tablist *TL){
	TL -> nEff = 0;
}
/* I.S :
 F.S :
*/
addressOrtu AlokasiOrtu(){
}

Kotak hitungLuas (Point atas, Point bawah){
	Kotak k;
	k.SudutAtas = atas;
		k.SudutBawah = bawah;	
		k.Panjang = abs(bawah.X - atas.X);
		k.Lebar = abs(bawah.Y - atas.Y);
		k.Luas = k.Panjang * k.Lebar;
		return k;
		
}
void printKotak(Kotak k, int start){
	
}

/* I.S :
	F.S :
*/
void cetakList(Tablist *TL){
	int i;
	for (i = 0; i < TL -> nEff; i++){
		printf ("kotak ke %d", i+1);
		printf("panjang %d");
		printf ("lebar: %d");
		printf ("luas: %d");
		printf ("anak anak: %d");
}
}
void addfirstAnak(addressAnak *La, int nilai){
	addressAnak awal;
	
	awal = (addressAnak)malloc(sizeof(ElmAnak));
	awal -> infoAnak = nilai;
	awal -> nextAnak =  *La;
	*La = awal;
}

void AddKotak(Tablist *TL, int pjg, int lbr, int x1, int x2, int y1, int y2){
	addressOrtu kotakBaru;
	kotakBaru = (addressOrtu)malloc(sizeof(ElmAnak));
	
 	/*kotakBaru -> pjg = pjg;
		kotakBaru -> lbr= lbr;
		kotakBaru -> luas = pjg*lbr;
		kotakBaru -> nextOrtu = NULL;
		kotakBaru -> firstOrtu = NULL;
	*/
	
}
//main driver
int main (){
	
}



