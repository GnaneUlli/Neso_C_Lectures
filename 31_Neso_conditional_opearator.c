#include<stdio.h>

int main(){
    int a=75;
    int b=63;

    int num;
    num=sizeof(a)?(b>23?((a==75)?'A':0):0):0;
    printf("%d\n",num);
}