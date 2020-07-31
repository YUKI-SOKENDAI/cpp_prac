# Requirement Definition Document (RDD)：要件定義書

## システムの目的
- 目標値を満たすまで、マグネットムーバーを駆動する。
- XPS, POTsを参照し、動かしたときに生じる位置偏差を解消する。

## 要求機能
- 入力値の取得
- ムーバーの現在値の読み取り(LVDT??)
- 偏差と目標値の算出
- ムーバーの目標地点への駆動
- statusの確認

## システム要件
- 

## クラスの設計
- ATF2qmagMoverFBdrive
 - argument
   - magnet name
 - member variable (Public)
   - user input value: x_org, y_org ,roll_org
   - target position: x_tar, y_tar ,roll_tar
   - initial position offset: off_ini_x(x,y,roll), off_ini_y(x,y,roll), off_ini_roll(x,y,roll); besed on measurement
   - position offset: off_x(x,y,roll),off_y(x,y,roll),off_roll(x,y,roll); besed on measurement
   - position deviation: diff_x, diff_y, diff_roll
   - current position: x_now, y_now, roll_now
   - channel array: ch_array[]={mag-ch-name, ch-x, ch-y, ch-roll, ...} ??:NEED CHECK ch list.
 - member variable (Private)
   - channel address array: ch_addrs[strlen(ch_array)]={}
   - magnet channnel name: ch_name_list[]=
 - member function
   - mover_trim()
   - read_input_posi()
   - read_mover_posi()
   - mover_status_check()
   - calc_target_posi()
 - constructor (instance??)
   - initialize member variable
   - create ch-name from magnet name
   - casearch
   - read mover position; call read_mover_posi
 - deconstructor as virtual
   - void

## システムフロー
read_input_posi->mover_status_check->(1)or(2)<br>
(1)Mover stoped. / Mover stoped. But not reaching target position.<br>
  -> read_mover_posi-> calc_target_posi-> mover_trim()-> mover_status_check-> (1)or(2)or(3)<br>
(2)Mover is moving. Do "continue"??<br>
  -> continue-> read_input_posi<br>
(3)Reached target position.<br>
  -> Finish mover movement<br>

※Position calculation<br>
Input posi_org. Then, off_posi=0, diff_posi=0. where posi equals x, y or roll.<br>
-> calculate off_posi up to posi_org: If nothing offset map, ignore this process. off_posi=0.<br>
-> calculate posi_tar: posi_tar = posi_org + off_posi + diff_posi. (diff_posi=0) <br>
-> check mover position and calculate position deviation: diff_posi = posi_tar - posi_now<br>
-> calculate posi_tar: posi_tar = posi_org + off_posi + diff_posi.<br>
-> continue the drive unless satisfying the approval deviation.<br>

## 実装環境
ATF Linux computer??

## テスト方法
とりあえずQD0FFのmoverで試験を行う。
### システムの動作確認
システム自体がちゃんと動作するかを確認する。
### Magnet Moverの位置決め精度の確認
システムを運用してムーバーを動かした際に実際にムーバーがその動きをしているのか確認する。
LKGとNIVELを使用して確認。

## NOTE
- フィードバックをかける上で、LVDTの信頼性を示す必要がある。示せなければFBには使えない。<br>
製品の仕様上どの程度の信頼性を持つか。測定の結果、どの程度の信頼性があったか。
- 測定を基に位置偏差のマップを作成する必要がある。全マグネットに適用する場合、マグネットの台数分測定が必要。
- 測定を迅速に行うためにセンサーの治具が必要。設計して製作は坂入さんに任せる？？
