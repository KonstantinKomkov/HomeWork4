#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL,"ru_RU.UTF-8");
	printf("Введите пять целых чисел через пробел\n");
	int a, b, c, d, e, min;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    min =  a < b ?  a : b;
    min = min< c ? min: c;
    min = min< d ? min: d;
    min = min< e ? min: e;
    printf("Данные на входе: %d %d %d %d %d\n", a,b,c,d,e);
    printf("Минимальное число: %d\n", min);
}