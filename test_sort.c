#include "headers.h"

// 112  липалко ћихаил ћихайлович

int test_sort(double number[], int k, int ind[])        // функци€ проверки отсортированного массива на упор€доченность
{
    FILE * fout;                                        // файл с отсортированным массивом
    fout = fopen("out.txt", "a");                       // открытие файла с отсортированными массивами на добавление чисел

    fprintf(fout, "Sorted sequence: ");
    fprintf(fout, "\n");

    for (int i = 0; i < k*N - 1; i++)                   // цикл проверки массива на упор€доченность
    {
        if (number[ind[i]] > number[ind[i+1]])          // условие пор€дка возрастани€ чисел
        {
            printf("INCORRECT SORTING.\n");             // неверное упор€дочивание
            return -1;
        }
    }

    for (int s = 0; s < k*N; ++s)                       // цикл записи чисел в fout
    {
        // printf("%lf\n", number[i]);
        fprintf(fout, "%lf ", number[ind[s]]);
    }

    for(int i = 0; i < k*N; i++)
    {
            fprintf(fout, "%d ", ind[i]);
    }
    printf("SORTING IS CORRECT.\n");

    fprintf(fout, "\n");

    fclose(fout);                                       // закрытие файла

    return 0;
}
