#include <stdio.h>
void intercambiar(int *x,int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
}

int main()
{
    int a=3,b=7;
    printf("Ingresar valores de a:\n");
    scanf("%d",&a);
    printf("Ingresar valores de b:\n");
    scanf("%d",&b);
    intercambiar(&a,&b);
    printf("valores de a:%d y de b:%d",a,b);
    return 0;
}
