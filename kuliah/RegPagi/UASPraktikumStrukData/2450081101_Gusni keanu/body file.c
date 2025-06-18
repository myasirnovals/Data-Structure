/*
	Program: Body Prototype
	Nama: Gusni keanu
	NIM: 2450081101
	Kelas: D
	Deskripsi: Body Prototype dari File Header
	tanggal: 18-06-4-2025
*/
#include "uas.h"

void CreateListOrtu(ListOrtu *L) {
	
	//kamus
	
	
	//algoritma
	(L)->firstOrtu = NULL;
}

addressOrtu alokasiOrtu(int p, int l) {
	addressOrtu P =(addressOrtu*)malloc(sizeof(Ortu));
	p->panjang =p;
	p->lebar =l;
	p->luas =p *l;
	p->ListAnak = NULL;
	p->next =NULL;
	return p;
	
}

addressAnak alokasiAnak(int nilai) {
	addressAnak P = (addressAnak)malloc(sizeof)(Anak);
	p->nilai = nilai;
	p->next = NULL;
	return p;
}

void InsertLastOrtu(ListOrtu *L,addressOrtu P){
	if (L->head ==NULL) {
		L->head = P;
	} else {
		addressOrtu Q = L->head;
		while (Q->next !=NULL)
		Q =Q->next;
		Q->next = p;
		
	}
}  

void addFirstAnak(addressAnak *L, addressAnak P) {
	p->next = *L;
	*L = P;
}	

void generateAnak(addressOrtu Ortu){
	int jumlah;
	if (ortu->luas >10)
		jumlah =5;
	else if (ortu->luas >=5)
		jumlah =4;
	else 
		jumlah =3;
	
	int nilai= Ortu->panjang+ Ortu ->lebar;
	for  (int i = o; i < jumlah; i++) {
		addressAnak A = alokasiAnak(nilai);
		addFirstAnak(&(ortu->ListAnak), A);
		nilai--;
	}
	
}

void printAll(ListOrtu L) {
	addressortu P = l.head;
	while (P !=Null) {
		printf ("Luas : %d, Panjang : %d, Lebar : %d\n", P->luas, p->panjang, p=>lebar);
		addressAnak A = P ->ListAnak;
		while (A != NULL) {
			printf ("<%d>", A->nilai);
			A =A->next;
		}
		printf("\n\n");
		p = p->next;
	}
}


