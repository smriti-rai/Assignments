#include <stdio.h>
void main()
{
	int a;
	printf("Enter any number");
	scanf("%d",&a);
	if(a%2==0)
		printf("The number is Even.");
	else
		printf("The number is Odd.");
	getchar();
}
