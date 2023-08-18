#include"stdio.h"

int main(){
    int a=1;
    int b=1;
    int c=++a || b++;
    int d=b-- && --a;
    printf("%d\n %d\n %d\n %d\n",d,c,b,a);//check the notes for basic rules easily you will find 
}