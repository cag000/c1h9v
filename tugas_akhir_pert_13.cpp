#include <iostream>
#include <stdio.h>
#include <ncurses.h>
#include <string.h>
#include <iomanip>

using namespace std;

typedef struct node *simpul;
struct node
{
    char isi;
    simpul next;
};

void sisipBelakang(simpul &L, char elemen);
void hapusDepan(simpul &L);
void cetak(simpul L);

int main()
{
    int choice;
    char huruf;
    simpul L = NULL;
    int i;
    while (true)
    {
        cout << "\nOPERASI PADA SINGLE LINKED LIST" << endl
             << endl;
        cout << "--------Menu----------\n";
        cout << " 1.Sisip Belakang\n";
        cout << " 2.Hapus Depan\n";
        cout << " 3.Cetak\n";
        cout << " 4.Exit\n";
        cout << "Enter choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            for (i = 0; i <= 3; i++)
            {
                cout << "Masukan Huruf :";
                cin >> huruf;
                sisipBelakang(L, huruf);
            }
            break;
        case 2:
            cout << "\nSetelah Hapus Simpul" << endl;
            hapusDepan(L);
            break;
        case 3:
            cetak(L);
            break;
        case 4:
            cout << "\nTerminated Program......\n"
                 << endl;
            exit(0);
            break;
        default:
            cout << "\nPilih pilihan yang tersedia.." << endl;
            break;
        }
    }
}

void cetak(simpul L)
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

void sisipBelakang(simpul &L, char elemen)
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

void hapusDepan(simpul &L)
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