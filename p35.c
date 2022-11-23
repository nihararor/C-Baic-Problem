//Write a C Program To Find Area of square , circle , and rectangle Using Switch Case


#include<stdio.h>
int main(){
	int n,side,c,l,b,r,pi;
	printf("Enter your Choice From 1 To 3\n 1=Square\n 2=Rectangle\n 3=Circle");
	scanf("%d",&n);
	switch(n){
		case 1:
			printf("Enter the Side Of Square");
			scanf("%d",&side);
			c=side*side;
			printf("Area Of Square = %d",c);
			break;
		case 2:
			printf("Enter the Length and Breath For Rectangle");
			scanf("%d %d",&l,&b);
			c=l*b;
			printf("Area Of Rectangle = %d",c);
			break;
		case 3:
			printf("Enter the Radius Of Circle");
			scanf("%d",&r);
			pi=3.14;
			c=pi*r*r;
			printf("Area Of Circle = %d",c);
			break;
	}
	return 0;
}
