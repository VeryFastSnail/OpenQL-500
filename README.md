# OpenQL-500
Brother-QL 500 label printer sensor bypass

This repo is for users that have Brother QL-500 (or even QL-550) label printer and want to make glitch printer to print without expensive labels.


# Idea hehind this project
I had to get label printer for my business, but didn't want to pay premium for brother labels. Thats why I got an idea to trick printer into thinking it had genuine paper inside. I did some research and found that it has opto-sensor, tricked micro processor into thinking that sensor reads marks on the back of labels.


# Simple or efficient?

There is more then enaugh valid tries about this printer:
1. https://www.youtube.com/watch?v=A7fYWOQu6VI
2. https://hackaday.com/2012/07/13/hacking-a-brother-thermal-printer-to-use-non-oem-continuous-rolls/

But my goal wa to keep it's apearence non disturbt, and avoid any hard to controll variables (like paper guide in Dan Mary Herlihy youtube video)

https://onedrive.live.com/?authkey=%21ANrtM77%2D6Xwcs4Y&cid=3816C66A7D7D18AA&id=3816C66A7D7D18AA%2123435&parId=3816C66A7D7D18AA%21105&o=OneUp (Credit to Dan Mary Herlihy)

I tried paper guide method and it worked, but with not so reliable results, paper ofter get jamed.

# sensor location

Ql-500 and QL-550 has its sensors here:

![Sensor Location](https://i.imgur.com/9eJs9pu.png "Sensor Location")

![Sensor Pinout](https://i.imgur.com/UY6USy4.jpg "Sensor Pinout")

![Circuit Diagram](https://i.imgur.com/SF7QrjC.png "https://i.imgur.com/SF7QrjC.png")

# Hardware

I used ATTiny13a for this project, really simple begginer friendly circuit to trick sensor.

# Additional info and resources

Compile code, upload to ATTiny13a anbd have a nice day printing on any paper (even works on receipt paper too!)


Very usefull repair manual with additional info about all sensors and comunication between them.

https://elektrotanya.com/brother_ql-500_550.pdf/download.html
