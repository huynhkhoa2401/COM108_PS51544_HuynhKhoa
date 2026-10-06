#include <stdio.h>

void Cau3_L2(){
        int a,b;
        float x;
        printf("nhap so nguyen a:");
        scanf("%d", &a);
        printf("nhap so nguyen b:");
        scanf("%d", &b);
        x = (float)(-b) / a;
        printf("Nghiem cua phuong trinh la: x = %.2f\n", x);
    }
int main() {
    int chon;
    do
    {
        Cau3_L2();
        printf("\nmay muon chon tiep khong? (1: tiep tuc, 0: thoat): ");
        scanf("%d", &chon);
    }while(chon == 1);
    
    return 0;
}