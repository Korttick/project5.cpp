// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <locale.h> 
#include <stdio.h>
int main()

{
	setlocale(LC_ALL, "Rus");
	int k = 0;
	char c = '\0';
	printf("введите секунды:");
	while (scanf_s("%d%c", &k, &c, 1) != 2 || c != '\n' || k < 0)
	{
		printf("Ошибка, введите коррекное значение:\n");
		while (getchar() != '\n');
	}
	int m;
	m = k / 60;// общее количество минут
	int h;
	h = m / 60;//часов
	m = m - h * 60;//минут
	printf("\n %d секунд - это %d часов %d минут\n", k, h, m);
	return 0;
}