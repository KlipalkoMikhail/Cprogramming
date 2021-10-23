// 112 Клипалко Михаил Михайлович

#include <stdio.h>                           // библиотека ввода и вывода
#include <time.h>                            // библиотека с clock()
#include <stdlib.h>                          // библиотека с qsort()

#define N 5000

int index_sort(double*, int, int*);          // функция сортировки обменами с помощью индексов
int test_sort(double*, int, int*);           // функция проверки отсортированного массива на упорядоченность
void mass_generation(double*, int);          // функция генерации случайных чисел
void mass_read(double*, int);                // функция для сохранения массива, чтобы потом использовать массив в quick сортировке
int compare(const void *, const void *);     // функция сравнения двух значений из массива
int test_qsort(double*, int);                // функция проверки отсортированного массива на упорядоченность для qsort
