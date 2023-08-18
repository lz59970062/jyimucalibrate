## Project Setup 
a serial port transmission program for use the  upper-computer to calibrate the JY serial IMU 

## key steps

make sure your esp32 board are connecting well with your jyimu,and and spcific the esp32 module like below
'''
[env:esp32-s3-devkitc-1]
platform = espressif32
board = esp32-s3-devkitc-1

'''
if not change this in the ini file 

make sure you config the tx/rx and initialized them 

## Additional info
This project uses platfomio if you have problem in setting up the env ,try to use this pack ,this have full tool-chain and package for esp32
link：https://pan.baidu.com/s/1tAoVEFcYVSH87ARoisvW-w 
t91w 

 