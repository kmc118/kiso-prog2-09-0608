// step3_with_fclose.c — fclose あり（正しい書き方）
#include <stdio.h>

int main(void) {
    FILE *fp = fopen("sensor.csv", "w");
    if (fp == NULL) { return 1; }

    fprintf(fp, "教室,25,60.5\n");
    fprintf(fp, "廊下,22,55.0\n");

    fclose(fp);   // 必ず閉じる
    fp = NULL;

    printf("完了：sensor.csv に書き込みました\n");
    return 0;
}
