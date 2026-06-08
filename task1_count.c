/*
 * task1_count.c — ★★ 発展1（行数カウント）
 *
 * 目標: task1_log.c を5回実行した後、log.csv が何行あるか数えて表示する
 *
 * 期待される出力（5回実行後）:
 *   合計 5 行
 */

#include <stdio.h>

int main(void) {
    FILE *fp = fopen("log.csv", "r");

    if (fp == NULL){
        printf("エラー");
        return 1;
    }

    char  location[32];
    int   temp;
    float hum;
    int   lines = 0;

    while (fscanf(fp, "%31[^,],%d,%f\n", location, &temp, &hum) == 3) {
        lines++;
    }

    fclose(fp);
    fp = NULL;

    printf("合計 %d 行\n", lines);
    return 0;
}
