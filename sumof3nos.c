 //using nested if condition 
#include<stdio.h> 
int main() 
{ 
 int num1, num2, num3; 
 int smallest; 
 printf("Enter three numbers: "); 
 scanf("%d %d %d", &num1, &num2, &num3); 
  if (num1 <= num2) 
 { 
     if (num1 <= num3) 
 { 
     smallest = num1; 
 } 
 else 
 { 
 smallest = num3; 
 } 
 } 
 else 
 { 
 if (num2 <= num3) 
 { 
 smallest = num2; 
 } 
 else 
 { 
 smallest = num3; 
 } 
 } 
 printf("Smallest number using nested if statement: 
%d\n", smallest);
//using conditional statement
#include<stdio.h> 
int main() 
{ 
 int num1, num2, num3; 
 int smallest; 
 printf("Enter three numbers: "); 
 scanf("%d %d %d", &num1, &num2, &num3); 
 smallest = (num1 <= num2 && num1 <= num3) ? num1 : (num2 <= num1 && num2 <= num3) ? num2 : num3; 
 printf("Smallest number using conditional operator: %d\n", smallest); 
 return 0;
}
 