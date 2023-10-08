// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main(){
	int number,count=0,check;
	printf("enter a number\n");
	scanf("%d",&number);
	check = number;
	while(number != 0){
		count = count+pow((number%10),3);
		number = number/10;
	}
	if(check == count){
	    printf("%d is an amstrong number",check);
	}
	else{
	    printf("%d is not an amstrong number",check);
	}
}
	