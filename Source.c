#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>


main()
{
	setlocale(LC_ALL, "RU");
	
	printf("==== �������� ר������ �������� ����Ш��������� ����� ====\n\n");
	printf("������� ������������� �����: ");

	int N;
	scanf("%d", &N);

	if ((N % 10) % 2 == 0) printf("\n����� ������ - ������\n");
	else printf("\n����� ������ - ��������\n");

	if ((N % 100 / 10) % 2 == 0) printf("����� �������� - ������\n");
	else printf("����� �������� - ��������\n");

	if ((N % 1000 / 100) % 2 == 0) printf("����� ����� - ������\n");
	else printf("����� ����� - ��������\n");

	if ((N / 1000) % 2 == 0) printf("����� ����� - ������\n");
	else printf("����� ����� - ��������\n");
}