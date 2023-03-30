#include<stdio.h>
#include<conio.h>

float Xn(int);
float Yn(int);

float Xn(int n){
    if(n==0)
    return 1;
    return Xn(n-1)+Yn(n-1);
}
float Yn(int n){
    if(n==0)
    return 0;
    return 3*Xn(n-1)+2*Yn(n-1);
}
int main(){
    int n;
    printf("\nNhap n :");
    scanf("%d", &n);
    float KQX=Xn(n);
    float KQY=Yn(n);
    printf("\nX(n)=%f, Y(n)=%f", KQX, KQY);
}