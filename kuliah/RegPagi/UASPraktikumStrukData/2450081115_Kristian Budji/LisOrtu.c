/*  Nama   : Kristian Budji
    kelas  : D
   Tanggal :   18-06-2025
   
*/

#include <stdio.h>
#include <stdlib.h>

//kamus    




typedef struct anak {
	int x1,y1,x2,y2;
	struct Anak* next;
} Anak;

typedef struct ortu {
	int panjang, lebar, luas;
	Anak* headAnak;
}Ortu;

#define NMAX 100

typedef struct {
	Ortu data [NMAX];
	int nEff;
} Tabel;

// fungsi untuk membuat list anak dengan nilai kordinat berkurang
 Anak* buatListAnak(int jumblah, int * nilai){
 	Anak* head = NULL;
 	int i;
 	for ( i = 0; i < jumblah; i ++) {
 
 
    Anak*baru = (Anak*)
malloc(sizeof(Anak));
     baru ->x1 = (*nilai) --;
     baru-> y1 = (*nilai)--;
     baru-> x2 = (*nilai)--;
     baru-> y2 = (*nilai)--;
     baru->next = head;
     head = baru;
     }
return head ;
} 
//Algoritma
void isi Tabel (Tabel*T) {
	printf ("Masukan jumblah elemen Ortu: ");
	scanf ("%d , &T-> nEff);
	
	int nilaiAwal = 999;
	
	for(int i = 0; i < T-> nEff; i++)
	{
	
}

 
