/*
 * debug_quiz.c — デバッグクイズ（授業冒頭）
 *
 * このコードには3つのバグがあります。
 * それぞれ何が問題か考えて、直してからコンパイル・実行してください。
 *
 * 【手順】
 *   1. コードを読んでバグを探す（まずコンパイルせずに考える）
 *   2. コンパイル: gcc debug_quiz.c -o debug_quiz
 *   3. エラーメッセージを確認する
 *   4. バグを直して、もう一度コンパイル・実行する
 *
 * 【期待される出力】
 *   場所: 教室
 *   気温: 25°C
 *   湿度: 60.5%
 */

#include <stdio.h>

int main(void) {
    int   temperature = 25;
    float humidity    = 60.5;
    char  location[]  = "教室";

    printf("場所: %s\n",   location);      // バグ①
    printf("気温: %d°C\n", temperature);   // バグ②
    printf("湿度: %f%%\n", humidity);      // バグ③

    return 0;
}
