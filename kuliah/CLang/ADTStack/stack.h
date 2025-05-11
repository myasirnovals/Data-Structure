//
// Created by myasi on 06/05/2025.
//

#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <conio.h>

#include "boolean.h"

// definisi akses dengan selektor: set dan get
#define Top(S) (S).TOP
#define InfoTop(S) (S).T[(S).TOP]
#define PopTop(S) (S).T[(S).TOP - 1]
#define ElemenTop(S) (S).T[i]
#define MaxEl 10
#define Nil 0
#define idxUndef -999

typedef int infotype;
typedef int address;

typedef struct {
  infotype T[MaxEl + 1];
  address TOP;
} Stack;

/* Konstruktor membentuk Stack */
void CreateStack(Stack *S);
/* I.S : S terdefinisi tidak diketahui nilainya
   F.S : S diinisialisasi dengan TOP = nil
*/

/** { Operasi terhadap komponen : selektor Get dan Set } : tidak perlu
sudah di define diatas**/

/* Destruktor/Dealokator: tidak perlu */

/** { KELOMPOK OPERASI pada Stack} **/
/*********** Predikat Untuk test keadaan KOLEKSI **/
boolean IsStackEmpty (Stack S);
// Mengecek apakah Stack tidak memiliki elemen
// Mengirim true jika Stack kosong: lihat definisi di atas

boolean IsStackFull(Stack S);
// Mengecek apakah Stack sudah penuh
// Mengirim true jika tabel penampung nilai elemen stack penuh

/*********** Menambahkan sebuah elemen ke Stack **********/
void Push (Stack *S, infotype X);
/* Menambahkan X sebagai elemen Stack S. */
/* I.S : S terdifinisi, mungkin kosong, dan
         S penampung elemen stack tidak penuh.
   F.S : X menjadi TOP yang baru,TOP bertambah 1
*/

/*********** Menqhapus sebuah elemen Stack **********/
void Pop (Stack *S, infotype *X);
// Menghapus X dari Stack S.
/* I.S : S terdifisi, S tidak kosong F.S : mengambil elemen pada Top sehingga X berisi nilai elemen TOP yang
lama, kemudian TOP berkurang l
*/

/** { KELOMPOK Interaksi dengan I/O device, BACA/TULIS } **/
void PrintStackInfo (Stack S);
/* I.S : S terdefinisi, mungkin kosong
   F.S : Jika Stack tidak kosong, menampilkan semua info yang disimpan pada
elemen stack ke layar.
*/

/** KELOMPOK OPERASI LAIN TERHADAP TYPE **/
boolean isInfoKetemu(Stack S, infotype x);
/* mengirim true jika x berada pada S */

address CariElemenStack(Stack S, infotype x);
// Search apakah ada elemen tabel TabElm yang bernilai X)
// Jika x ada pada S, maka mengirimkan address pertama kali ditemukan
// Jika tidak ada atau kondisi Stack adalah kosong, maka mengirimkan IdXUndef (bernilai -999)

#endif //STACK_H
