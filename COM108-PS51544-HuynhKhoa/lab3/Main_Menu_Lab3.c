#include <stdio.h>
#include <math.h>

void tinhHocLuc();
void giaiPTBacHai();
void tinhTienDien();

int main() {
    int chon;
    do {
        printf("\n===== MENU CHUONG TRINH LAB 3 =====\n");
        printf("1. Tinh hoc luc sinh vien\n");
        printf("2. Giai phuong trinh bac hai\n");
        printf("3. Tinh tien dien tieu thu\n");
        printf("0. Thoat chuong trinh\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &chon);
        
        switch (chon) {
            case 1:
                tinhHocLuc();
                break;
            case 2:
                giaiPTBacHai();
                break;
            case 3:
                tinhTienDien();
                break;
            case 0:
                printf("Thoat chuong trinh. Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long chon lai tu 0 den 3.\n");
        }
    } while (chon != 0);
    
    return 0;
}
void tinhHocLuc() {
    float diem;
    printf("\n--- TINH HOC LUC SINH VIEN ---\n");
    printf("Nhap vao diem so cua sinh vien (0.0 - 10.0): ");
    scanf("%f", &diem);
    
    if (diem < 0.0 || diem > 10.0) {
        printf("Diem so nhap vao khong hop le!\n");
    } else if (diem >= 9.0) {
        printf("Hoc luc: Xuat sac\n");
    } else if (diem >= 8.0) {
        printf("Hoc luc: Gioi\n");
    } else if (diem >= 6.5) {
        printf("Hoc luc: Kha\n");
    } else if (diem >= 5.0) {
        printf("Hoc luc: Trung binh\n");
    } else if (diem >= 3.5) {
        printf("Hoc luc: Yeu\n");
    } else {
        printf("Hoc luc: Kem\n");
    }
}
void giaiPTBacHai() {
    float a, b, c;
    printf("\n--- GIAI PHUONG TRINH BAC HAI ---\n");
    printf("Nhap vao he so a:");
    scanf("%f", &a);
    printf("Nhap vao he so b: ");
    scanf("%f", &b);
    printf("Nhap vao he so c: ");
    scanf("%f", &c);
    
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            float x = -c / b;
            printf("Phuong trinh co nghiem duy nhat: x = %.2f\n", x);
        }
    } else {
        float delta = b * b - 4 * a * c;
        if (delta < 0) {
            printf("Phuong trinh vo nghiem.\n");
        } else if (delta == 0) {
            float x = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %.2f\n", x);
        } else {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet: x1 = %.2f, x2 = %.2f\n", x1, x2);
        }
    }
}

void tinhTienDien() {
    int kwh;
    printf("\n--- TINH TIEN DIEN TIEU THU ---\n");
    printf("Nhap vao tong so kWh dien tieu thu trong thang: ");
    scanf("%d", &kwh);
    
    if (kwh < 0) {
        printf("So kWh tieu thu phai la so duong!\n");
        return;
    }
    
    double tongTien = 0;
    int conLai = kwh;
    if (conLai > 50) {
        tongTien += 50 * 1678;
        conLai -= 50;
    } else {
        tongTien += conLai * 1678;
        conLai = 0;
    }
    
    if (conLai > 0) {
        if (conLai > 50) {
            tongTien += 50 * 1734;
            conLai -= 50;
        } else {
            tongTien += conLai * 1734;
            conLai = 0;
        }
    }
    if (conLai > 0) {
        if (conLai > 100) {
            tongTien += 100 * 2014;
            conLai -= 100;
        } else {
            tongTien += conLai * 2014;
            conLai = 0;
        }
    }
    if (conLai > 0) {
        if (conLai > 100) {
            tongTien += 100 * 2536;
            conLai -= 100;
        } else {
            tongTien += conLai * 2536;
            conLai = 0;
        }
    }
    if (conLai > 0) {
        if (conLai > 100) {
            tongTien += 100 * 2834;
            conLai -= 100;
        } else {
            tongTien += conLai * 2834;
            conLai = 0;
        }
    }
    if (conLai > 0) {
        tongTien += conLai * 2927;
    }
     printf("Tong tien dien phai tra: %.0f dong\n", tongTien);
}