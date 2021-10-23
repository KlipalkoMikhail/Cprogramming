#include "headers.h"

// 112 Клипалко Михаил Михайлович

void mass_generation(double number[], int k)                           // функция генерации случайных чисел
{
    FILE * fsource;                                                    // файл для сохранения исходного массива
    FILE * fin;                                                        // файл для неотсортированного массива
    fin = fopen("in.txt", "a");                                        // открытие файла с неотсортированным массивом на добавление чисел
    fsource = fopen("source.txt", "w");                                // открытие файла с исходным массивом на запись

    printf("Generating %d numbers...\n", k*N);
    for (int i = 0; i < k*N; ++i)                                      // цикл генерации случайных чисел и их запись в исходный файл
    {
        double A = rand()%10;                                          // целая положительная часть
        double B = -1*rand()%10;                                       // целая отрицательная часть
        number[i]= (double)(A + B) + ((double)rand())/RAND_MAX;        // присвоение ячейке i = целая часть + дробная часть
        fprintf(fsource,"%lf ", number[i]);                            // запись чисел в исходный файл
    }
    printf("Sorting this %d numbers...\n", k*N);
    printf("\n");

    fprintf(fin, "Starting sequence with %d numbers:\n", k*N);
    for (int i = 0; i < k*N; ++i)                                      // цикл записи чисел в файл с неотсортированными массивами
    {
        fprintf(fin, "%lf ", number[i]);
        fprintf(fin, "\n");
    }

    fclose(fin);                                                       // закрытие файла с неотсортированным массивом
    fclose(fsource);                                                   // закрытие файла с исходным массивом

}

