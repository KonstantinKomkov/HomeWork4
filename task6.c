#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL,"ru_RU.UTF-8");
	printf("Введите два целых числа через пробел\n");
	int a, b;
	scanf("%d %d", &a, &b);
  if(a>b)
  {
    printf("Данные на входе: %d %d\n", a,b);
    printf("Данные на выходе: Above\n");
  }
  else if (a<b)
  {
    printf("Данные на входе: %d %d\n", a,b);
    printf("Данные на выходе: Less\n");
  } 
  else
  {
    printf("Данные на входе: %d %d\n", a,b);
    printf("Данные на выходе: Equal\n");
  }
}
