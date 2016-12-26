# Adafruit_8x8_4x2の仕様書
## Now
* TYPEを変更する事で7種類のフォントの確認ができる
  - TYPE=1：アルファベット細文字
  - TYPE=2：アルファベット太文字
  - TYPE=3：ディスプレイ用の数字
  - TYPE=4：ピン表示用の数字
  - TYPE=5：ひらがな
  - TYPE=6：カタカナ
  - TYPE=7：その他の記号文字
* ライブラリを一本に集約&軽量化
  - Adafruit_LEDBackpack.h/.cpp
  - Adafruit_GFX.h/.cpp
  - gfxfont.h
  - glcdfont.c  
  ->
  - Adafruit_LED_New.h/.cpp
## To Do
* ボタンやマトリックス入力でスイッチ切り替えができるように
* Serial通信のReadで手に入れたコマンドで表示を切り替えられるように
