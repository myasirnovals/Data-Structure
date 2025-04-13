//
// Created by myasi on 08/04/2025.
//

#ifndef TABINT_H
#define TABINT_H

#include "boolean.h"

#include <stdio.h>
#include <conio.h>

#define nMax 10
#define IdxUndef -999
#define ElType int

/** Definisi ABSTRACT DATA TYPE Tab Integer **/
typedef struct
{
    ElType T1[nMax + 1];
    int nEff;
} TabInt;

/* Konstruktor membentuk TabInt */
void CreateTabInt(TabInt* T);

/* Selektor TabInt **/
int GetJumElmt(TabInt T);

int GetFirstIdx (TabInt T);

int GetLastIdx (TabInt T);

int GetElmt (TabInt T, int idx);

/* Set nilai komponen */
void SetEl(TabInt *T,int i, int v );
/* I.S : T terdefinisi, sembarang
   F.S : Elemen T yang ke i bernilai v:
 Mengubah nilai elemen tabel yang ke—i sehingga bernilai v
*/

/* Destruktor/Dealokator: tidak perlu */

/** { KELOMPOK OPERASI Cek Elemen kosong atau penuh} **/
boolean IsEmpty(TabInt T);
// mengecek apakah jumlah data pada tabel kosong
// mengirimkan true jika tabel kosong atau mengirimkan false jika tidak
boolean IsFull(TabInt T);
// mengecek apakah jumlah data pada tabel penuh
// mengirimkan true jika tabel penuh, mengirimkan false jika tidak

/** { KELOMPOK Interaksi dengan I/O device, BACA/TULIS } **/
void BacaElmt (TabInt *T);
/* I.S : T terdefinisi, mungkin kosong
F.S : Mengisi komponen T dengan nilai elemen tabel dari yang dibaca
void CetakTabInt(TabInt T);
/* I.S : T terdefinisi, mungkin kosong
   F.S : menampilkan semua elemen tabel ke layar
*/
void AddElmt(TabInt *T, int X);
/* I.S : T terdefinisi, mungkin kosong
   F.S : menambahkan nilai elemen baru pada tabel yang ditempatkan diposisi
akhir. Proses penambahan dilakukan selama jumlah elemen < nMax
*/

/** { KELOMPOK OPERASI ARITMATIKA TERHADAP TYPE } **/
TabInt KaliTab (TabInt T1, TabInt T2);
// Prekondisi T1 dan T2 harus berukuran sama dan tidak kosong,
// Mengirimkan Tabel baru baru dengan mengalikan setiap elemen T1 dan T2 pada indeks yang sama
// Contoh : Nilai T1 (5, 2, 10) dan T2 (2, 3, 6)
// nilai Tabel baru = 10, 6, 60

TabInt KaliKons (TabInt T, int c);
// Prekondisi T tidak kosong,
// Mengirimkan Tabel baru dengan setiap elemen tabel dikalikan c
// Contoh : Nilai T1 (5, 2, 10) dan C = 2
// nilai Tabel baru = 10, 4, 20

/** Kelompok operasi relasional terhadap TabInt **/
boolean IsEQTab(TabInt T1, TabInt T2);
// Prekondisi T1 dan T2 harus berukuran sama dan tidak kosong
// mengirimkan true jika ukuran T1 = T2: semua elemennya sama,
// dan jika tidak mengirimkan false

/** KELOMPOK OPERASI LAIN TERHADAP TYPE **/
void CopyTab(TabInt Tin, TabInt *Tout);
/* I.S : Tin terdefinisi, tidak boleh kosong
   F.S : Tout berisi salinan Tin, Assignment THsl <~ Tin yaitu:
 Setiap elemen THsl digantikan dengan semua elemen Tin dan
 nEff pada THsl = nEff pada Tin.
Sehingga elemen Tout sama dengan elemen Tin
*/
TabInt InverseTab(TabInt T);
// Menghasilkan tabel dengan urutan tempat yang terbalik, yaitu:
// elemen pertama rnenjadi terakhir,
// elemen kedua menjadi elemen sebelum terakhir, dst..
// Tabel kosong menghasilkan tabel kosong
// Contoh : Nilai T (5, 2, 10)
// nilai Tabel baru = 10, 2, 5

boolean isElemenAda(TabInt T, ElType X);
// Mengirimkan true jika nilai x berada pada T dan false jika x tidak ada

int cariElemen(TabInt T, ElType X);
// Search apakah ada elemen tabel T yang bernilai X

#endif //TABINT_H
