// Write A C Program In Which You Keep Taking Number From User Until User Enter Odd Number

#include <stdio.h>
int main(){
	int n;
	do{
	printf("Enter the Number :");
	scanf("%d",&n);
	printf("%d\n",n);
	
	if(n%2!=0){
		break;
	}
}while(1);
return 0;
}
