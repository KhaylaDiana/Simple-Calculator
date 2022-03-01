#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int number1;
  int number2;
  int result;
  int loopNumber;
  int magicNumber;
  char operator;
  
  if(argc==3)
  {
    for(loopNumber=1; loopNumber<7; loopNumber++)
    {
      printf("enter a simple mathematical expression no spaces example 2+2\n");
      scanf("%i%c%i", &number1, &operator, &number2);

      switch(operator)
      {
        case '+':
	  result=number1+number2;
	  printf("Wizard says %i plus %i equals %i\n", number1, number2, result);
	  break;
	case '-':
	  result=number1-number2;
	  printf("Wizard says %i minus %i equals %i\n", number1, number2, result);
	  break;
	case '*':
	  result=number1*number2;
	  printf("Wizard says %i times %i equals %i\n", number1, number2, result);
	  break;
	case '/':
	  result=number1/number2;
	  printf("Wizard says %i divided by %i equals %i\n", number1, number2, result);
	  break;
	case '%':
	  result=number1%number2;
	  printf("Wizard says %i modulo %i equals %i\n", number1, number2, result);
	  break;
	default:
	  printf("Wizard never learned how to do that, I can only do +, -, /, *, or %\n");
	  return 0;
	  break;
      }

      magicNumber=atoi(argv[2]);
      printf("%i\n", magicNumber);

      if(magicNumber==number1)
      {
        printf("Wizard says %d is the MAGIC NUMBER....WOOOOOOOO!!!!\n", magicNumber);
      }
      if(magicNumber==number2)
      {
        printf("Wizard says %i is the MAGIC NUMBER....WOOOOOOO)!!!!", magicNumber);
      }
    }
  }
}
