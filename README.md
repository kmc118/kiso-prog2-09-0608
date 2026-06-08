# 基礎プログラミングII — 第9回 演習（2026-06-08）

**科目:** 基礎プログラミングII　**対象:** 2年生

---

## 手順

### 1. Fork する

画面右上の **「Fork」** ボタンをクリック → 自分のアカウントにリポジトリがコピーされる。

### 2. Clone する

Fork した**自分の**リポジトリのページを開き、緑の「Code」ボタン → URL をコピーして実行：

```bash
git clone https://github.com/自分のユーザー名/kiso-prog2-09-0608.git
cd kiso-prog2-09-0608
```

### 3. ファイルを順に進める

**① デバッグクイズ（まずここから）**
```
debug_quiz.c  ← バグを3つ直してコンパイル・実行する
```

**② デモ（動かして確認するだけ）**
```
step0_no_file.c  → step0_with_file.c
step1_write.c    → step1_append.c
step2_no_null_check.c → step2_with_null_check.c
step3_no_fclose.c → step3_with_fclose.c
step4_read_one.c  → step4_read_all.c → step5_all.c
```

**③ 演習（`/* TODO */` の部分を自分で埋める）**
```
ex_write.c → ex_read.c
```

**④ 発展（余った時間で挑戦）**
```
task1_log.c → task1_count.c → task2_max.c → task3_copy.c
```

### 4. Push する

```bash
git add .
git commit -m "演習完了"
git push origin main
```

### 5. Pull Request を出す → 下の「PR の出し方」を参照

---

## PR の出し方（丁寧に読むこと）

### ① GitHub で自分の Fork ページを開く

`https://github.com/自分のユーザー名/kiso-prog2-09-0608`

### ② 「Contribute」→「Open pull request」をクリック

ページ上部に黄色いバナーか「Contribute」ボタンが表示される。

### ③ 設定を確認する（ここが間違いやすい）

以下の4か所を必ず確認すること：

```
base repository: yamashu00/kiso-prog2-09-0608   ← やましゅうのリポジトリ
base:            main                            ← main ブランチ
head repository: 自分のユーザー名/kiso-prog2-09-0608  ← 自分のリポジトリ
compare:         main                            ← main ブランチ
```

**よくある間違い：**
- `base repository` が自分のリポジトリになっている → `yamashu00/kiso-prog2-09-0608` に変える
- `base repository` の選択肢が出ない場合 → 「compare across forks」というリンクをクリックすると選べる

### ④ タイトルを自分の名前にする

```
タイトル欄: 山本周    ← 自分の名前（フルネーム）を入力
```

### ⑤「Create pull request」をクリック

緑のボタンを押して完了。自分のPRが `yamashu00/kiso-prog2-09-0608` の「Pull requests」タブに表示されれば提出完了。

---

## ファイル一覧

| ファイル | 内容 |
|---------|------|
| `debug_quiz.c` | デバッグクイズ（バグを3つ直す） |
| `step0_no_file.c` | デモ：ファイルなし（常に1回目） |
| `step0_with_file.c` | デモ：ファイルあり（実行ごとに増える） |
| `step1_write.c` | 書き込み（NULLチェックなし） |
| `step1_append.c` | 追記モード "a" |
| `step2_no_null_check.c` | NULLチェックなし → クラッシュ |
| `step2_with_null_check.c` | NULLチェックあり → 正しい |
| `step3_no_fclose.c` | fclose なし |
| `step3_with_fclose.c` | fclose あり → 正しい |
| `step4_read_one.c` | 1行だけ読む |
| `step4_read_all.c` | 全行読む（ループ） |
| `step5_all.c` | 書いて・読んで・確認（まとめ） |
| `ex_write.c` | ★ 演習：CSVに書く（TODO あり） |
| `ex_read.c` | ★ 演習：CSVを読む（TODO あり） |
| `task1_log.c` | ★★ 発展：追記ログ |
| `task1_count.c` | ★★ 発展：行数カウント |
| `task2_max.c` | ★★★ 発展：最高気温を探す |
| `task3_copy.c` | ★★★★ 発展：ファイルコピー |

---

## コンパイルと実行（例）

```bash
gcc debug_quiz.c -o debug_quiz
./debug_quiz
```

---

## printf / fprintf のフォーマット指定子

| 指定子 | 対応する型 | 意味 | 覚え方 |
|--------|----------|------|--------|
| `%s` | `char[]` / `char *` | 文字列 | **S**tring |
| `%d` | `int` | 10進整数 | **D**ecimal |
| `%c` | `char` | 1文字 | **C**haracter |
| `%f` | `float` / `double` | 実数 | **F**loating point |

```c
printf("%s は %d°C、湿度 %.1f%%\n", "教室", 25, 60.5);
//      %s       %d         %f
//       ↑       ↑           ↑
//      char[]  int         float
```

