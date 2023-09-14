/*#include<stdio.h>

int main(){
    int i =-5;
    while(i<=5){
        if(i>=0){
            break;

        }else{
            i++;
            continue;
        }
        printf("Neso");  //Neso will be never printed on the screen.
    }
}*/

#include<stdio.h>

int main(){
    int i=0;
    for(printf("One\n"); i<3 && printf("") ;i++){
        printf("Hi \n");
    }
}