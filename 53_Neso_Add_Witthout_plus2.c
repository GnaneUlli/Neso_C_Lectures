#include<stdio.h>
int main(){
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    if(y>0){
        while(y!=0){
            x++;
            y--;
        }
        printf("The sum is %d\n",x);

    }else{
        while(x!=0){
            x--;
            y++;
        }
        printf("The sum is %d\n",y);
    }
}