// Write A C Program To Print Reverse Of The Table For A Number N


#include<stdio.h>
int main(){
	int i,n;
	printf("Enter the Number :");
	scanf("%d",&n);
	for(i=10;i>0;i--){
		printf("%d\n",n*i);
	}
	return 0;
}
