#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source, *destination;
    char c;

    // Open source file in read mode
    source = fopen("source.txt", "r");
    if (source == NULL) {
        printf("Could not open source file\n");
        exit(1);
    }

    // Open destination file in write mode
    destination = fopen("destination.txt", "w");
    if (destination == NULL) {
        printf("Could not open destination file\n");
        exit(1);
    }

    // Copy contents from source to destination
    while ((c = fgetc(source)) != EOF) {
        fputc(c, destination);
    }

    // Close files
    fclose(source);
    fclose(destination);

    printf("File copied successfully\n");
    return 0;
}

