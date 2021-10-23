// 112 �������� ������ ����������

#include <stdio.h>                           // ���������� ����� � ������
#include <time.h>                            // ���������� � clock()
#include <stdlib.h>                          // ���������� � qsort()

#define N 5000

int index_sort(double*, int, int*);          // ������� ���������� �������� � ������� ��������
int test_sort(double*, int, int*);           // ������� �������� ���������������� ������� �� ���������������
void mass_generation(double*, int);          // ������� ��������� ��������� �����
void mass_read(double*, int);                // ������� ��� ���������� �������, ����� ����� ������������ ������ � quick ����������
int compare(const void *, const void *);     // ������� ��������� ���� �������� �� �������
int test_qsort(double*, int);                // ������� �������� ���������������� ������� �� ��������������� ��� qsort
