// Write A C Program In Which We Take Number From User And Print It In Reverse Order

#include<stdio.h>
int main(){
	int s,n;
	printf("Enter the Number :");
	scanf("%d",&n);
	s=0;
	while(n>0){
		s=n%10;
		n=n/10;
		printf("%d",s);
	}
	return 0;
}
