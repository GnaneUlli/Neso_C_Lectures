#include<stdio.h>

int main(){
    int i=9;
    int a=sizeof(i++);
    printf("%d\n",a);
    printf("%d\n",i);//inside sizeof opeartor evaluation does not takes place

}
