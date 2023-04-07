#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024
#define KEY 0x1F

void encrypt_file(const char* filename);
void decrypt_file(const char* filename);

int main() {
    const char* filename = "test.txt";
    encrypt_file(filename);
    decrypt_file("encrypted.bin");
    return 0;
}

void encrypt_file(const char* filename) {
    FILE* fp_in = fopen(filename, "rb");
    if (fp_in == NULL) {
        printf("Error: could not open file %s\n", filename);
        exit(1);
    }

    FILE* fp_out = fopen("encrypted.bin", "wb");
    if (fp_out == NULL) {
        printf("Error: could not create output file\n");
        fclose(fp_in);
        exit(1);
    }

    unsigned char buffer[BUFFER_SIZE];
    size_t bytes_read;
    while ((bytes_read = fread(buffer, sizeof(unsigned char), BUFFER_SIZE, fp_in)) > 0) {
        for (int i = 0; i < bytes_read; i++) {
            buffer[i] ^= KEY;
        }
        fwrite(buffer, sizeof(unsigned char), bytes_read, fp_out);
    }

    fclose(fp_in);
    fclose(fp_out);
}

void decrypt_file(const char* filename) {
    FILE* fp_in = fopen(filename, "rb");
    if (fp_in == NULL) {
        printf("Error: could not open file %s\n", filename);
        exit(1);
    }

    FILE* fp_out = fopen("decrypted.txt", "wb");
    if (fp_out == NULL) {
        printf("Error: could not create output file\n");
        fclose(fp_in);
        exit(1);
    }

    unsigned char buffer[BUFFER_SIZE];
    size_t bytes_read;
    while ((bytes_read = fread(buffer, sizeof(unsigned char), BUFFER_SIZE, fp_in)) > 0) {
        for (int i = 0; i < bytes_read; i++) {
            buffer[i] ^= KEY;
        }
        fwrite(buffer, sizeof(unsigned char), bytes_read, fp_out);
    }

    fclose(fp_in);
    fclose(fp_out);
}