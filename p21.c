// Write A C Program To Print The Factorial Of A Number N


#include<stdio.h>
int main(){
	int fact,i,n;
	printf("Enter the Nuber Whose Factorial you Want :");
	scanf("%d",&n);
	fact=1;
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("Factorial is %d",fact);
	return 0;
}
