#include <stdio.h>

// Factorial 

long getFactoiral(long value); 

int main(void){

 printf("Hello World!"); 
 
 printf("Enter a number to get its factorial: "); 
 long var; 
 scanf("%d",&var); 
 
 print("Factorial(%d) = %d", var, getFactoiral(var)); 
 

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
