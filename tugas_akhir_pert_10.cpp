#include <iostream>
#include <stdio.h>
#include <ncurses.h>
#include <string.h>
#include <iomanip>

using namespace std;

typedef struct node *simpul;
typedef struct nodeDl *simpulDL;

struct node
{
    char isi;
    simpul next;
};

struct nodeDl
{
    char isi;
    simpulDL kanan;
    simpulDL kiri;
};

void sisipDepanSinglyLinked(simpul &L, char elemen);
void sisipBelakangSinglyLinked(simpul &L, char elemen);
void sisipTengah1SinglyLinked(simpul &L, char elemen1, char elemen2);
void sisipTengah2SinglyLinked(simpul &L, char elemen1, char elemen2);
void hapusDepanSinglyLinked(simpul &L);
void hapusBelakangSinglyLinked(simpul &L);
void hapusTengahSinglyLinked(simpul &L, char elemen);
void cetakSinglyLinked(simpul L);

void sisipDepanDoublyLinked(simpulDL &DL, char elemen);
void sisipBelakangDoublyLinked(simpulDL &DL, char elemen);
void sisipTengah1DoublyLinked(simpulDL &DL, char elemen1, char elemen2);
void sisipTengah2DoublyLinked(simpulDL &DL, char elemen1, char elemen2);
void hapusDepanDoublyLinked(simpulDL &DL);
void hapusBelakangDoublyLinked(simpulDL &DL);
void hapusTengahDoublyLinked(simpulDL &DL, char elemen);
void cetakDoublyLinked(simpulDL DL);

