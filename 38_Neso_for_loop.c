#include<stdio.h>

int main(){
    int n,b,j=1;
    //567int k[10];
    printf("Please enter of upto 5 digit number : ");
    scanf("%d",&n);
    for(int i=0;i<5;i++){
        b=n%10;
        j=b+j;
        n=n/10;
    }

    printf("The enetered digits sum is  : %d\n",j);
}