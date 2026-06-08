/*
 * ex_read.c — ★ 基本演習（全員）
 *
 * 目標: ex_write.c で作った mydata.csv を読み込んで表示する
 *
 * 期待される出力例:
 *   名前: 山本周
 *   整数: 42
 *   小数: 3.14
 *
 * 注意: ex_write.c を先に実行して mydata.csv を作っておくこと
 */

#include <stdio.h>

int main(void) {
    FILE *fp = fopen("mydata.csv", "r");

    if (fp == NULL){
        printf("エラー");
        return 1;
    }

    char  name[32];
    int   num;
    float dec;

    fscanf(fp, "%31[^,],%d,%f\n", name, &num, &dec);

    printf("名前: %s\n", name);
    printf("整数: %d\n",  num);
    printf("小数: %.2f\n", dec);

    fclose(fp);
    fp = NULL;
    return 0;
}
