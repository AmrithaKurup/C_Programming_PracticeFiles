#include <stdio.h>
#include <string.h>

int main() {
    char str[25];
    int i,len,flag=0;
    printf("print a string\n");
    scanf("%s",str);
    len = strlen(str);
    for(i=0;i<len;i++){
        if(str[i]!=str[len-i-1]){
            flag=1;
            break;
        }
    }
    if(flag){
        printf("Entered string is not a palindrome\n");
    }
    else{
        printf("Entered string is a palindrome\n");
    }

    return 0;
}