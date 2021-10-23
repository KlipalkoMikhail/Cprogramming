#include "headers.h"

// 112 �������� ������ ����������

int test_qsort(double number[], int k)                   // ������� �������� ���������������� ������� �� ���������������
{
    FILE * fout;                                        // ���� � ��������������� ��������
    fout = fopen("out.txt", "a");                       // �������� ����� � ���������������� ��������� �� ���������� �����

    fprintf(fout, "Sorted sequence: ");
    fprintf(fout, "\n");

    for (int i = 0; i < k*N - 1; i++)                   // ���� �������� ������� �� ���������������
    {
        if (number[i] > number[i + 1])                  // ������� ������� ����������� �����
        {
            printf("INCORRECT SORTING.\n");             // �������� ��������������
            return -1;
        }
    }

    for (int i = 0; i < k*N; ++i)                       // ���� ������ ����� � fout
    {
        // printf("%lf\n", number[i]);
        fprintf(fout, "%lf ", number[i]);
    }

    printf("SORTING IS CORRECT.\n");

    fprintf(fout, "\n");

    fclose(fout);                                       // �������� �����

    return 0;
}
