#include "headers.h"

// 112 �������� ������ ����������

int test_sort(double number[], int k, int ind[])        // ������� �������� ���������������� ������� �� ���������������
{
    FILE * fout;                                        // ���� � ��������������� ��������
    fout = fopen("out.txt", "a");                       // �������� ����� � ���������������� ��������� �� ���������� �����

    fprintf(fout, "Sorted sequence: ");
    fprintf(fout, "\n");

    for (int i = 0; i < k*N - 1; i++)                   // ���� �������� ������� �� ���������������
    {
        if (number[ind[i]] > number[ind[i+1]])          // ������� ������� ����������� �����
        {
            printf("INCORRECT SORTING.\n");             // �������� ��������������
            return -1;
        }
    }

    for (int s = 0; s < k*N; ++s)                       // ���� ������ ����� � fout
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

    fclose(fout);                                       // �������� �����

    return 0;
}
