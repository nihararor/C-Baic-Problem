// Write A C Program In Which Print All Odd Number From 5 To 50


#include<stdio.h>
int main(){
	int i;
	for(i=5;i<=50;i++){
		if(i%2 !=0){
			printf("%d\n",i);
		}
	}
	return 0;
}
