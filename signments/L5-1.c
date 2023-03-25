/*1 program to input a three digits numbers and find out whether it is armstrong number or
not. If sum of cubes of each digit of the number is equal to the number itself, then it is called an
Armstrong number. Eg 153 = (1 * 1 * 1) + (5 * 5 * 5) + (3 * 3 *3)*/

#include <stdio.h>
void main(){
int n,rem,x,N;
printf("ENTER A THREE-DIGIT NUMBER:"");
scanf("%d"'&N);
n=N;
while(n!=0){
rem=n%10; //last digit
x+=rem*rem*rem;
n/=10;
}

if (x == N)
printf("%d is an Armstrong number.", N);
else
printf("%d is not an Armstrong number.", N);

getchar();
}