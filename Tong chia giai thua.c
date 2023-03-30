#include<stdio.h>
#include<math.h>



float Tong(float x, int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return x;
    return (1+x/n)*Tong(x,n-1)-(x/n)*Tong(x,n-2);
}
int main()
{
    float x;
    int n;
    printf("Nhap x:");
    scanf("%f", &x);
    printf("nhap n:");
    scanf ("%d", &n);
    float kq=Tong(x,n);
    printf("Ket qua la:%.2f", kq);
    return 0;
}

