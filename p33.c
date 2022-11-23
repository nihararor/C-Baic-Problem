// Write A C Program In Which we Have Salary Of Each Employ We have To Check how Much Tax they Have To Pay
//0-1000-->5%
//1001-5000-->10%
//5001-10000-->20%
//10001-____-->30%


#include<stdio.h>
int main(){
	int sal,tax,ns;
	printf("Enter the Salery");
	scanf("%d",&sal);
	if(sal>0 && sal<=1000){
		tax=sal*0.05;
	}
	else if(sal>1000 && sal<=5000){
		tax=1000*0.05+(sal-1000)*0.1;
	}
	else if(sal>5000 && sal<=10000){
		tax=1000*0.05+4000*0.1+(sal-5000)*0.2;
	}
	else{
		tax=1000*0.05+4000*0.1+5000*0.2+(sal-10000)*0.3;
	}
	ns=sal-tax;
	printf("Money Left After Tax =%d",ns);
	return 0;
}
