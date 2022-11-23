// Write C Program You Take Value In Hours, Min, Sec And You Will Get Output In Min


#include<stdio.h>
int main(){
	int h,m,s,b,TM,a;
	printf("Enter the Value in Hours");
	scanf("%d",&h);
	a=h*60;
	printf("Enter the value in Min");
	scanf("%d",&m);
	printf("Enter the Value in Sec");
	scanf("%d",&s);
	b=s/60;
	TM=a+m+b;
	printf("Total Min = %d",TM);
	return 0;
}
