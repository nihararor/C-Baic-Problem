// Write A C Program If
// Age-->18 To 25 --> 10000
// Age-->26 to 35 --> 20000
// Age-->36 to 45 --> 30000



#include<stdio.h>
int main(){
	int age;
	printf("Enter your Age :");
	scanf("%d",&age);
	if(age>=18 && age<=25){
		printf("10000 Salery");
	}
	else if(age>=26 && age<=35){
		printf("20000 Salery");
	}
	else if(age>=36 && age<45){
		printf("30000 Salery");
	}
	return 0;
}
