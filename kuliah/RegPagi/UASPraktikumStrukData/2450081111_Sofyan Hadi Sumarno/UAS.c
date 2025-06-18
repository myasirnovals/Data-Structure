/*
	Nama : Sofyan Hadi Sumarno
	NIM : 2450081111
	Kelas : D
*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define nMax 10
#define Nil NULL
#define InfoOrtu(P) (P)->infoOrtu
#define InfoAnak(P) (P)->infoAnak
#define nextOrtu(P) (P)->nextOrtu
#define nextAnak(P) (P)->nextAnak
#define firstOrtu(L) (L).firstOrtu
#define firstAnak(L) (L).firstAnak

//Struktur Data
typedef struct {
	int abs,ord;
}Point;

typedef struct {
	Point P1, P2;
	int panjang, lebar, luas;
} Kotak;

typedef struct tElmOrtu *addressOrtu;
typedef struct tElmAnak *addressAnak;

typedef struct tElmOrtu{
	Kotak infoOrtu;
	addressOrtu nextOrtu;
	addressAnak nextAnak;
}ElmOrtu;

typedef struct tElmAnak{
	int infoAnak;
	addressAnak nextAnak;
}ElmAnak;

typedef struct{
	addressOrtu firstOrtu;
}ListOrtu;
typedef struct{
	addressAnak firstAnak;
}ListAnak;

typedef struct {
	ListOrtu TList[nMax+1];
	int nEff;
}TabList;

//Definisi Prototype
void CreateTab(TabList *T);
void AddTab(TabList *T, ListOrtu L, Kotak K);

void CreateKotak(Kotak *K, int x1, int y1, int x2, int y2);
void CetakKotak(Kotak K);

void CreateListOrtu(ListOrtu *L);
addressOrtu AlokasiOrtu(Kotak X);
void AddLastOrtu(ListOrtu L, Kotak X);

addressAnak AlokasiAnak(int X);

int main (){
	//Kamus
	int x1,x2,y1,y2;
	TabList MyTab;
	ListOrtu MyOrtu;
	Kotak MyKotak;
	
	//Algoritma
	CreateTab(&MyTab);
	CreateListOrtu(&MyOrtu);
	printf("x1 : ");scanf("%d", &x1);
	printf("y1 : ");scanf("%d", &y1);
	printf("x2 : ");scanf("%d", &x2);
	printf("y2 : ");scanf("%d", &y2);
	while(x1 != 999 && y1 != 999 && x2 != 999 && y2 != 999){
		CreateKotak(&MyKotak, x1, y1, x2, y2);
		
		printf("\nx1 : ");scanf("%d", &x1);
		printf("y1 : ");scanf("%d", &y1);
		printf("x2 : ");scanf("%d", &x2);
		printf("y2 : ");scanf("%d", &y2);
	}
	
	CetakKotak(MyKotak);
	return 0;
}

//Implementasi Prototype
void CreateTab(TabList *T){
	T->nEff = 0; 
}
void CreateKotak(Kotak *K, int x1, int y1, int x2, int y2){
	//Kamus
	int panjang, lebar, luas;
	
	//Algoritma
	K->P1.abs = x1;
	K->P1.ord = y1;
	K->P2.abs = x2;
	K->P2.ord = y2;
	panjang =  sqrt((x2 - x1) * (x2 - x1));
	K->panjang = panjang;
	lebar = sqrt((y2 - y1) * (y2 - y1));
	K->lebar = lebar;
	luas = panjang * lebar;
	K->luas = luas;
}
void CetakKotak(Kotak K){
	//Kamus
	
	//Algoritma
	printf("Luas : %d", K.luas);
	printf("Panjang : %d", K.panjang);
	printf("Lebar : %d", K.lebar);
}
void AddTab(TabList *T, ListOrtu L, Kotak K){
	//Kamus
	addressOrtu P;
	//Algoritma
	P = AlokasiOrtu(K);
	(*T).nEff++;
	(*T).TList[(*T).nEff] = L;
}
void CreateListOrtu(ListOrtu *L){
	//Kamus
	
	//Algoritma
	firstOrtu(*L) = Nil;
}
addressOrtu AlokasiOrtu(Kotak X){
	//Kamus
	addressOrtu P;
	
	//Algoritma
	P = (addressOrtu) malloc(sizeof(ElmOrtu));
	if(P != Nil){
		InfoOrtu(P) = X;
		nextOrtu(P) = Nil;
		nextAnak(P) = Nil;
	}
}
addressAnak AlokasiAnak(int X){
	
}


