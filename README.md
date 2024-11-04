# Mp3_Music_Player_On_Esp32

Máy phát nhạc mp3 với ESP32 dùng DAC sử dụng kết hợp màn hình SSD1306 kết hợp các nút bấm để lựa chọn bài hát (các file mp3 được lưu sẵn trong thẻ nhớ sd) và bật tắt nhạc. Sử dụng code để dịch file mp3 để chip có thể xử lý. Nhạc sẽ được phát ra loa với sự hỗ trợ của bộ khuếch đại LM386. Điều chỉnh volume sẽ sử dụng biến trở.

## Chạy trên esp-idf
* v4.2
## Sử dụng điện trở kéo lên cho các chân của thẻ sd 
* MISO 2
* MOSI 15
* CLK  14
* CS   GPIO_NUM_13
## Khi bắt đầu chạy màn hình sẽ đen vài giây để tải dữ liệu cho oled
* Chạy thử: https://youtube.com/shorts/p5b11d6myJc?feature=share
![IMG_2520](https://github.com/td2510/Mp3_Music_Player_On_Esp32/assets/111385453/ef743073-ae10-40ba-9718-bb2257e6bddf)
