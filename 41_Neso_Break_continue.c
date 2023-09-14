#include<stdio.h>

int main(){
    int i=0;
    int n=2;
    for(i=0;i<=20;i++){
        if(i>=20){
            printf("you are out of the loop");
            break;
        }
        else{
            i=i+2;
           // continue;
        }
        printf("%d ",i);
    }
}