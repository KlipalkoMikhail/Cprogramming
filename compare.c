#include "headers.h"

// 112 �������� ������ ����������

int compare(const void *a, const void *b)        // ������� ��������� ���� ����� �� �������
{
    const double *m, *n;                         // ������ ������ ��� ���� ����� � ������ �� � ���� double

    m = (const double*)a;                        // ������ � m �������� ����� a
    n = (const double*)b;                        // ������ � n �������� ����� b

    if (*m < *n)
    {
        return -1;                               // ��������� ���� �������� ���� �����
    }
    else if (*m > *n)
    {
        return 1;                                // ��������� ���� �������� ���� �����
    }
    else
    {
        return 0;                                // ��������� ���� �������� ���� �����
    }
}

