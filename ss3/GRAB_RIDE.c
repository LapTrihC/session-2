#include <stdio.h>

int main() {
    double distance_km;
    int is_surge;
    double total_fare = 0.0;

    // Nhap du lieu
    printf("Nhap quang duong (km): ");
    scanf("%lf", &distance_km);

    printf("Co phu phi khong (1: Co, 0: Khong): ");
    scanf("%d", &is_surge);

    // Buoc 1: Kiem tra du lieu dau vao
    if (distance_km <= 0.0) {
        printf("Loi: Khoang cach khong hop le!\n");
        return 0;
    }

    if (is_surge != 0 && is_surge != 1) {
        printf("Loi: Trang thai phu phi khong hop le!\n");
        return 0;
    }

    // Buoc 2: Tinh cuoc phi co ban
    if (distance_km <= 2.0) {
        total_fare = 12000.0;
    } else {
        total_fare = 12000.0 + (distance_km - 2.0) * 4500.0;
    }

    // Buoc 3: Ap dung phu phi
    if (is_surge == 1) {
        total_fare = total_fare * 1.2;
    }

    // Hien thi ket qua
    printf("Tong cuoc phi: %.2f VND\n", total_fare);

    return 0;
}