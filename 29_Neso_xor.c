#include<stdio.h>

int main(){

    int a =3;
    int b =4;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d %d\n",a,b);
    //xor is binary operator means it requires two variables to perform operation 
    //unary operator means one bit is enough like shift opeartors , not,compliment etc.
    //Binary operator like &,|,^ etc..
}