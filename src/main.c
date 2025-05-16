#include <stdio.h>

// Factorial 

int abs(int a);

long getFactoiral(long value); 

int main(void){

 printf("Hello World!"); 
 
 printf("Enter a number to get its factorial: "); 
 long var; 
 scanf("%d",&var); 
 
 print("Factorial(%d) = %d", var, getFactoiral(var)); 

 print("abs(%d) = %d", -10, abs(-10)); 

return 0; 
}

long getFactoiral(long value){
 if(value == 0 || value == 1) return 1; 
 else {
   long res = 1; 
   for(long i = value ; i >=2 ; --i){
     res *= i; 
   }
  return res; 
 }
}

int abs(int a){
return (a > 0) ? a : -a; 
}
