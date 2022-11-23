// Write C Program To find the Area and Perimeter of a Square 


#include<stdio.h>
int main(){
	int side,area,per;
	printf("enter the Value of Side :");
	scanf("%d",&side);
	area=side*side;
	per=side*4;
	printf("Area = %d\n",area);
	printf("Perimeter = %d",per);
	return 0;
}
