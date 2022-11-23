// Write A C Program TO Print Sum Of First N Natural Number

#include<stdio.h>
int main(){
	int sum,i,n;
	printf("Enter the Number");
	scanf("%d",&i);
	for(n=0;n<=i;n++){
		sum=sum+n;
	}
	printf("Sum = %d",sum);
	return 0;
}
