#include <stdio.h>
#include <stdlib.h>

int main() {
    // Ten file nguon va dich
    char source_file[256];
    char destination_file[256];

    // Nhap ten file nguon va file dich tu nguoi dung
    printf("Nhap ten file nguon: ");
    scanf("%255s", source_file);
    printf("Nhap ten file dich: ");
    scanf("%255s", destination_file);

    // Mo file nguon de doc
    FILE *source = fopen(source_file, "r");
    if (source == NULL) {
        printf("Khong the mo file %s de doc.\n", source_file);
        return 1;
    }

    // Mo file dich de ghi
    FILE *destination = fopen(destination_file, "w");
    if (destination == NULL) {
        printf("Khong the mo file %s de ghi.\n", destination_file);
        fclose(source);
        return 1;
    }

    // Sao chep noi dung tu file nguon sang file dich
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), source) != NULL) {
        fputs(buffer, destination);
    }

    printf("Da sao chep noi dung tu %s sang %s.\n", source_file, destination_file);

    // Dong file
    fclose(source);
    fclose(destination);

    return 0;
}

