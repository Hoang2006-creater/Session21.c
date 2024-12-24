#include <stdio.h>

int main() {
    char chuoi[100];
    printf("Nhap chuoi bat ki : ");
    fgets(chuoi, sizeof(chuoi), stdin); 
    FILE *file = fopen("bt01.txt", "w");
    if (file == NULL) {
        printf("Khong the mo fileghi.\n");
        return 1;
    }
    fprintf(file, "%s", chuoi);
    fclose(file);
    printf("Chuoi duoc ghi vao bt01.txt.\n");

    return 0;
}

