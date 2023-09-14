#include<stdio.h>

int main(){
    int i=0;
    for(i=0;i<=20;i++){
        switch (i){
            case 0:
            i+=5;
            case 5:
            i+=5;
            case 10:
            i+=2;
            default :
            i+=4;

        }
        printf("%d \n",i);
    }
}