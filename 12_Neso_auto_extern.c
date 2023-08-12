/*#include<stdio.h>
int main(){
    auto int x=30;//If we didn't mention storage class it will be auto.
    printf("%d\n",x);
}*/

#include<stdio.h>
int ext(int);
extern int a=90;
int main(){
    int a=90;

    printf("%d\n",a);
    ext(a);

}
int ext(int b){
    extern int a;
    printf("%d\n",a);
}
