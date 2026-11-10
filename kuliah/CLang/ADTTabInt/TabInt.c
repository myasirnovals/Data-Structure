//
// Created by myasi on 08/04/2025.
//

#include "tabint.h"

/* Konstruktor membentuk TabInt */
void CreateTabInt(TabInt* T)
{
    (*T).nEff = 0;
}

/* Selektor TabInt **/
int GetJumElmt(TabInt T)
{
    if (IsEmpty(T))
    {
        return 0;
    }
    else
    {
        return T.nEff;
    }
}

int GetFirstIdx(TabInt T) {
    if (!IsEmpty(T)) {
        return 1;
    } else {
        return IdxUndef;
    }
}

int GetLastIdx(TabInt T)
{
    return T.nEff;
}

int GetElmt(TabInt T, int idx) {
    if (idx >= 1 && idx <= T.nEff) {
        return T.T1[idx];
    } else {
        printf("Index berada diluar jangkauan\n");
        return IdxUndef;
    }
}

void SetEl(TabInt* T, int i, int v) {
    if (i >= 1 && i <= (*T).nEff) {
        (*T).T1[i] = v;
    } else {
        printf("Index ke-%d tidak diketahui\n", i);
    }
}

boolean IsEmpty(TabInt T)
{
    if (T.nEff == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

boolean IsFull(TabInt T)
{
    if (T.nEff == nMax)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void BacaElmt(TabInt* T)
{
    // kamus
    int Elmt;

    // algoritma
    printf("Masukan Elemen: ");
    scanf("%d", &Elmt);

    while (Elmt != 999)
    {
        AddElmt(&(*T), Elmt);
        printf("Masukan Elemen: ");
        scanf("%d", &Elmt);
    }
}

void CetakTabInt(TabInt T)
{
    // kamus
    int i;

    // algoritma
    printf("[");
    for (i = 1; i <= T.nEff; i++)
    {
        printf("%d, ", T.T1[i]);
    }
    printf("]");
}

void AddElmt(TabInt* T, int X)
{
    if (!IsFull((*T)))
    {
        (*T).nEff++;
        (*T).T1[(*T).nEff] = X;
    }
    else
    {
        printf("Tabel sudah penuh");
    }
}

void DelElmt(TabInt *T, int *X) {
    if (!IsEmpty(*T)) {
        *X = (*T).T1[(*T).nEff];
        (*T).nEff--;
    } else {
        printf("Tabel kosong\n");
    }
}

void DelElmtX(TabInt *T, int X) {
    int idx = IdxUndef;
    int i;

    if (!IsEmpty(*T)) {
        for (i = 1; i <= (*T).nEff; i++) {
            if ((*T).T1[i] == X) {
                idx = i;
                break;
            }
        }
        if (idx != IdxUndef) {
            for (i = idx; i < (*T).nEff; i++) {
                (*T).T1[i] = (*T).T1[i + 1];
            }
            (*T).nEff--;
        }
    } else {
        printf("Tabel kosong\n");
    }
}

TabInt KaliTab(TabInt Tab1, TabInt Tab2)
{
    // Kamus
    TabInt TabBaru;
    int i;

    CreateTabInt(&TabBaru);

    // algoritma
    if (!IsEmpty(Tab1) && !IsEmpty(Tab2) && IsEQTab(Tab1, Tab2))
    {
        for (i = 1; i <= Tab1.nEff; i++)
        {
            AddElmt(&TabBaru, Tab1.T1[i] * Tab2.T1[i]);
        }
    }
    else
    {
        return TabBaru;
    }

    return TabBaru;
}

TabInt KaliKons(TabInt T, int c)
{
    // kamus
    TabInt TabBaru;
    int i;

    CreateTabInt(&TabBaru);

    // algoritma
    for (i = 1; i <= T.nEff; i++)
    {
        AddElmt(&TabBaru, T.T1[i] * c);
    }

    return TabBaru;
}

boolean IsEQTab(TabInt T1, TabInt T2) {
    if (T1.nEff != T2.nEff) {
        return false;
    }
    for (int i = 1; i <= T1.nEff; i++) {
        if (T1.T1[i] != T2.T1[i]) {
            return false;
        }
    }
    return true;
}

void CopyTab(TabInt Tin, TabInt* Tout) {
    CreateTabInt(Tout);
    for (int i = 1; i <= Tin.nEff; i++) {
        AddElmt(Tout, Tin.T1[i]);
    }
}

TabInt InverseTab(TabInt T)
{
    // kamus
    TabInt TabBaru;
    int i;

    // algoritma
    CreateTabInt(&TabBaru);

    for (i = T.nEff; i >= 1; i--)
    {
        AddElmt(&TabBaru, T.T1[i]);
    }

    return TabBaru;
}

boolean isElemenAda(TabInt T, ElType X)
{
    // kamus
    int i;
    boolean hasil;

    // algoritma
    i = 1;
    hasil = false;

    while (i <= T.nEff && !hasil)
    {
        if (T.T1[i] == X)
        {
            hasil = true;
        }
        else
        {
            i++;
        }
    }

    return hasil;
}

int cariElemen(TabInt T, ElType X)
{
    // kamus
    int i;

    // algoritma
    if (IsEmpty(T))
    {
        return IdxUndef;
    }
    else
    {
        for (i = 1; i <= T.nEff; i++)
        {
            if (T.T1[i] == X)
            {
                return i;
            }
        }

        return IdxUndef;
    }
}
