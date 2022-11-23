// Write A Program In C Language To Print Table Of Number Input By The User

#include<stdio.h>
int main(){
	int n,i;
	printf("Enter the Number :");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		printf("%d\n",n*i);
	}
	return 0;
}
