1. Lỗi tính cước khi quãng đường > 2 km
Mã hiện tại:

if (distance <= 2.0) {
    total_fare = 12000.0;
} else {
    total_fare = distance * 4500.0;
}

Sai ở phần else vì quy định là:

2 km đầu: 12.000
Phần vượt 2 km: 4.500/km

Vì vậy phải tính:

total_fare = 12000.0 + (distance - 2.0) * 4500.0;

2. Lỗi kiểm tra is_raining

Mã hiện tại:

if (is_raining = 1)

Ở đây = là phép gán, không phải phép so sánh.

Câu lệnh này thực chất gán:

is_raining = 1;

Sau đó điều kiện if nhận giá trị 1, nên luôn đúng → chuyến nào cũng bị nhân 1.2.

Phải sửa thành:

if (is_raining == 1)

== mới là phép so sánh bằng.

Bảng Test Cases



Trường hợp kiểm thử	Dữ liệu đầu vào	Kết quả sai thực tế	Kết quả đúng mong đợi
1. Đi dưới 2 km, trời không mưa	distance = 2, is_raining = 0	14.400 VND	12.000 VND
2. Đi 3 km, trời không mưa	distance = 3, is_raining = 0	13.500 VND	16.500 VND

