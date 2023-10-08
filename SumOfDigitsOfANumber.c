#include <stdio.h>

int main(){
	int number,count=0;
	printf("enter a number\n");
	scanf("%d",&number);
	while(number != 0){
		count = count+(number%10);
		number = number/10;
	}
	printf("sum is %d",count);
}
	