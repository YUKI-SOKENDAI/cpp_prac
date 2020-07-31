# MagnetMoverFB
This repository for Feedback scripts of Magnet mover installed in ATF2 beamline.

## Descriotion
This program is for driving ATF2 magnet mover within approval position deviation.<br>
Achieve that, I installed feedback system with LVDT installed in magnet mover.<br>
If you don't need the feedback, you can OFF the function.<br>
I also installed position distortion map. according to that, position offsets are calculated.<br>
When the mover's roll is large, position deviation becomes large also. So need position offset up to the asigned position (x,y,roll).<br>
If you don't need the offset, you can also OFF the function.<br>

*** DEMO ***

## TEST results


## Features
- drive mover
- position feedback function

## Requirement
- Linux (version)
- Qt creator - 5.10.1 or 5.12.9
- C++
  - library
  
## Installation
- Cloning this repository to your device.
  ```
  $ git clone https://github.com/YUKI-SOKENDAI/MagnetMoverFB.git
  ```
## Usage

## Note

## Author
* Yuki Abe(abeyuki@post.kek.jp), [SOKENDAI](https://www2.kek.jp/accl/sokendai/) 

## Licence
