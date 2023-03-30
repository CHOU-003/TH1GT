#include <stdio.h>

void Nhapmang(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d]=", i);
        scanf("%d", &a[i]);
    }
}
void Xuatmang(int a[], int n)
{
    for(int i=0; i < n; i++){
        printf("%d", a[i]);
         if(a[i] == 0)
            break;
    }
}
int Tong(int a[], int n)
{
    if(n == 0)
        return 0;
        else{
            int kq = Tong(a, n-1);
            if(a[n-1] % 2 ==0){
                kq = kq + a[n-1]; 
            }
            return kq;
        } 
}
int main()
{
     int a[50];
     int n;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    Nhapmang(a,n);
    printf("\nMang sau khi nhap la: ");
    Xuatmang(a,n);
    int kq = Tong(a,n);
    printf("\nKet qua la: %d", kq);

    return 0;

}
