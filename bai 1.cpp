#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,s,p;
     printf("\nNhap ba canh  tam giac: ");
        scanf("%f%f%f",&a,&b,&c); 
        p=(a+b+c)/2;
        if (a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0) {
         s=sqrt(p*(p-a)*(p-b)*(p-c));
         printf("Dien tich  tam giac la: %f", s);
        }
        else {
            printf("Day khong phai tam giac, Nhap lai ba canh : ");
        }
    return 0;
}