void singlyLinked()
{
    printf("Singly Linked\n\n");
    char huruf, huruf2;
    simpul L = NULL;
    cout << "OPERASI PADA SINGLE LINKED LIST" << endl
         << endl;
    // Sisip Depan
    cout << "Penyisipan Simpul Di Depan" << endl
         << endl;
    cout << "Masukan Huruf: ";
    cin >> huruf;
    sisipDepanSinglyLinked(L, huruf);
    cout << "Penyisipan Simpul Di Depan" << endl
         << endl;
    cout << "Masukan Huruf: ";
    cin >> huruf;
    sisipDepanSinglyLinked(L, huruf);
    cout << "Penyisipan Simpul Di Depan" << endl
         << endl;
    cout << "Masukan Huruf: ";
    cin >> huruf;
    sisipDepanSinglyLinked(L, huruf);
    cout << "Penyisipan Simpul Di Depan" << endl
         << endl;
    cout << "Masukan Huruf: ";
    cin >> huruf;
    sisipDepanSinglyLinked(L, huruf);
    cetakSinglyLinked(L);

    // Sisip Belakang
    cout << "\n\nPenyisipan Simpul Di Belakang" << endl
         << endl;
    cout << "Masukan Huruf: ";
    cin >> huruf;
    sisipBelakangSinglyLinked(L, huruf);
    cout << "Penyisipan Simpul Di Belakang" << endl
         << endl;
    cout << "Masukan Huruf: ";
    cin >> huruf;
    sisipBelakangSinglyLinked(L, huruf);
    cout << "Penyisipan Simpul Di Belakang" << endl
         << endl;
    cout << "Masukan Huruf: ";
    cin >> huruf;
    sisipBelakangSinglyLinked(L, huruf);
    cout << "Penyisipan Simpul Di Belakang" << endl
         << endl;
    cout << "Masukan Huruf: ";
    cin >> huruf;
    sisipBelakangSinglyLinked(L, huruf);
    cetakSinglyLinked(L);

    // Sisip Tengah Setalah Simpul Tertentu
    cout << endl
         << endl
         << "Masukan Huruf : ";
    cin >> huruf;
    cout << endl;
    cout << "Disisip setelah huruf :";
    cin >> huruf2;
    cout << huruf << " Disisip setelah " << huruf2 << endl;
    sisipTengah1SinglyLinked(L, huruf, huruf2);
    cetakSinglyLinked(L);

    // Sisip Tengah Sebelum Simpul Tertentu
    cout << endl
         << endl
         << "Masukan Huruf : ";
    cin >> huruf;
    cout << endl;
    cout << "Disisip sebelum huruf :";
    cin >> huruf2;
    cout << huruf << " Disisip sebelum " << huruf << endl;
    sisipTengah2SinglyLinked(L, huruf, huruf2);
    cetakSinglyLinked(L);

    // Hapus simpul depan
    cout << endl
         << endl
         << "Setalah Hapus Simpul Belakang " << endl;
    hapusBelakangSinglyLinked(L);
    cetakSinglyLinked(L);

    // Hapus simpul tengah
    cout << endl
         << endl
         << "Masukan huruf tengah yang akan di hapus :";
    cin >> huruf;
    hapusTengahSinglyLinked(L, huruf);
    cetakSinglyLinked(L);
    cout << endl;
    getch();
}
void doublyLinked()
{
    printf("Doubly Linked\n\n");
    char huruf, huruf2;
    simpulDL DL = NULL;
    int i;
    cout << "\nOPERASI PADA DOUBLY LINKED LIST\n";

    // sisip depan
    cout << "SISIP SIMPUL DEPAN" << endl
         << endl;
    for (i = 1; i <= 4; i++)
    {
        cout << "Masukan huruf: ";
        cin >> huruf;
        sisipDepanDoublyLinked(DL, huruf);
    }
    cetakDoublyLinked(DL);

    // sisip belakang
    cout << "\nSISIP SIMPUL BELAKANG" << endl
         << endl;
    for (i = 1; i <= 4; i++)
    {
        cout << "Masukan huruf: ";
        cin >> huruf;
        sisipBelakangDoublyLinked(DL, huruf);
    }
    cetakDoublyLinked(DL);

    // sisip simpul setelah simpul tertenu
    cout << "\nSISIP SIMPUL SETELAH SIMPUL TERTENTU" << endl;
    cout << endl
         << endl
         << "Masukan Huruf : ";
    cin >> huruf;
    cout << "Disisip setelah huruf : ";
    cin >> huruf2;
    cout << huruf << "Disisip Setelah " << huruf2 << endl;
    sisipTengah1DoublyLinked(DL, huruf, huruf2);
    cetakDoublyLinked(DL);

    // sisip simpul sebelum simpul tertenu
    cout << "\nSISIP SIMPUL SEBELUM SIMPUL TERTENTU" << endl;
    cout << endl
         << endl
         << "Masukan Huruf : ";
    cin >> huruf;
    cout << "Disisip sebelum huruf : ";
    cin >> huruf2;
    cout << huruf << "Disisip Sebelum " << huruf2 << endl;
    sisipTengah2DoublyLinked(DL, huruf, huruf2);
    cetakDoublyLinked(DL);

    // hapus simpul depan
    cout << "\nHAPUS SIMPUL DEPAN" << endl;
    cout << endl
         << endl
         << "Setelah hapus simpul depan " << endl;
    hapusDepanDoublyLinked(DL);
    cetakDoublyLinked(DL);

    // hapus simpul belakang
    cout << "\nHAPUS SIMPUL BELAKANG" << endl;
    cout << endl
         << endl
         << "Setelah hapus simpul belakang " << endl;
    hapusBelakangDoublyLinked(DL);
    cetakDoublyLinked(DL);

    // hpus simpul tengah
    cout << "\nHAPUS SIMPUL TENGAH" << endl;
    cout << "\n\nMasukan Huruf Tengah Yang akan dihapus : ";
    cin >> huruf;
    hapusTengahDoublyLinked(DL, huruf);
    cetakDoublyLinked(DL);
    cout << endl;
    getch();
}

