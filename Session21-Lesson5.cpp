#include <stdio.h>
#include <stdlib.h>

int main() {
    // Ten file
    const char *file_name = "bt05.txt";

    // Nguoi dung nhap so dong
    int num_lines;
    printf("Nhap so dong can ghi vao file: ");
    scanf("%d", &num_lines);
    getchar(); // Loai bo ky tu newline con lai trong bo dem

    // Mo file de ghi
    FILE *file = fopen(file_name, "w");
    if (file == NULL) {
        printf("Khong the mo file de ghi.\n");
        return 1;
    }

    // Ghi noi dung tung dong vao file
    for (int i = 0; i < num_lines; i++) {
        char line[256];
        printf("Nhap noi dung dong thu %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fprintf(file, "%s", line);
    }

    fclose(file);

    // Doc va in noi dung file ra man hinh
    printf("\nNoi dung file:\n");
    file = fopen(file_name, "r");
    if (file == NULL) {
        printf("Khong the mo file de doc.\n");
        return 1;
    }

    char line[256];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}

