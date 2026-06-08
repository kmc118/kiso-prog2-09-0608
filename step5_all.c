// step5_all.c — 書いて・読んで・確認する（まとめ）
#include <stdio.h>

int main(void) {
    const char *filename = "sensor.csv";

    // ── 書き込み ──────────────────────────────────
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        fprintf(stderr, "書き込み用ファイルを開けませんでした\n");
        return 1;
    }

    fprintf(fp, "教室,%d,%.1f\n", 25, 60.5);
    fprintf(fp, "廊下,%d,%.1f\n", 22, 55.0);
    fprintf(fp, "食堂,%d,%.1f\n", 28, 70.0);

    fclose(fp);
    fp = NULL;
    printf("書き込み完了\n");

    // ── 読み込み ──────────────────────────────────
    fp = fopen(filename, "r");
    if (fp == NULL) {
        fprintf(stderr, "読み込み用ファイルを開けませんでした\n");
        return 1;
    }

    char  location[32];
    int   temperature;
    float humidity;

    printf("=== 読み込み結果 ===\n");
    while (fscanf(fp, "%31[^,],%d,%f\n", location, &temperature, &humidity) == 3) {
        printf("%s: %d°C / %.0f%%\n", location, temperature, humidity);
    }

    fclose(fp);
    fp = NULL;
    return 0;
}
