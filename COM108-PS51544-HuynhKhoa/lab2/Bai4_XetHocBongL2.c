#include <stdio.h>

void Cau4_L2(){
    float diemTB;
    int hanhKiem;
    int dkDiem, dkHanhKiem, ketQua;
    printf("Nhap diem trung binh: ");
    scanf("%f", &diemTB);
    printf("Nhap hanh kiem (1: Tot, 0: Khac): ");
    scanf("%d", &hanhKiem);
    dkDiem = (diemTB >= 8.0);
    dkHanhKiem = (hanhKiem == 1);
    ketQua = dkDiem && dkHanhKiem;
    printf("Dieu kien diem trung binh >= 8: %d\n", dkDiem);
    printf("Dieu kien hanh kiem tot: %d\n", dkHanhKiem);
    printf("Ket qua xet hoc bong (1: Dat, 0: Khong dat): %d\n", ketQua);

}

int main(){
    int chon;
    do{
        Cau4_L2();
        printf("\n Dit me may co muon tiep hay khong? (1: tiep tuc, 0: thoat): ");
        scanf("%d", &chon);
    }while(chon == 1);
    return 0;
}