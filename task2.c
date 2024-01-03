#include <stdio.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL,"ru_RU.UTF-8");
    printf("Введите три целых числа через пробел\n");
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);
    if (a>b && a>c)
    {
      printf("Данные на входе: %d %d %d\n", a,b,c);
      printf("Данные на выходе: %d\n", a);
    }  
    else 
    {
      max = b>c ? b : c;
      printf("Данные на входе: %d %d %d\n", a,b,c);
      printf("Данные на выходе: %d\n", max);
    } 
}
