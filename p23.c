// Write A C Program To Calculate The Sum Of All Number Between 5 To 50 Also Include 5 And 50 


#include<stdio.h>
int main(){
	int n,sum;
	sum=0;
	for(n=5;n<=50;n++){
		sum=sum+n;
	}
	printf("Sum is %d",sum);
	return 0;
} 
