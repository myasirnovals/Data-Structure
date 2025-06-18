/*
program		:uas.c
outhor		:2450081109 - FIQRI ARISANDI
kelas		:D
Deskripsi	:header file dari file multiple linked list
tanggal		:18-06-2025
*/

#ifndef _H
#define UAS_H

#include <stdio.h>
#include <stdlib.h>

#define Nil NULL

// === Struct untuk data anak (nilai) ===
typedef struct tNodeNilai *addrNilai;
typedef struct tNodeNilai {
    int data;
    addrNilai next;
} NodeNilai;

// === Struct untuk data kotak persegi panjang ===
typedef struct tNodeKotak *addrKotak;
typedef struct tNodeKotak {
    int pj, lb, area;
    addrNilai daftarNilai;
    addrKotak next;
} NodeKotak;

// === List utama ===
typedef struct {
    addrKotak awal;
} DaftarKotak;

// === Macro akses ===
#define Awal(L)         (L).awal
#define Pj(P)           (P)->pj
#define Lb(P)           (P)->lb
#define Area(P)         (P)->area
#define DaftarNilai(P)  (P)->daftarNilai
#define NextKotak(P)    (P)->next
#define DataNilai(P)    (P)->data
#define NextNilai(P)    (P)->next

// === Fungsi ===
void InisialisasiList(DaftarKotak *L);
addrKotak BuatKotak(int panjang, int lebar);
addrNilai BuatNilai(int nilai);
void TambahKotak(DaftarKotak *L, addrKotak P);
void TambahNilaiKeAwal(addrNilai *L, addrNilai P);
void MasukkanData(DaftarKotak *L);

#endif

	



