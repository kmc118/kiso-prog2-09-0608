// step2_with_null_check.c — NULLチェックあり（正しい書き方）
// クラッシュせず「エラー：ファイルを開けませんでした」と表示される
#include <stdio.h>

int main(void) {
    FILE *fp = fopen("/no_such_dir/sensor.csv", "w");

    if (fp == NULL) {
        fprintf(stderr, "エラー：ファイルを開けませんでした\n");
        return 1;
    }

    fprintf(fp, "教室,25,60.5\n");
    fclose(fp);
    return 0;
}
