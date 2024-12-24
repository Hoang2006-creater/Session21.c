#include <stdio.h>

int main() {
    FILE *file;
    char input_str[100];

    // Mo file 'bt01.txt' o che do ghi them (append)
    file = fopen("bt01.txt", "a");

    // Kiem tra xem file co mo thanh cong khong
    if (file == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }

    // Yeu cau nguoi dung nhap vao mot chuoi
    printf("Nhap chuoi de ghi vao file: ");
    fgets(input_str, sizeof(input_str), stdin);  // Doc chuoi tu ban phim

    // Ghi chuoi vao cuoi file
    fprintf(file, "%s", input_str);

    // Dong file
    fclose(file);

    printf("Chuoi da duoc ghi vao file thanh cong.\n");

    return 0;
}

