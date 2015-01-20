#include<stdio.h>

int main(){
	int input;
	scanf("%d",&input);


	if((input % 3)==0){
		if (input%5==0){
			printf("fizzbuzz\n");
		}
		else{
		printf("fizz\n");
		}
	}
	else if((input % 5)==0){
		printf("buzz\n");
	}
	else{
		printf("%d\n", input);
	}
} 
