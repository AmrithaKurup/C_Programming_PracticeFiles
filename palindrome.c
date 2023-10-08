#include <stdio.h>

int main(){
	int number,newnumber=0,check;
	printf("enter a number\n");
	scanf("%d",&number);
	check = number;
	while(number != 0){
		newnumber = (newnumber*10) + (number%10);
		number = number/10;
	}
	if(check == newnumber){
		printf("%d is palindrome",check);
	}
	else{
		printf("%d is not palindrome",check);
	}
}