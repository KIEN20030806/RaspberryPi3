#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Đường dẫn đến tệp chứa giá trị nhiệt độ của cảm biến DS18B20
#define DS18B20_PATH "/sys/bus/w1/devices/28-564ed44623cd/w1_slave"  // Thay thế xxxxxx bằng địa chỉ của cảm biến DS18B20

// Hàm đọc giá trị nhiệt độ từ cảm biến DS18B20
float read_ds18b20_temperature() {
    FILE *file;
    char buffer[256];
    float temperature = 0.0;

    file = fopen(DS18B20_PATH, "r");
    if (file == NULL) {
        perror("Failed to open DS18B20 file");
        return -1.0;
    }

    // Đọc dữ liệu từ tệp
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        // Tìm chuỗi "t=" trong dữ liệu
        char *pos = strstr(buffer, "t=");
        if (pos != NULL) {
            // Tìm thấy chuỗi "t=", trích xuất giá trị nhiệt độ
            sscanf(pos, "t=%f", &temperature);
            // Chuyển đổi giá trị nhiệt độ thành độ C
            temperature /= 1000.0;
            break;
        }
    }

    fclose(file);
    return temperature;
}

int main() {
    float temperature = read_ds18b20_temperature();
    if (temperature != -1.0) {
        printf("Temperature: %.2f°C\n", temperature);
    }
    return 0;
}