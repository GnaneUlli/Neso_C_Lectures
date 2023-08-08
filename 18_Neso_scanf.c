/*#include<stdio.h>
void main(){
    printf("Enter number of your choice : ");
    int g;
    scanf("%d",&g);//We are storing value in the adress of g.
    printf("%d\n",g);
}
*/
#include<stdio.h>

int main(){
    char a;
    char u[10];
    printf("Enter you intial : ");
    scanf("%c ",&a);
    printf("Enter you name : ");
    for(int i= 0;i<10;i++){
        scanf("%c ",&u[i]);
    }
    printf("Your full name is %c. %s\n",a,u);


}