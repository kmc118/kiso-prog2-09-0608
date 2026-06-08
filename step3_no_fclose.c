// step3_no_fclose.c — fclose なし
// 短いプログラムでは運よく書かれることもあるが、
// 長時間動くプログラム（センサーの記録など）では途中のデータが消える
#include <stdio.h>

int main(void) {
    FILE *fp = fopen("sensor.csv", "w");
    if (fp == NULL) { return 1; }

    fprintf(fp, "教室,25,60.5\n");
    fprintf(fp, "廊下,22,55.0\n");

    // fclose(fp); を書かない！
    return 0;
}
