#include<stdio.h>
int main(){
    register int a=100;
    int register b=8923;

    printf("%d\n%d",a,b);
    printf("%u \n%u",&a,&b);//Adress cant be known since variables are stored in regisrter memory
}