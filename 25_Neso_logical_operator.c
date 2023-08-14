#include<stdio.h>

int main(){
    int a=10;
    int b=100;
    int c=90;
    if(a>=b && a>=c){
        printf("%d\nis grater",a);
    }else if(b>=c && b>=a){
        printf("%d\nis grater",b);
    }else{
        printf("%d\nis grater",c);
    }
}