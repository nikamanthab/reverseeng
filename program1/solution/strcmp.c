#include<stdio.h>
#include<string.h>
void main(){
    char str[100];
    printf("enter the key:");
    scanf("%s",str);
    if(strcmp(str,"ctf_flag_1") == 0){
        printf("great you win!!\n");
    }
    else{
        printf("wrong password\n");
    }
}