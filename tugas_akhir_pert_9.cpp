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

char list[8][9] = {"aku", "suka", "sama", "kamu", "dari", "dulu", "sampai", "sekarang"};

int sort_function(const void *a, const void *b)
{
    return (strcmp((char *)a, (char *)b));
}

int main()
{
    int x, y;
    cout << "Nama\t: SYAHRUL AL-RASYID\nNIM\t: 191011400371\n\n";
    printf("\t\t**Susun Kata**\n\n");
    printf("Kata Sebelum di Susun : \n");
    for (y = 0; y < 8; y++)
    {
        if (y == 0)
        {
            printf("{%s ", list[y]);
            continue;
        }
        if (y == 8 - 1)
        {
            printf("%s}", list[y]);
            continue;
        }
        printf("%s ", list[y]);
    }
    printf("\n\nKata Setelah di Susun : \n");
    qsort((void *)list, 8, sizeof(list[0]), sort_function);
    for (x = 0; x < 8; x++)
        printf("%s\n", list[x]);
    
    return 0;
}
