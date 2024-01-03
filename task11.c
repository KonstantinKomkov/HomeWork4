#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL,"ru_RU.UTF-8");
	printf("Введите три целых числа через пробел\n");
	int a, b, c, sum;
	scanf("%d %d %d", &a, &b, &c);
  if ((a+b)>c || (a+c)>b || (c+b)>a)
  {
    printf("Данные на входе: %d %d %d\n", a,b,c);
    printf("Данные на выходе: YES\n");
  }  
  else
  {
    printf("Данные на входе: %d %d %d\n", a,b,c);
    printf("Данные на выходе: NO\n");
  } 
}