// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    char pal[25],str[25];
    int i,temp,len;
    printf("print a string\n");
    scanf("%s",pal);
    strcpy(str,pal);
    len = strlen(pal);
    for(i=0;i<len/2;i++){
        temp=pal[len-i-1];
        pal[len-i-1]=pal[i];
        pal[i]=temp;
    }
    if(strcmp(pal,str)==0){
        printf("Entered string is a palindrome\n");
    }
    else{
        printf("Entered string is not a palindrome\n");
    }

    return 0;
}