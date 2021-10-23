#include "headers.h"

// 112 �������� ������ ����������

void mass_generation(double number[], int k)                           // ������� ��������� ��������� �����
{
    FILE * fsource;                                                    // ���� ��� ���������� ��������� �������
    FILE * fin;                                                        // ���� ��� ������������������ �������
    fin = fopen("in.txt", "a");                                        // �������� ����� � ����������������� �������� �� ���������� �����
    fsource = fopen("source.txt", "w");                                // �������� ����� � �������� �������� �� ������

    printf("Generating %d numbers...\n", k*N);
    for (int i = 0; i < k*N; ++i)                                      // ���� ��������� ��������� ����� � �� ������ � �������� ����
    {
        double A = rand()%10;                                          // ����� ������������� �����
        double B = -1*rand()%10;                                       // ����� ������������� �����
        number[i]= (double)(A + B) + ((double)rand())/RAND_MAX;        // ���������� ������ i = ����� ����� + ������� �����
        fprintf(fsource,"%lf ", number[i]);                            // ������ ����� � �������� ����
    }
    printf("Sorting this %d numbers...\n", k*N);
    printf("\n");

    fprintf(fin, "Starting sequence with %d numbers:\n", k*N);
    for (int i = 0; i < k*N; ++i)                                      // ���� ������ ����� � ���� � ������������������ ���������
    {
        fprintf(fin, "%lf ", number[i]);
        fprintf(fin, "\n");
    }

    fclose(fin);                                                       // �������� ����� � ����������������� ��������
    fclose(fsource);                                                   // �������� ����� � �������� ��������

}

