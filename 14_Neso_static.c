#include<stdio.h>
int count(int);
int main(){
    int a =80;
    a=count(40);
    a=count(90);
    printf("%d\n",a);
}
int  count(int c){
    static int d=0;
    d=d+c;
    return d;
}