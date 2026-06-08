// step4_read_all.c — 全行読む
// fscanf の戻り値 = 読めた変数の個数
// 3個読めなくなったらループ終了（ファイルの終端）
#include <stdio.h>

int main(void) {
    FILE *fp = fopen("sensor.csv", "r");
    if (fp == NULL) {
        fprintf(stderr, "ファイルを開けませんでした\n");
        return 1;
    }

    char  location[32];
    int   temperature;
    float humidity;

    while (fscanf(fp, "%31[^,],%d,%f\n", location, &temperature, &humidity) == 3) {
        printf("%s: %d°C / %.0f%%\n", location, temperature, humidity);
    }

    fclose(fp);
    fp = NULL;
    return 0;
}
