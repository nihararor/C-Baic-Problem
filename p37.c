// C Program to Calculate Total and Average Marks of N Subjects


#include<stdio.h>
int main(){
	int n,t,i,m,a;
	printf("Enter the No. Of Subject :");
	scanf("%d",&n);
	i=1,t=0;
	while(i<=n){
		printf("Enter the Marks Of Subject %d",i);
		scanf("%d",&m);
		t=t+m;
		i++;
		
	}
	printf("Total Marks = %d",t);
	a=t/n;
	printf("Average Marks = %d",a);
	return 0;
}
