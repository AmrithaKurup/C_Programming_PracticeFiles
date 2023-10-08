#include <stdio.h>

int main(){
	int number,newnumber[25],i=0,j;
	printf("enter a number\n");
	scanf("%d",&number);
	while(number != 0){
		newnumber[i] = (number%2);
		number = number/2;
		i++;
	}
	for(j=i-1;j>=0;j--){
	    printf("%d",newnumber[j]);
	}
}