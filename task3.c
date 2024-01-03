#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL,"ru_RU.UTF-8");
	printf("Введите целое положительное трехзначное число через пробел\n");
	int number, max;
	scanf("%d", &number);
  int a = number%10;
  int b = (number/10)%10;
  int c = (number/100)%10;
  if (a>b && a>c)
  {
    printf("Данные на входе: %d%d%d\n", c,b,a);
    printf("Данные на выходе: %d\n", a);
  }  
  else 
  {
    max = b>c ? b : c;
    printf("Данные на входе: %d%d%d\n", c,b,a);
    printf("Данные на выходе: %d\n", max);
  }
}
