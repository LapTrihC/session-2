#include <stdio.h>

int main() {
    int vehicle_type;
    double distance;
    int is_peak_or_rain;

    double base_fare = 0.0;
    double surcharge = 0.0;
    double total_fare = 0.0;

    // Nhap thong tin chuyen di
    printf("Nhap loai xe (1: GrabBike, 2: GrabCar): ");
    scanf("%d", &vehicle_type);

    printf("Nhap quang duong (km): ");
    scanf("%lf", &distance);

    printf("Co phu phi (1: Co, 0: Khong): ");
    scanf("%d", &is_peak_or_rain);

    // Kiem tra khoang cach truoc khi tinh cuoc
    // Khoang cach phai lon hon 0 va khong vuot qua 300 km
    if (distance <= 0.0 || distance > 300.0) {
        printf("Loi: Khoang cach khong hop le.\n");
        printf("Khoang cach phai lon hon 0 va khong vuot qua 300 km.\n");

        return 0;
    }

    // Kiem tra ma loai xe
    // Chi chap nhan GrabBike = 1 va GrabCar = 2
    if (vehicle_type != 1 && vehicle_type != 2) {
        printf("Loi: Ma loai xe khong hop le.\n");
        printf("Chi chap nhan 1 (GrabBike) hoac 2 (GrabCar).\n");

        return 0;
    }

    // Kiem tra trang thai phu phi
    // Chi chap nhan 0 = khong phu phi va 1 = co phu phi
    if (is_peak_or_rain != 0 && is_peak_or_rain != 1) {
        printf("Loi: Ma trang thai phu phi khong hop le.\n");
        printf("Chi chap nhan 0 (Khong) hoac 1 (Co).\n");

        return 0;
    }

    // Tinh cuoc phi co so theo loai xe
    if (vehicle_type == 1) {
        // GrabBike: 2 km dau tien co gia co dinh 12.000 VND
        if (distance <= 2.0) {
            base_fare = 12000.0;
        } else {
            base_fare = 12000.0 + (distance - 2.0) * 4500.0;
        }
    } else {
        // GrabCar: 2 km dau tien co gia co dinh 25.000 VND
        if (distance <= 2.0) {
            base_fare = 25000.0;
        } else {
            base_fare = 25000.0 + (distance - 2.0) * 10000.0;
        }
    }

    // Tinh phu phi bien doi
    if (is_peak_or_rain == 1) {
        surcharge = base_fare * 0.2;
    } else {
        surcharge = 0.0;
    }

    // Tong tien = cuoc co so + phu phi
    total_fare = base_fare + surcharge;

    // Hien thi ket qua
    printf("\n===== KET QUA TINH CUOC =====\n");
    printf("Cuoc phi co so: %.0f VND\n", base_fare);
    printf("Phu phi bien doi: %.0f VND\n", surcharge);
    printf("Tong cuoc phi: %.0f VND\n", total_fare);

    return 0;
}