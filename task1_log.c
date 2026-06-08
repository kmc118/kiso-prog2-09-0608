/*
 * task1_log.c — ★★ 発展1（追記ログ）
 *
 * 目標: 実行するたびに log.csv に1行追記するプログラムを作る
 *
 * 手順:
 *   1. このプログラムを完成させてコンパイルする
 *   2. 5回実行する
 *   3. log.csv を開いて、5行増えているか確認する
 *   4. task1_count.c で行数を数える
 *
 * ヒント: 追記には "a" モードを使う
 */

#include <stdio.h>

int main(void) {
    FILE *fp = fopen("log.csv", "a");

    if (fp == NULL){
        printf("エラー");
        return 1;
    }

    fprintf(fp, "教室, 25, 60.5\n");

    fclose(fp);

    printf("追記しました\n");
    return 0;
}
