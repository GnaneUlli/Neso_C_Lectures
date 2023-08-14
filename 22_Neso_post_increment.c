#include<stdio.h>

int main(){
    int a=90;
    a++;
    a=a+1;
    printf("%d\n",a);
    int b=a++;
    printf("%d\n",b);
    printf("%d\n",a++);
    printf("%d\n",a);
    //By undestanding this program you will get to understand the whole post increment concept
}