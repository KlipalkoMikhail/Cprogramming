#include "headers.h"

// 112  липалко ћихаил ћихайлович

int test_qsort(double number[], int k)                   // функци€ проверки отсортированного массива на упор€доченность
{
    FILE * fout;                                        // файл с отсортированным массивом
    fout = fopen("out.txt", "a");                       // открытие файла с отсортированными массивами на добавление чисел

    fprintf(fout, "Sorted sequence: ");
    fprintf(fout, "\n");

    for (int i = 0; i < k*N - 1; i++)                   // цикл проверки массива на упор€доченность
    {
        if (number[i] > number[i + 1])                  // условие пор€дка возрастани€ чисел
        {
            printf("INCORRECT SORTING.\n");             // неверное упор€дочивание
            return -1;
        }
    }

    for (int i = 0; i < k*N; ++i)                       // цикл записи чисел в fout
    {
        // printf("%lf\n", number[i]);
        fprintf(fout, "%lf ", number[i]);
    }

    printf("SORTING IS CORRECT.\n");

    fprintf(fout, "\n");

    fclose(fout);                                       // закрытие файла

    return 0;
}
