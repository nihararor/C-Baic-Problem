// With C Program make calculator using Switch Case


#include<stdio.h>
int main(){
	int f,s,c,n;
	printf("Enter the Choice");
	scanf("%d",&n);
	printf("Enetr the Two Numner");
	scanf("%d %d",&f,&s);
	switch(n){
		case 1:
			c=f+s;
			printf("Sum = %d",c);
			break;
		case 2:
			c=f-s;
			printf("Sub = %d",c);
			break;
		case 3:
			c=f*s;
			printf("Mul =%d",c);
			break;
		case 4:
			c=f/s;
			printf("Div = %d",c);
			break;
	}
	return 0;
}
