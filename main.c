#include<stdio.h>

int main(){
	int input;
	scanf("%d",&input);
	if((input % 5)==0){
		printf("buzz\n");
	}
	else{
		printf("%d\n", input);
	}
} 
