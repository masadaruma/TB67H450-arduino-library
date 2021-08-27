# TB67H450 library

This is library for TB67H450

# Usage(English)
First, create an instance of the class in the global domain
`TB67H450 motor(2,3,4)`
The first argument is the IN1 of the TB67H450, the second argument is the IN2 of the TB67H450,
and the third argument is the number of the pin connected to the VREF of the TB67H450.
If you do not specify the third argument, the motor speed will always be maximum.

To rotate motor forward and reverse, use nomal() and reverse().

`motor.nomal(150)` `motor.reverse(150)`
The first argument is the speed of rotation of the motor from 0 to 255. 
If nothing is specified, it will automatically be 255.

To stop rotation of motor, use stop().
`motor.stop()`

To take brake ,use brake();
`motor.brake()`


# 使用方法(日本語)
最初に、グローバル領域でインスタンスを作成します。
`TB67H450 motor(2,3,4)`
第一引数にはTB67H450のIN1,第二引数も同様にIN2を接続したピンを指定します。第三引数はTB67H450のVREFピンに接続したピンを指定します。
第三引数を省略した場合、モーターは常時定速で回転します。

モーターを正転、逆転させるには、nomal()とreverse()を使用します。
`motor.nomal(150)` `motor.reverse(150)`
第一引数にはモーターの速度を0~255まで指定します。省略された場合は255となります。

モーターを停止するには stop()を利用します。
`motor.stop()`
後述のbrake();とは異なり、モーターにブレーキが掛かるわけではない点に留意してください。

モーターにブレーキをかけるにはbrake();を使用します。
`motor.brake()`
モーターにブレーキをかけます。
