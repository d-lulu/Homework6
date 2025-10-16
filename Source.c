#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>


main()
{
	setlocale(LC_ALL, "RU");
	
	printf("==== ПРОВЕРКА ЧЁТНОСТИ РАЗРЯДОВ ЧЕТЫРЁХЗНАЧНОГО ЧИСЛА ====\n\n");
	printf("Введите четырёхзначное число: ");

	int N;
	scanf("%d", &N);

	if ((N % 10) % 2 == 0) printf("\nЧисло единиц - чётное\n");
	else printf("\nЧисло единиц - нечётное\n");

	if ((N % 100 / 10) % 2 == 0) printf("Число десятков - чётное\n");
	else printf("Число десятков - нечётное\n");

	if ((N % 1000 / 100) % 2 == 0) printf("Число сотен - чётное\n");
	else printf("Число сотен - нечётное\n");

	if ((N / 1000) % 2 == 0) printf("Число тысяч - чётное\n");
	else printf("Число тысяч - нечётное\n");
}