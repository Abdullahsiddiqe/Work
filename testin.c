#include<stdio.h>
int main()
 {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

 nbsbdnmsd
 bsajdhas
 nasjdsak
   // leap year if perfectly divisible by 400
   if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   // not a leap year if divisible by 100
   // but not divisible by 400
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   // leap year if not divisible by 100
   // but divisible by 4
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   // all other years are not leap years34
   
   else {
      printf("%d is not a leap year.", year);
   }

   return 0;
}


