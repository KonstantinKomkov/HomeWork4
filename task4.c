#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL,"ru_RU.UTF-8");
	printf("Введите пять целых чисел через пробел\n");
	int a, b, c, d, e, max, min, sum;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
  max =  a > b ?  a : b;
  max = max> c ? max: c;
  max = max> d ? max: d;
  max = max> e ? max: e;
  min =  a < b ?  a : b;
  min = min< c ? min: c;
  min = min< d ? min: d;
  min = min< e ? min: e;
  sum = max + min;
  printf("Данные на входе: %d %d %d %d %d\n", a,b,c,d,e);
  printf("Данные на выходе (сумма чисел): %d\n", sum);
  printf("Максимальное число: %d\n", max);
  printf("Минимальное число: %d\n", min);
}
