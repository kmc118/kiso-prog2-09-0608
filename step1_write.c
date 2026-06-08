// step1_write.c — ファイルに書いてみる
// ※ NULLチェックがない（step2 で直す）
#include <stdio.h>

int main(void) {
    FILE *fp = fopen("sensor.csv", "w");

    fprintf(fp, "教室,25,60.5\n");
    fprintf(fp, "廊下,22,55.0\n");
    fprintf(fp, "食堂,28,70.0\n");

    fclose(fp);
    printf("書き込みが終わりました\n");
    return 0;
}
