

#include <stdio.h>
#include <windows.h>
void sayHello(void);
void playTune(void);
void displayValue(int value);
//--------------------------------------start----
int main()
{
   int value;

   sayHello();
   printf("Please enter a value\n");
   scanf("%d",&value);
   displayValue(value);
   playTune();
   return 0;
}
//---------------------------------end----

void sayHello(void)
{
   printf("hello there welcome to C\n");
}

void displayValue(int value)
{
   printf("The value stored is = %d\n",value);

}

void playTune(void)
{
     Beep(523,300);
     printf("Play C\n");

     Beep(523,300);
     printf("Play D\n");

     Beep(659,300);
     printf("Play E\n");

     Beep(698,300);
     printf("Play F\n");
}

     // int getNumber(void)
     // {
     //     int number;
     //     printf("please enter\n"):
      //    return number;
     // }
