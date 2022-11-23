//C program to convert 1 to 100 digit into words using If/Else

#include<stdio.h>
main(){
	int n;
	printf("Enter any number between 1 to 100");
	scanf("%d",&n);
	if(n/10==10)
		peintf("Hundred");
	else if(n/10==1)
		printf("Ten");
	else if(n/10==2)
		printf("Twenty");
	else if(n/10==3)
		printf("Thirty");
	else if(n/10==4)
		printf("Fourty");
	else if(n/10==5)
		printf("Fifty");
	else if(n/10==6)
		printf("Sixty");
	else if(n/10==7)
		printf("Seventy");
	else if(n/10==8)
		printf("Eighty");
	else if(n/10==9)
		printf("Ninty");
	if(n%10==1)
		printf("/tOne");
	else if(n%10==2)
		printf("\tTwo");
	else if(n%10==3)
		printf("\tThree");
	else if(n%10==4)
		printf("\tFour");
	else if(n%10==5)
		printf("\tFive");
	else if(n%10==6)
		printf("\tSix");
	else if(n%10==7)
		printf("\tSeven");
	else if(n%10==8)
		printf("\tEight");
	else if(n%10==9)
		printf("\tNine");
	return 0;	
}
