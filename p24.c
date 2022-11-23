// Write a C program to check if a given number is Armstrong number or not.


#include<stdio.h>
int main(){
	int n,r,i,a;
	printf("Enterthe Number");
	scanf("%d",&n);
	i=1;
	r=1;
	a=n;
	while(n!=0){
		i=n%10;
		r=r+i*i*i;
		n=n/10;
	}
	if(r==a){
		printf("Armstrong Number");
	}
	else{
		printf("Not Armstrong Number");
	}
	return 0;
}
