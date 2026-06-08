// step1_append.c — "a" モードで追記する
// step1_write.c の "w" を "a" に変えただけ
// 何度実行しても末尾に1行ずつ追加される
#include <stdio.h>

int main(void) {
    FILE *fp = fopen("sensor.csv", "a");   // "w" → "a"

    fprintf(fp, "体育館,20,50.0\n");

    fclose(fp);
    printf("追記しました\n");
    return 0;
}
