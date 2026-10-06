#include <stdio.h>
#define PI 3.14159
int main() {
    float chieuDai,chieuRong,chuVIHCN, dienTICHHCN;
    float banKinh, chuViTron, dienTichTron;
    printf("nhap chieu dai hinh chu nhat:");
    scanf("%f", &chieuDai);
    printf("nhap chieu rong hinh chu nhat:");
    scanf("%f", &chieuRong);
    printf("nhap ban kinh hinh tron:");
    scanf("%f", &banKinh);
    chuVIHCN = (chieuDai + chieuRong)*2;
    dienTICHHCN = chieuDai * chieuRong;
    chuViTron = 2 * PI * banKinh;
    dienTichTron = PI * banKinh * banKinh;
    printf("\nChu vi hinh chu nhat: %.2f\n",chuVIHCN);
    printf("Dien tich hinh chu nhat: %.2f\n", dienTICHHCN);
    printf("Chu vi hinh tron: %.2f\n", chuViTron);
    printf("Dien tich hinh tron: %.2f\n", dienTichTron);
    return 0;
}