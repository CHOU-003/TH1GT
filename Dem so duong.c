#include <stdio.h>

void Nhap(double a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Nhap a[%d]=", i);
        scanf("%lf", &a[i]);
    }
}
void Xuat(double a[], int n)
{
    for(int i=0; i<n; i++){
        printf("%lf ", a[i]);
    }
}
int Dem(double a[], int n)
{
    if(n==0){
        return 0;
    }
    else{
        int dem=0;
        for(int i=0; i<n; i++)
        {
            if (a[i] > 0)
            {
                dem ++;
            }
        }
        return dem;
    }
}
int main()
{
    int a[50];
    int n;
    printf("Nhap vao n mang: ");
    scanf("%d", &n);
    Nhap(a,n);
    printf("\nMang sau khi nhap la: ");
    Xuat(a,n);
    int KQ = Dem(a,n);
    printf("\nKet qua la: %d", KQ);

    return 0;
}