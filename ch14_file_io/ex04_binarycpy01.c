// 바이너리 파일 복사
#include <stdio.h>

int main(int argc, char* argv[])
{
    FILE *src = NULL, *dst = NULL;
    char buffer[4096] = { 0 };

    src = fopen(argv[1], "rb");
    dst = fopen(argv[2], "wb");
    if (src == NULL || dst == NULL) return 1;

    // file 크기 계산
    fseek(src, 0, SEEK_END);
    size_t total_size = ftell(src);
    fseek(src, 0, SEEK_SET);

    size_t now_size = 0;
    size_t bytes_read = 0;
    while ((bytes_read = fread(buffer, 1, 4096, src)) > 0) {
        fwrite(buffer, 1, bytes_read, dst);

        now_size += bytes_read;
        printf("File Copy, %02.2lf%% done. \r",
            100.0 * now_size / total_size);
    }
    
    puts("File Copy, 100.00% done.");

    fclose(src);
    fclose(dst);

    return 0;
}