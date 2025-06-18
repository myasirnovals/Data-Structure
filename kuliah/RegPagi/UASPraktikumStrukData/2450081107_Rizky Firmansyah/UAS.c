/*
	Nama	: Rizky Firmansyah
	NIM		: 2450081107
	Kelas	: D
*/
//struktur kotak,point,array,list(parrent(kotak),child(int))

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

#define nMaks 10
#define Nil NULL
#define InfoOrtu(P) (P)->InfoOrtu
#define InfoAnak(P) (P)->InfoAnak
#define NextOrtu(P) (P)->NextOrtu
#define NextAnak(P) (P)->NextAnak
#define FirstOrtu(L) (L).FirstOrtu
#define FirstAnak(L) (L).FirstAnak

//Struktur Data
typedef struct{
	int abs,ord;
}Point;

typedef struct{
	Point P1,P2;
	int Panjang,Lebar,Luas;
}Kotak;

typedef struct tElmOrtu *addressOrtu;
typedef struct tElmAnak *addressAnak;

typedef struct tElmOrtu{
	Kotak InfoOrtu;
	addressOrtu NextOrtu;
	addressAnak NextAnak;
}ElmOrtu;

typedef struct tElmAnak{
	int InfoAnak;
	addressAnak NextAnak;
}ElmAnak;

typedef struct{
	addressOrtu FirstOrtu;
}ListOrtu;

typedef struct{
	addressAnak FirstAnak;
}ListAnak;

typedef struct{
	ListOrtu TList[nMaks+1];
	int neff;
}TabList;

//Definisi Prototype
void CreateTab(TabList *T);
void CreateListOrtu(ListOrtu *L);
addressOrtu AlokasiOrtu(Kotak X);
addressAnak AlokasiAnak(int X);
void AddLastOrtu(ListOrtu L, Kotak K);
void AddFirstAnak(ListOrtu L, int X);
void CreateKotak(Kotak *K, int x1, int y1, int x2, int y2);
int LuasKotak(Kotak K);
void CetakListOrtu(ListOrtu *L);

int main(){
	//Kamus
	TabList MyTab;
	Kotak MyKotak;
	ListOrtu MyListOrtu;
	int x1,y1,x2,y2;
	//Algoritma
	CreateTab(&MyTab);
	CreateListOrtu(&MyListOrtu);
	
	printf("x1: ");scanf("%d", &x1);
	printf("y1: ");scanf("%d", &y1);
	printf("x2: ");scanf("%d", &x2);
	printf("y2: ");scanf("%d", &y2);
	
	
	while(x1 != 999 && y1 != 999 && x2 != 999 && y2 != 999){
		CreateKotak(&MyKotak, x1, y1, x2, y2);
		printf("x1: ");scanf("%d", &x1);
		printf("y1: ");scanf("%d", &y1);
		printf("x2: ");scanf("%d", &x2);
		printf("y2: ");scanf("%d", &y2);
	}
	return 0;
}

//Realisasi
void CreateTab(TabList *T){
	T->neff = 0;
}

void CreateListOrtu(ListOrtu *L){
	FirstOrtu(*L) = Nil;	
}

addressOrtu AlokasiOrtu(Kotak X){
	//Kamus
	addressOrtu P;
	//Algoritma
	P = (addressOrtu) malloc(sizeof(ElmOrtu));
	if(P != Nil){
		P->InfoOrtu.Panjang = X.Panjang;
		P->InfoOrtu.Lebar = X.Lebar;
		P->InfoOrtu.Luas = X.Luas; 
		NextAnak(P) = Nil;
		NextOrtu(P) = Nil;
	}
	return P;
}

addressAnak AlokasiAnak(int X){
	//Kamus
	addressAnak P;
	//Algoritma
	P = (addressAnak) malloc(sizeof(ElmAnak));
	if(P != Nil){
		P->InfoAnak = X;
		NextAnak(P) = Nil;
	}
	return P;
}

void CreateKotak(Kotak *K, int x1, int y1, int x2, int y2){
	//Kamus
	Kotak K1;
	int Luas;
	//Algoritma
	K->P1.abs = x1;
	K->P1.ord = y1;
	K->P2.abs = x2;
	K->P2.ord = y2;
	
	K1.P1.abs = x1;
	K1.P1.ord = y1;
	K1.P2.abs = x2;
	K1.P2.ord = y2;
	K1.Luas = LuasKotak(K1);
	K->Luas = K1.Luas;
}

void CetakListOrtu(ListOrtu *L){
	//Kamus
	addressOrtu P;
	//Algoritma
	P = L->FirstOrtu;
	while (P != Nil){
		int i;
	}
}

int LuasKotak(Kotak K){
	//Kamus
	int panjang, lebar, hasil;
	//Algoritma
	panjang = ((K.P2.abs) - (K.P1.abs));
	lebar = ((K.P2.ord) - (K.P2.ord));
	
	hasil = panjang * lebar;
	return hasil;
}
