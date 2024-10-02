Dự án này sử dụng Arduino và thư viện OneButton để điều khiển LED thông qua nút nhấn:
- Single Click: Bật hoặc tắt LED.
- Double Click: Chuyển đổi giữa chế độ nháy LED và chế độ bình thường.

## Chức năng

- Single Click:
  - Bật hoặc tắt LED.
  - Chỉ hoạt động khi không ở chế độ nháy.

- Double Click:
  - Kích hoạt hoặc tắt chế độ nháy LED.
  - Khi thoát chế độ nháy, LED sẽ tắt.

## Cài đặt

- Thư viện Arduino
- Thư viện OneButton
- Thư viện LED.h
- Mã nguồn
- Tải mã nguồn lên board
## Phần cứng

- 1 x ESP32 DOIT DEVKIT
- 1 điện trở
- 1 x LED
- 1 x Nút nhấn
- Dây nối

## Sơ đồ kết nối

- LED:
  - Một chân nối với chân số 23 qua điện trở 220Ω.
  - Chân còn lại nối với GND.

- Nút nhấn:
  - Một chân nối với chân số 15.
  - Chân còn lại nối với GND.


## Sử dụng

- Bật/tắt LED:
  - Nhấn một lần
- Chuyển chế độ nháy LED:
  - Nhấn đúp nút nhấn.
- Thoát chế độ nháy:
  - Nhấn đúp nút nhấn lần nữa.

