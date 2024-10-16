# About
This is the code respository for a falling marbles display, created for Creative Embedded Systems, and written in C++. The design goal of this
project was to create a theme centered around "The Fall", which I did by emulating the random movement of dropping marbles.

Link to blog post with in-depth development process: https://steven-ces-blog.notion.site/Falling-Marbles-Installation-Art-1124dc2df41c810abb80e70484baed92?pvs=4

# Instructions
Take the code in falling_marbles.ino and put it into the Arduino IDE. After connecting your ESP32 LILYGO board to your computer, upload the code/sketch to the board.
After the code is uploaded successfully, the display should have round balls of different colors scattering, slowing down/going off screen, and then a white circle 
filling the screen. After it fully covers the screen, the display loops.

It should look like this: 

![ttgo_display](https://github.com/huangs-nyc/falling-marbles-esp32/blob/9dd9c91e0a2454330561698767850b9a9c17cc93/pictures_gifs/ttgo_display.gif)

Ensure that there is a power source for the ESP32 display: battery, computer, etc.

# Display Installation
1) Once the display is functional and looks like the above, you can attach a battery to the side of the board opposite of the display screen.

<a href="url"><img src="https://github.com/huangs-nyc/falling-marbles-esp32/blob/a68b3388f226019fb707169c2a9eec97c21c5a71/pictures_gifs/battery_board.png" height="400" width="300"></a>

2) Prepare a cardstock envelope big enough to fit the battery and board with a hole for the display and smaller holdes for string, and decorate the way that you want.


<a href="url"><img src="https://github.com/huangs-nyc/falling-marbles-esp32/blob/8175d991538d366b951dc2c3cd182b5d1e919bae/pictures_gifs/envelope.png" height="400" width="300"></a>

3) Tape the board and battery to the envelope, fold it up, and tape it closed.


<a href="url"><img src="https://github.com/huangs-nyc/falling-marbles-esp32/blob/8175d991538d366b951dc2c3cd182b5d1e919bae/pictures_gifs/board_envelope.png" height="300" width="200"></a>
<a href="url"><img src="https://github.com/huangs-nyc/falling-marbles-esp32/blob/8175d991538d366b951dc2c3cd182b5d1e919bae/pictures_gifs/battery_board_envelope.png" height="300" width="200"></a>
<a href="url"><img src="https://github.com/huangs-nyc/falling-marbles-esp32/blob/8175d991538d366b951dc2c3cd182b5d1e919bae/pictures_gifs/wrapped_display.png" height="300" width="200"></a>


4) Tie the string onto the envelope so that it hangs from the screen.


<a href="url"><img src="https://github.com/huangs-nyc/falling-marbles-esp32/blob/967ae242684170d3aaf4f052ab38e6f670dcbf50/pictures_gifs/finished_envelope.png" height="400" width="300"></a>
