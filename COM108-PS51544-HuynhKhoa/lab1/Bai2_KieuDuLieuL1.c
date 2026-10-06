#include <stdio.h>
int main(){
    char HoTen[] = "Huynh Dang Khoa";
    char MSSV[] = "PS51544";
    int Namsinh = 2008;
    float DiemTB = 8.9;
    int tuoi = 2026 - Namsinh;
    printf("Ho va ten: %s\n", HoTen);
    printf("MSSV: %s\n", MSSV);
    printf("Nam Sinh: %d\n", Namsinh);
    printf("Tuoi: %d\n", tuoi);
    printf("Diem trung binh: %.2f\n", DiemTB);
    return 0;
}