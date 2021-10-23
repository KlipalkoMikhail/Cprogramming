// ��������� ���������� + ������� ���������� �� ����������. ������ ������������� ������ � ������� �����������, ����� �� ������� ����� � ���������� [-10,10]

#include "headers.h"

// 112 �������� ������ ����������

int main(void)
{
    FILE * ftime;                                                       // ���� � ������� �������
    ftime = fopen("time.txt", "w");                                     // �������� ����� �� ���
    clock_t t;                                                          // ���������� �������
    for(int k = 1; k <= 32; k *= 2)                                     // ���� ��������� � ���������� �����
    {
        double number[k*N];                                             // �������� ������� �� k*N �����
        int ind[k*N];
        for(int i = 0; i < k*N; i++)
        {
            ind[i] = i;
        }

        mass_generation(number, k);                                     // ���������� ������� ���������� �������, ������ ������������ ������� � ����

        fprintf(ftime, "Slow sorting time of %d numbers: ", k*N);
        printf("Slow sorting time of %d numbers: ", k*N);

        t = clock();                                                    // ������ �������
        index_sort(number, k, ind);                                     // ��������� ���������� ���������
        t = clock() - t;                                                // ����� �������

        fprintf(ftime, "%lf seconds\n", (double)t/CLOCKS_PER_SEC);      // ����� ������� � ����
        printf("%lf seconds\n", (double)t/CLOCKS_PER_SEC);

        test_sort(number, k, ind);                                      // �������� ���������� �� ������������

        mass_read(number, k);                                           // ���������� ����� �� �������

        fprintf(ftime, "Quick sorting time of %d numbers: ", k*N);
        printf("Quick sorting time of %d numbers: ", k*N);

        t = clock();                                                    // ������ �������
        qsort(number, k*N, sizeof(double), compare);                    // ������������ ����������
        t = clock() - t;                                                // ����� �������

        fprintf(ftime, "%lf seconds\n", (double)t/CLOCKS_PER_SEC);      // ����� ������� � ����
        printf("%lf seconds\n", (double)t/CLOCKS_PER_SEC);

        test_qsort(number, k);                                          // �������� ���������� �� ������������
        printf("\n");

    }

    return 0;
}
