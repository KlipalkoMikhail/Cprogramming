#include "headers.h"

// 112  липалко ћихаил ћихайлович

int compare(const void *a, const void *b)        // функци€ сравнени€ двух чисел из массива
{
    const double *m, *n;                         // вводим адреса дл€ двух чисел и сводим их к типу double

    m = (const double*)a;                        // кладем в m значение числа a
    n = (const double*)b;                        // кладем в n значение числа b

    if (*m < *n)
    {
        return -1;                               // возращаем знак разности этих чисел
    }
    else if (*m > *n)
    {
        return 1;                                // возращаем знак разности этих чисел
    }
    else
    {
        return 0;                                // возращаем знак разности этих чисел
    }
}

