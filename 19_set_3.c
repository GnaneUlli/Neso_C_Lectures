/*#include<stdio.h>
int main(){
    int var=0x43ff;
    printf("%x\n",var);
}
*/
#include<stdio.h>
static int i=27;
static int i;
int main(){
    static int i;
    printf("%d\n",i);
    return 0;
}