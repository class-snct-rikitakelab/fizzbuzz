#include<stdio.h>

int main(){
	int input;
	scanf("%d",&input);
	printf("%d\n",input);

	if(input%3==0)prinf("fizz\n");

	if((input % 5)==0){
		printf("buzz\n");
	}
	else if(input%3==0){
		printf("fizz\n");
	}
	else{
		printf("%d\n", input);
	}
} 