int main()
{
    cout << "SYAHRUL AL-RASYID" << endl;
    cout << "191011400371\n"
         << endl;
    int choice;
    while (true)
    {
        cout << "--------Menu----------\n";
        cout << " 1.Tampilkan Singly Linked\n";
        cout << " 2.Tampilkan Doubly Linked\n";
        cout << " 3.Exit\n";
        cout << "----------------------\n";
        cout << "Masukan Pilihan anda : ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 1:
            singlyLinked();
            break;
        case 2:
            doublyLinked();
            break;
        case 3:
            cout << "Exited Program....\n\n";
            exit(0);
        default:
            cout << "Pilihan tidak ada\n\n";
        }
    }
    return 0;
}

void sisipDepanSinglyLinked(simpul &L, char elemen)
{
    cout << endl;
    simpul baru;
    baru = (simpul)malloc(sizeof(simpul));
    baru->isi = elemen;
    baru->next = NULL;
    if (L == NULL)
    {
        L = baru;
    }
    else
    {
        baru->next = L;
        L = baru;
    }
}

void sisipBelakangSinglyLinked(simpul &L, char elemen)
{
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(simpul));
    baru->isi = elemen;
    baru->next = NULL;
    if (L == NULL)
    {
        L = baru;
    }
    else
    {
        bantu = L;
        while (bantu->next != NULL)
        {
            bantu = bantu->next;
        }
        bantu->next = baru;
    }
}

