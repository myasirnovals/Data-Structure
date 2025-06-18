/*
Program : UAS.c
Nama : 2450081105_Fajar Daya Lutfiana
Kelas : D
Deskripsi : Body file dari UAS Praktikum
*/

//preprocessor
#include "UAS.h"

/*Body of Prototipe UAS*/

//addressAnak AlokasiAnak(int X){
//	addressAnak P;
//	P = malloc(sizeof(tElmAnak));
//	P.Info = X;
//	if(P.Info != 1){
//		P.nextAnak = Alokasi(P.Info - 1);
//	}
//	return P;
//}

//addressOrtu AlokasiOrtu(Kotak X){
//	addressOrtu P;
//	P = malloc(sizeof(tElmAnak));
//	
//}

void CreateTabel(TabList *T){
	(*T).nEff = 0;
}

void CreateListOrtu(ListOrtu *Lo){
	(*Lo).FirstOrtu = nil;
}

void CreateListAnak(ListAnak *La){
	(*La).FirstAnak = nil;
}

int HitungPanjang(int a,int b){
	
	//Kamus
	int hasil;
	//Algoritma
	hasil = b - a;
	if(hasil < 0){
		hasil = hasil * -1;
	}
	return hasil;
}

int HitungLebar(int a,int b){
	
	//Kamus
	int Hasil;
	//Algoritma
	
	Hasil = b - a;
	if(Hasil <0){
		Hasil = Hasil * -1;
	}
	
}

int HitungLuas(int a,int b){
	
	//Kamus
	int Luas;
	//Algoritma
	Luas = b * a;
	if(Luas < 0){
		Luas = Luas * -1;
	}
}

void CetakKotak(TabList T){
	
	//Kamus
	//Algoritma
	
//	for i = 1;
//	if(i)
//	for
//	if(i == 1 or i == T.nEff)
//		if(i == 1.1 && i== T.T.FirstOrtu.Info.panjang);
//		printf("+");
//		else
//		printf("-");
//		end
//	else
//		if(i == 1.1 && i== T.T.FirstOrtu.Info.panjang);
//		printf("|");
//		else
//		printf(" ");
//		end	

//	printf("Luas: %d, Panjang: %d, Lebar: %d",T.T.FirstOrtu.Info.luas,T.T.FirstOrtu.Info.panjang,T.T.FirstOrtu.Info.lebar);
//	else if(i == T.T.FirstOrtu.nextAnak.Info){
//		if(T.T.FirstOrtu.Info.luas >10 ){
//			for(i=1;i<=5){
//				printf("<%d> ", InfoAnak(NextAnak(T)));
//			}
//			
//		}else
//		if(T.T.FirstOrtu.Info.luas >=5 && T.T.FirstOrtu.Info.luas <= 10){
//			for(i=1;i<=4){
//				printf("<%d> ", InfoAnak(NextAnak(T)));
//			}
//		}else{
//			for(i=1;i<=3;i++){
//				printf("<%d> ", InfoAnak(NextAnak(T)));
//				
//			}
//		}
//	}
//	
//	if(i == 1 && i == T.T.FirstOrtu.Info.lebar)
//	printf("|");
//	else
//	printf(" ");
}
