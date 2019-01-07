# openFrameworksの映像を動画にする
と書いてありますが、実際は連続した画像を出力します。

## 動画にするまでの流れ
動画は画像の連続なので、openFrameworksから1フレームごとに画像を出力して、1本の動画にまとめます。

1. https://github.com/umetaman/of_frame_exporter を参考に、プログラムを追記する。
2. Visual Studioでビルドして、プログラムを起動する。
3. 自動的に/bin/dataに連番の画像が保存されていく。
4. 連番の画像をPremiereProか何か（動画編集ソフトウェア）で、1本の動画を作成する。
