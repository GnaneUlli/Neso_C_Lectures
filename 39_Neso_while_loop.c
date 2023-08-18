#include<stdio.h>

int main(){
    int c=0,b,a;
    int j[10];
    printf("Enter a number upto 4 digits : ");
    scanf("%d",&a);
    int d=a;
    while(a!=0){
        b=a-((a/10)*10);
        j[c]=b;
        c++;
        a=a/10;
    }
    j[c]='\0';
    for(int i=0;i<4;i++){
        printf("%d",j[i]);
    }
}