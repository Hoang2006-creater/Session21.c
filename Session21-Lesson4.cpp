#include <stdio.h>
#include<string.h> 
int main() {
    char chuoi[100];  

  
    FILE *file = fopen("bt01.txt", "r");

    if (file == NULL) {
        printf("Khong the mo file de doc.\n");
        return 1;
    }

    if (fgets(chuoi, sizeof(chuoi), file) != NULL) {
        chuoi[strcspn(chuoi, "\n")] = 0;
        
        printf(" Dong dau tien trong file");
    } else {
        printf(" Khong doc duoc"); 
    }

    fclose(file);

    return 0;
}

