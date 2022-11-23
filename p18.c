// Write A C Program In Which Keep Taking Input From User Until User Enter Multiple Of 7


#include<stdio.h>
int main()
{
	int n;
	do{
		printf("Enter the Number");
		scanf("%d",&n);
		printf("%d\n",n);
		
		if(n%7==0){
			break;
		}
	}while(1);
	return 0;
}
