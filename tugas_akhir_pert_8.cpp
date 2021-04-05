#include <iostream>
#include <stdio.h>
#include <ncurses.h>
#include <string.h>
#include <iomanip>

using namespace std;

/*
    SYAHRUL AL-RASYID
    191011400371
    PERTEMUAN 8
*/

int main()
{
    char nama[98];
    char nim[20];
    cout << "Masukan Nama\t: ";
    cin.getline(nama, sizeof(nama));
    cout << "Masukan NIM\t: ";
    cin >> nim;
menu:
    int data[15] = {15, 22, 16, 99, 55, 33, 14, 77, 88, 19, 24, 90, 67, 99, 98};
    int i, u, maks, j, t, min;
    int pilihan;
    cout << "--------Menu----------\n";
    cout << " 1.Metode Maximum Sort (Pengurutan secara menaik)\n";
    cout << " 2.Metode Maximum Sort (Pengurutan secara menurun)\n";
    cout << " 3.Metode Minimum Sort (Pengurutan secara menaik)\n";
    cout << " 4.Metode Minimum Sort (Pengurutan secara menurun)\n";
    cout << " 5.Exit\n";
    cout << "----------------------\n";
    cout << "Masukan Pilihan anda : ";
    cin >> pilihan;
    cout << endl;
    switch (pilihan)
    {
    case 1:
        cout << "Data sebelum di urut\n\n";
        for (i = 0; i < 15; i++)
        {
            cout << setw(3) << data[i] << " ";
        }
        cout << endl;
        //Proses Pengurutan
        u = 15 - 1;
        for (i = 0; i <= 15 - 2; i++)
        {
            maks = 0;
            for (j = 1; j <= u; j++)
            {
                if (data[j] > data[maks])
                    maks = j;
            }
            t = data[u];
            data[u] = data[maks];
            data[maks] = t;
            u--;
            cout << endl;
            for (int a = 0; a < 15; a++)
                cout << setw(3) << data[a];
        }
        cout << "\n\nData setelah di urut : \n\n";
        for (i = 0; i < 15; i++)
            cout << setw(3) << data[i];
        cout << endl
             << endl;
    lanjut:
        cout << "Tekan ENTER untuk kembali ke menu";
        getch();
        goto menu;
    case 2:
        cout << "Data sebelum di urut\n\n";
        for (i = 0; i < 15; i++)
        {
            cout << setw(3) << data[i] << " ";
        }
        cout << endl;
        u = 15 - 1;
        for (i = 0; i <= 15 - 2; i++)
        {
            maks = i;
            for (j = i + 1; j <= u; j++)
            {
                if (data[j] > data[maks])
                    maks = j;
            }
            t = data[i];
            data[i] = data[maks];
            data[maks] = t;
            cout << endl;
            for (int a = 0; a < 15; a++)
                cout << setw(3) << data[a];
        }
        cout << "\n\nData setelah di urut : \n\n";
        for (i = 0; i < 15; i++)
            cout << setw(3) << data[i];
        cout << endl
             << endl;
        goto lanjut;
        getch();
        goto menu;
    case 3:
        cout << "Data sebelum di urut\n\n";
        for (i = 0; i < 15; i++)
        {
            cout << setw(3) << data[i] << " ";
        }
        cout << endl;
        for (i = 0; i <= 15 - 2; i++)
        {
            min = i;
            for (j = i + 1; j < 15; j++)
            {
                if (data[j] < data[min])
                    min = j;
            }
            t = data[i];
            data[i] = data[min];
            data[min] = t;
            cout << endl;
            for (int a = 0; a < 15; a++)
                cout << setw(3) << data[a];
        }
        cout << "\n\nData setelah di urut : \n\n";
        for (i = 0; i < 15; i++)
            cout << setw(3) << data[i];
        cout << endl
             << endl;
        goto lanjut;
        getch();
        goto menu;
    case 4:
        cout << "Data sebelum di urut\n\n";
        for (i = 0; i < 15; i++)
        {
            cout << setw(3) << data[i] << " ";
        }
        cout << endl;
        //Proses Pengurutan
        u = 15 - 1;
        for (i = 0; i <= 15 - 2; i++)
        {
            min = 0;
            for (j = 1; j <= u; j++)
            {
                if (data[j] < data[min])
                    min = j;
            }
            t = data[u];
            data[u] = data[min];
            data[min] = t;
            cout << endl;
            u--;
            for (int a = 0; a < 15; a++)
                cout << setw(3) << data[a];
        }
        cout << "\n\nData setelah di urut : \n\n";
        for (i = 0; i < 15; i++)
            cout << setw(3) << data[i];
        cout << endl
             << endl;
        goto lanjut;
        getch();
        goto menu;
    case 5:
        exit(0);
    }
}