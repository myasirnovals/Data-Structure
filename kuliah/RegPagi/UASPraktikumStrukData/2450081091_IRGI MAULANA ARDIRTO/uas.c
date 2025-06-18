/*
NAMA : IRGI MAULANA ARDIRTO
NIM : 2450081091
KELAS : D
*/

#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

#define nMak 10
#define NIL NULL
#define infoOrtu(p) (p)->infoOrtu
#define infoAnak(p) (p)->infoAnak
#define nextOrtu(p) (p)->nextOrtu
#define nextAnak(p) (p)->nextAnak
#define firstOrtu(p) (p)->firstOrtu
#define firstAnak(p) (p)->firstAnak

//KOTAK
//LIST
//LIST DISIMPAN DALAM TABEL  YG ISINYA LIST ORTU
//LIST ORTU
//PANJANG DAN LUAS                                                           

//prototype
typedef struct {
	int abs, ord;
}Point;


typedef struct {
    Point SudutAtas;
    Point SudutBawah;
    int panjang, lebar;
    int luas;
}Kotak;

typedef struct tElmOrtu *addressOrtu;
typedef struct tElmAnak *addressAnak;
typedef struct tElmtOrtu {
    Kotak infoOrtu;
    addressOrtu nextOrtu;
	addressAnak nextAnak;
}ElmOrtu;

typedef struct tElmtAnak{
   int infoAnak;
   addressAnak NextAnak;
}tElmAnak;

typedef struct{
   addressOrtu firstOrtu;
}ListOrtu;

typedef struct{
   addressAnak firstAnak;
}ListAnak;

typedef struct{
   ListOrtu Tlist[nMak+1];
   int nEff;
} TabList;

//hider
void CreateTab(TabList *T);
void CreateListOrtu(ListOrtu *L);
addressOrtu alokasiOrtu(Kotak x);
addressAnak alokasiAnak(int x);
void addlastOrtu(ListOrtu *L, Kotak K);
void addfirstAnak(ListOrtu *L, int x);
void CreateKotak(Kotak *K, int x1, int y1, int x2, int y2);
int luasKotak(Kotak k);
void CetakListOrtu(ListOrtu *L);




//main driver
int main() {
	TabList MayTab;
	Kotak MyKotak;
	ListOrtu MayListOrtu;



}
