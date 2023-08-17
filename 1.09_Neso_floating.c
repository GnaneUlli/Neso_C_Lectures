#include"stdio.h"

int main(){

    float a = 3.14156723387774;
    double b= 3.141563238832982233;
    long double c = 3.141567893298988323445;
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    printf("%d\n",sizeof(c));
    printf("%.10f\n",a);
    printf("%.19lf\n",b);
    printf("%.21Lf\n",c);
    
}