void sisipTengah1SinglyLinked(simpul &L, char elemen1, char elemen2)
{
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(simpul));
    baru->isi = elemen1;
    baru->next = NULL;
    if (L == NULL)
    {
        cout << "List Kosong ..........." << endl;
    }
    else
    {
        bantu = L;
        while (bantu->isi != elemen2)
        {
            bantu = bantu->next;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}

void sisipTengah2SinglyLinked(simpul &L, char elemen1, char elemen2)
{
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(simpul));
    baru->isi = elemen1;
    baru->next = NULL;
    if (L == NULL)
    {
        cout << "List Kosong ..........." << endl;
    }
    else
    {
        bantu = L;
        while (bantu->next->isi != elemen2)
        {
            bantu = bantu->next;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}

void hapusTengahSinglyLinked(simpul &L, char elemen)
{
    simpul bantu, hapus;
    if (L == NULL)
    {
        cout << "Linked list kosong......";
    }
    else
    {
        bantu = L;
        while (bantu->next->isi != elemen)
        {
            bantu = bantu->next;
        }
        hapus = bantu->next;
        bantu->next = bantu->next->next;
    }
    hapus->next = NULL;
    free(hapus);
}

void hapusDepanSinglyLinked(simpul &L)
{
    simpul hapus;
    if (L == NULL)
    {
        cout << "L list kosong..........\n";
    }
    else
    {
        hapus = L;
        L = L->next;
        hapus->next = NULL;
        free(hapus);
    }
}

void hapusBelakangSinglyLinked(simpul &L)
{
    simpul bantu, hapus;
    if (L == NULL)
    {
        cout << "L list kosong....\n";
    }
    else
    {
        bantu = L;
        while (bantu->next->next != NULL)
        {
            bantu = bantu->next;
        }
        hapus = bantu->next;
        bantu->next = NULL;
        free(hapus);
    }
}

void cetakSinglyLinked(simpul L)
{
    simpul bantu;
    if (L == NULL)
    {
        cout << "Linked list kosong ..........\n";
    }
    else
    {
        bantu = L;
        cout << "\nIsi Linked list : ";
        while (bantu->next != NULL)
        {
            cout << bantu->isi << "->";
            bantu = bantu->next;
        }
        cout << bantu->isi;
    }
}

void sisipDepanDoublyLinked(simpulDL &DL, char elemen)
{
    simpulDL baru;
    baru = (simpulDL)malloc(sizeof(simpulDL));
    baru->isi = elemen;
    baru->kanan = NULL;
    baru->kiri = NULL;
    if (DL == NULL)
    {
        DL = baru;
    }
    else
    {
        baru->kanan = DL;
        DL->kiri = baru;
        DL = baru;
    }
}
void sisipBelakangDoublyLinked(simpulDL &DL, char elemen)
{
    simpulDL baru, bantu;
    baru = (simpulDL)malloc(sizeof(simpulDL));
    baru->isi = elemen;
    baru->kanan = NULL;
    baru->kiri = NULL;
    if (DL == NULL)
    {
        DL = baru;
    }
    else
    {
        bantu = DL;
        while (bantu->kanan != NULL)
        {
            bantu = bantu->kanan;
        }
        bantu->kanan = baru;
        baru->kiri = bantu;
    }
}
void sisipTengah1DoublyLinked(simpulDL &DL, char elemen1, char elemen2)
{
    simpulDL bantu, baru;
    baru = (simpulDL)malloc(sizeof(simpulDL));
    baru->isi = elemen1;
    baru->kanan = NULL;
    baru->kiri = NULL;
    if (DL == NULL)
    {
        cout << "List koosng......" << endl;
    }
    else
    {
        bantu = DL;
        while (bantu->isi != elemen2)
        {
            bantu = bantu->kanan;
        }
        baru->kanan = bantu->kanan;
        baru->kiri = bantu;
        bantu->kanan->kiri = baru;
        bantu->kanan = baru;
    }
}
void sisipTengah2DoublyLinked(simpulDL &DL, char elemen1, char elemen2)
{
    simpulDL bantu, baru;
    baru = (simpulDL)malloc(sizeof(simpulDL));
    baru->isi = elemen1;
    baru->kanan = NULL;
    baru->kiri = NULL;
    if (DL == NULL)
    {
        cout << "List koosng......" << endl;
    }
    else
    {
        bantu = DL;
        while (bantu->kanan->isi != elemen2)
        {
            bantu = bantu->kanan;
        }
        baru->kanan = bantu->kanan;
        baru->kiri = bantu;
        bantu->kanan->kiri = baru;
        bantu->kanan = baru;
    }
}
void hapusDepanDoublyLinked(simpulDL &DL)
{
    simpulDL bantu, hapus;
    if (DL == NULL)
    {
        cout << "Linked list kosong....";
    }
    else
    {
        hapus = DL;
        DL = DL->kanan;
        DL->kiri = NULL;
        hapus->kanan = NULL;
        free(hapus);
    }
}
void hapusBelakangDoublyLinked(simpulDL &DL)
{
    simpulDL bantu, hapus;
    if (DL == NULL)
    {
        cout << "Linked list kosong....";
    }
    else
    {
        bantu = DL;
        while (bantu->kanan->kanan != NULL)
        {
            bantu = bantu->kanan;
        }
        hapus = bantu->kanan;
        bantu->kanan = NULL;
        hapus->kiri = NULL;
        free(hapus);
    }
}
void hapusTengahDoublyLinked(simpulDL &DL, char elemen)
{
    simpulDL bantu, hapus;
    if (DL == NULL)
    {
        cout << "Linked list kosong....";
    }
    else
    {
        bantu = DL;
        while (bantu->kanan->isi != elemen)
        {
            bantu = bantu->kanan;
        }
        hapus = bantu->kanan;
        bantu->kanan->kanan->kiri = bantu;
        bantu->kanan = bantu->kanan->kanan;
        hapus->kanan = NULL;
        hapus->kiri = NULL;
        free(hapus);
    }
}
void cetakDoublyLinked(simpulDL DL)
{
    simpulDL bantu;
    if (DL == NULL)
    {
        cout << "Linked list kosong....";
    }
    else
    {
        bantu = DL;
        cout << "Isi Linked list: ";
        while (bantu->kanan != NULL)
        {
            cout << bantu->isi << "<<==>";
            bantu = bantu->kanan;
        }
        cout << bantu->isi;
    }
}