#include <stdio.h>
#include <locale.h>

int main (void)
{
  printf(setlocale(LC_ALL, "Russian"));
	setlocale(LC_ALL,"ru_RU.UTF-8");
	printf("Введите два целых числа через пробел\n");
	int a, b;
	scanf("%d %d", &a, &b);
    if(a>b)
    {
      printf("Данные на входе: %d %d\n", a,b);
      printf("Данные на выходе: %d %d\n", b,a);
    }
    else 
    {
      printf("Данные на входе: %d %d\n", a,b);
      printf("Данные на выходе: %d %d\n", a,b);
    } 
}
