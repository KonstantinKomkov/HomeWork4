#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL,"ru_RU.UTF-8");
	printf("Введите пять целых чисел через пробел\n");
	int a, b, c, d, e, max;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    max =  a > b ?  a : b;
    max = max> c ? max: c;
    max = max> d ? max: d;
    max = max> e ? max: e;
    printf("Данные на входе: %d %d %d %d %d\n", a,b,c,d,e);
    printf("Максимальное число: %d\n", max);
}