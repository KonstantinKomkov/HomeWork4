#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL,"ru_RU.UTF-8");
	printf("Введите четыре целых числа через пробел\n");
	int x1, y1, x2, y2;
  float k,b;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
  k=(float)(y2-y1)/(x2-x1);
  b=(float)(-k*x1 + y1);
  printf("Данные на входе: x1 = %d, y1 = %d, x2 = %d, y2 = %d\n", x1, y1, x2, y2);
  printf("Данные на выходе: k = %2.2f, b = %2.2f\n", k, b);
  printf("Уравнение: y = %2.2fx + %2.2f\n", k, b);
}
