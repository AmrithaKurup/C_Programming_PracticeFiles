#include <stdio.h>

int main(){
	int number,newnumber=0;
	printf("enter a number\n");
	scanf("%d",&number);
	while(number != 0){
		newnumber = (newnumber*10) + (number%10);
		number = number/10;
	}
	printf("reverse of the entered number is %d",newnumber);
}