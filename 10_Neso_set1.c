/*#include<stdio.h>
int main(){
 
    printf("%d",printf("%s","hello world!"));
    return 0;
}


#include<stdio.h>

int main(){

    printf("%10s","hello");

}
*/
//signed int i; correct 
//unsigned i; correct
//long long i; correct because when no data type is mentioned compiler expecitely assumes as int type.

#include<stdio.h>

int main(){
    int i=1;
    int j=-2;
    printf("%u",i+j);
    return 0;//The output is based on range cycle conversion 
}