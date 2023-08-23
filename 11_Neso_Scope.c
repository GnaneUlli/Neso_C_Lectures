/*#include<stdio.h>

int main(){
    int var = 99;
    int var = 100;

    printf("%d\n",var);
}*/

#include<stdio.h>

int main(){
    int var1 = 3;
    {
        int var1= 6;
        printf("%d\n",var1);
    }
    printf("%d\n",var1);
}
