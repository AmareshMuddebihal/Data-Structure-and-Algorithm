#include <stdio.h>  
int calculate_fact(int);  
int main()  
{  
 int n=5,f;  
 f=calculate_fact(n); // calling a function  
 printf("factorial of a number is %d",f);  
  return 0;  
}  
int calculate_fact(int a)  
{  
  if(a==1)  
  {  
      return 1;  
  }  
  else  
  return a*calculate_fact(a-1); //calling a function recursively.  
   }  