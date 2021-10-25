#include<stdio.h>  
 int main()    
{    
int a=100, b=200;      
printf("Before swaping a=%d b=%d",a,b);      
a=a+b;
b=a-b;
a=a-b;
printf("\nAfter swaping a=%d b=%d",a,b);    
return 0;  
}
