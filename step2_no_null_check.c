// step2_no_null_check.c — NULLチェックなし（クラッシュする）
// 実行すると Segmentation fault が出る
// → これが「NULLチェックなし」の危険性
#include <stdio.h>

int main(void) {
    // 存在しないフォルダを指定する → fopen が NULL を返す
    FILE *fp = fopen("/no_such_dir/sensor.csv", "w");

    // NULLチェックをしない → fp が NULL のままここに来る → クラッシュ
    fprintf(fp, "教室,25,60.5\n");

    fclose(fp);
    return 0;
}
