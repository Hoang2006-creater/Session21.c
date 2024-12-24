#include <stdio.h>

int main() {
    FILE *file;
    char first_char;

    file = fopen("bt01.txt", "r");

    // Kiem tra xem file co mo thanh cong khong
    if (file == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }

    // Doc ky tu dau tien trong file
    first_char = fgetc(file);

    // Kiem tra neu file khong trong
    if (first_char != EOF) {
        printf("Ky tu dau tien trong file la: %c\n", first_char);
    } else {
        printf("File trong!\n");
    }

    // Dong file
    fclose(file);

    return 0;
}

