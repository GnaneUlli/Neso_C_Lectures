#include<stdio.h>

int main(){
    int a=10;
    int c=90;
    int b=30;
    if(a>b && a<c){
        printf("%d is the second one in increasing order\n",a);
    }
    else if(a>c && a<b){
        printf("%d is the second one in increasing order\n",a);
    
    }
    else if(b>c && a<b){
        printf("%d is the second one in increasing order\n",b);
    }
    else if(c>b && a<b){
        printf("%d is the last one increasing order\n",c);
    }
    else{
        printf("THis is not the correct logo!!");
    }

}