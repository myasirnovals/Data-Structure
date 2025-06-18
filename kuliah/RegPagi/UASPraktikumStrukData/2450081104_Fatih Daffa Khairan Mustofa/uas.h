/*	
	Nama : Ahmad Rafi Nasti
	Nim : 2450081079
	Kelas : Informatika C
	Judul : UAS Praktikum
	Tanggal : 18/06/2025 
*/

#ifndef POINT_H
#define POINT_H
#define nil NULL
#define infoOrtu (P) (P) -> infoOrtu
#define infoAnak (P) (P) -> infoAnak
#define nextOrtu (P) (P) -> nextOrtu
#define nextAnak (P) (P) -> nextAnak
#define firstOrtu (L) (L) -> firstOrtu
#define firstAnak (L) (L) -> firstAnak

typedef struct{
	int x1;
	int y1;
};	Point;

typedef struct{
	List Ortu T[nmax + 1];
	int neff;
};	TabList;

typedef struct{
	int ads, orb;
};	Point;

typedef struct ElmOrtu *addressOrtu;
typedef struct ElmOrtu {
	AddOrtu nextOrtu;
	AddAnak nextAnak;
};	ElmOrtu;

typedef struct ElmAnak *addressAnak;
typedef struct ElmAnak {
	int infoAnak;
	address nextAnak;
};	ElmAnak;

typedef struct {
	address firstOrtu;
}; ListOrtu;

typedef struct {
	address firstAnak;
}; ListAnak;

void CreatePoint(point *p, int x, int y);
/*	I.S:
	F.S:
*/	
void CreateTableList(Tablist *T);
/*	I.S:
	F.S:
*/	
void AddTab(TabList *T, ListOrtu L);
/*	I.S:
	F.S:
*/	

void CetakTable(Tablist T){
	int i;
	addressOrtu, awalOrtu;
	address anak, awalAnak;
	ListOrtu Lo;
	
	for(i = 1; i <= T.neff, i++)
	l = T.listOrtu
	awalOrtu = FirstAnak(Lo);
	while (awalOrtu != nill)
		CetakOrtu(nextOrtu);
		while (awalAnak != nill)
		scanf("%d", infoAnak);
		addressAnak = nextAnak(awalAnak);
		
}


#endif
