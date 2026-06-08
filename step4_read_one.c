// step4_read_one.c — 1行だけ読む
// 先に step3_with_fclose を実行して sensor.csv を作っておくこと
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

    // CSV の1行目だけ読む
    fscanf(fp, "%31[^,],%d,%f\n", location, &temperature, &humidity);

    printf("場所: %s\n", location);
    printf("気温: %d°C\n", temperature);
    printf("湿度: %.1f%%\n", humidity);

    fclose(fp);
    fp = NULL;
    return 0;
}
