/*#include<stdio.h>

int main(){
    int a=10,b=10;
    printf("%d",a+ ++b);
}*/

#include<stdio.h>
int main(){
    int a,b,c,d;
    a=b=20;
    c=d=10;
    printf("%d\n",a-c-b);
    printf("%d\n",a*c+d/10);
    printf("%d\n",(a*c)+d/10);//precedence order *,/,%,+,- and bracket comes first

}