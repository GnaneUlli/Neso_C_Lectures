/*#include<stdio.h>
#define PI 3.1415
int main(){
    printf("%.5f\n",PI);
}*/

#include<stdio.h>

#define add(m,n)  m+n*20
int main(){
    static int c=5;
    c=5*add(10,90);
    printf("%d\n",c);
}