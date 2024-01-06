#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL,"ru_RU.UTF-8");
	printf("Введите целое число от 1 до 12 через пробел\n");
	int a;
	scanf("%d", &a);
  printf("Данные на входе: %d\n", a);
  switch (a)
  {
    case 1: 
      printf("Данные на выходе: Winter (January)\n");
      break;
    case 2: 
      printf("Данные на выходе: Winter (February)\n");
      break;
    case 3: 
      printf("Данные на выходе: Spring (March)\n");
      break;
    case 4: 
      printf("Данные на выходе: Spring (April)\n");
      break;    
    case 5: 
      printf("Данные на выходе: Spring (May)\n");
      break;
    case 6: 
      printf("Данные на выходе: Summer (June)\n");
      break;
    case 7: 
      printf("Данные на выходе: Summer (Jule)\n");
      break;
    case 8: 
      printf("Данные на выходе: Summer (August)\n");
      break;
    case 9: 
      printf("Данные на выходе: Autumn (September)\n");
      break;  
    case 10: 
      printf("Данные на выходе: Autumn (October)\n");
      break;
    case 11: 
      printf("Данные на выходе: Autumn (November)\n");
      break;
    case 12: 
      printf("Данные на выходе: Winter (December)\n");
      break;            
  } 
}