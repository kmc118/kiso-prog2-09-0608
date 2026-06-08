/*
 * task2_max.c — ★★★ 発展2（最高気温を探す）
 *
 * 目標: sensor.csv を読んで、気温が一番高い場所と気温を表示する
 *
 * sensor.csv の中身（手動で作成すること）:
 *   教室,25,60.5
 *   廊下,22,55.0
 *   食堂,28,70.0
 *
 * 期待される出力:
 *   最高気温は 28°C（食堂）
 *
 * ヒント: ループの中で「今の値が max_temp より大きければ更新する」
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *fp = fopen("sensor.csv", "r");

    if (fp == NULL){
        printf("エラー");
        return 1;
        }

    char  location[32];
    char  max_location[32] = "";
    int   temp;
    float hum;
    int   max_temp = -999;   // 最初は小さな値で初期化

    while (fscanf(fp, "%31[^,],%d, %f\n", location, &temp, &hum) == 3) {
        if (temp > max_temp){
            max_temp = temp;
            strcpy(max_location, location);
        }
    }

    /* TODO: fscanf のループで全行読む
     *       各行で temp > max_temp なら max_temp と max_location を更新する */

    fclose(fp);
    fp = NULL;

    printf("最高気温は %d°C（%s）\n", max_temp, max_location);
    return 0;
}

/*
 * チャレンジ: 最低気温も同時に表示できるか試してみよう
 *   int min_temp = 999;  などで初期化して同じように更新する
 */
