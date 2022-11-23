// C Program To Print series 1+3+5+...+n


#include<stdio.h>
int main(){
	int n,i,s;
	s=0;
	printf("Enter the value Of N");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2){
		printf("%d\n",i);
		s=s+i;
	}
	printf("\nSum Of The Series = %d",s);
	return 0;
}
