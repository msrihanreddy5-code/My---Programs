#include <stdio.h>

int main() {
    FILE *src, *dest;
    int ch;

    src = fopen("source.txt", "r");
    dest = fopen("dest.txt", "w");

    if (src == NULL || dest == NULL) {
        printf("Error opening file");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully");
    return 0;
}
