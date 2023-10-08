#include <stdio.h>
#include <math.h>

int main(){
	int number,newnumber[25],i=0,decimal=0;
	printf("enter a number\n");
	scanf("%d",&number);
	while(number != 0){
		newnumber[i] = (number%10);
		if((newnumber[i] == 1) || (newnumber[i] == 0)){
            decimal = decimal + (number%10) * pow(2, i);
		}
		else{
		    printf("not a binary number");
		    break;
		}
		number = number/10;
		i++;
	}
	printf("%d\n",decimal);
}