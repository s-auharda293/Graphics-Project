#include <graphics.h>
#include <dos.h>
#include <conio.h>
#include <string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
 {
	int gdriver = DETECT, gmode;
	initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
	int choice;

int style,midx,midy;
midx = getmaxx() / 2;
midy = getmaxy() / 2;
sound(400);
delay(50);
nosound();
     for(int i=0;i<50;i++){
        settextstyle(3,HORIZ_DIR,4);
        outtextxy(80,150,"A rocket is going to launch in...");
        settextstyle(3,HORIZ_DIR,10);
        outtextxy(250,200,"3");
        setcolor(RED);
        delay(50);
        cleardevice();
    }
    sound(500);
    delay(50);
    nosound();

 for(int j=0;j<30;j++){
        settextstyle(3,HORIZ_DIR,4);
        outtextxy(80,150,"A rocket is going to launch in...");
        settextstyle(3,HORIZ_DIR,10);
        outtextxy(250,200,"2");
        setcolor(YELLOW);
        delay(70);
        cleardevice();
    }
    sound(600);
    delay(50);
    nosound();

 for(int k=0;k<20;k++){
        settextstyle(3,HORIZ_DIR,4);
        outtextxy(80,150,"A rocket is going to launch in...");
        settextstyle(3,HORIZ_DIR,10);
        outtextxy(250,200,"1");
        setcolor(GREEN);
        delay(70);
        cleardevice();
    }

 do{
     sound(1000);
    delay(80);
    sound(2000);
    delay(120);
    sound(3000);
    delay(150);
    nosound();

	cleardevice();
	setcolor(LIGHTGREEN);
	settextjustify(CENTER_TEXT, CENTER_TEXT);
	style = DEFAULT_FONT;
	settextstyle(style, HORIZ_DIR, 8);
	outtextxy(midx, midy,"GO!!!");
	delay(1800);
	cleardevice();


	for (i=0; i<400; i++) {
		setcolor(WHITE);
		line(300,300-i,350,300-i);  // upper horizon
		line(300,300-i,300,400-i);  // left vertical
		line(270,400-i,380,400-i);  // bottom horizon
		line(350,300-i,350,400-i);  // right vertical
		line(300,350-i,270,400-i);  // left slant
		line(350,350-i,380,400-i);  // right slant
		line(300,300-i,325,260-i);  // top left slant
		line(325,260-i,350,300-i);  // top right slant
	// LAUNCHING SMOKE
		if (i==0) {
			delay(1000);
			for ( int k=0; k<70; k++) {
				delay(100);
				setcolor(DARKGRAY);
				circle(250,400,k);
				circle(270,400,k);
				setcolor(LIGHTGRAY);
				circle(285,400,k+10);
				circle(318,400,k+30);
				circle(335,400,k+30);
				circle(370,400,k+10);
				setcolor(DARKGRAY);
				circle(390,400,k);
				circle(410,400,k);
			}
		}
//stars
    circle(123, -456+i, 1);
    circle(256, -278+i, 1);
    circle(640, -390+i, 1);
    circle(512, -100+i, 1);
    circle(380, -290+i, 1);
    circle(312, -239+i, 1);
    circle(200, -160+i, 1);
    circle(480, -321+i, 1);
    circle(410, -70+i, 1);
    circle(50, -140+i, 1);
    circle(123, 344+i, 1);
    circle(256, 122+i, 1);
    circle(640, 10+i, 1);
    circle(512, 300+i, 1);
    circle(380, 110+i, 1);
    circle(312, 161+i, 1);
    circle(200, 240+i, 1);
    circle(480, 79+i, 1);
    circle(410, 300+i, 1);
    circle(50, 270+i, 1);
    circle(345, 200+i, 1);
    circle(520, 230+i, 1);
    circle(176, 301+i, 1);
    circle(290, 190+i, 1);
    circle(640, 10+i, 1);
    circle(30, 390+i, 1);
    circle(256, 122+i, 1);
    circle(500, 220+i, 1);
    circle(400, 250+i, 1);
    circle(112, 201+i, 1);
    circle(640, 10+i, 1);
    circle(510, 90+i, 1);
    circle(590, 210+i, 1);
    circle(320, 270+i, 1);
    circle(260, 50+i, 1);
    circle(390, 90+i, 1);
    circle(500, 50+i, 1);
    circle(150, 320+i, 1);
    circle(450, 50+i, 1);
    circle(640, 10+i, 1);
    circle(470, 100+i, 1);
    circle(380, 250+i, 1);
    circle(190, 110+i, 1);
    circle(296, 251+i, 1);
    circle(390, 290+i, 1);
    circle(120, 390+i, 1);
    circle(310, 340+i, 1);
    circle(250, 270+i, 1);
    circle(90, 260+i, 1);
    circle(410, 90+i, 1);
    circle(640, 10+i, 1);
    circle(160, 210+i, 1);
    circle(420, 50+i, 1);
    circle(350, 260+i, 1);
    circle(480, 210+i, 1);
    circle(256, 122+i, 1);
    circle(200, 40+i, 1);
    circle(312, 250+i, 1);
    circle(176, 350+i, 1);
    circle(290, 50+i, 1);
    circle(150, -80+i, 1);
    circle(450, -160+i, 1);
    circle(640, -390+i, 1);
    circle(470, -290+i, 1);
    circle(380, -90+i, 1);
    circle(190, -240+i, 1);
    circle(296, -296+i, 1);
    circle(390, -320+i, 1);
    circle(120, -100+i, 1);
    circle(310, -280+i, 1);
    circle(250, -390+i, 1);
    circle(90, -130+i, 1);
    circle(410, -10+i, 1);
    circle(640, -390+i, 1);
    circle(160, -320+i, 1);
    circle(420, -190+i, 1);
    circle(350, -260+i, 1);
    circle(480, -310+i, 1);
    circle(256, -278+i, 1);
    circle(200, -100+i, 1);
    circle(312, -250+i, 1);
    circle(176, -150+i, 1);
    circle(290, -350+i, 1);
    circle(640, -390+i, 1);
    circle(30, -210+i, 1);
    circle(250, -270+i, 1);
    circle(390, -390+i, 1);
    circle(112, -130+i, 1);
    circle(640, -390+i, 1);
    circle(510, -250+i, 1);
    circle(590, -310+i, 1);
    circle(320, -90+i, 1);
    circle(260, -140+i, 1);
    circle(390, -120+i, 1);
    circle(500, -100+i, 1);
    circle(150, -200+i, 1);
    circle(450, -90+i, 1);
    circle(640, -390+i, 1);
    circle(470, -120+i, 1);
    circle(380, -180+i, 1);
    circle(190, -90+i, 1);
    circle(296, -250+i, 1);
    circle(390, -210+i, 1);
    circle(120, -110+i, 1);
    circle(310, -160+i, 1);
    circle(250, -230+i, 1);
    circle(90, -240+i, 1);
    circle(410, -310+i, 1);
    circle(640, -390+i, 1);
    circle(160, -180+i, 1);
    circle(420, -70+i, 1);
    circle(350, -130+i, 1);
    circle(480, -160+i, 1);
    circle(256, -78+i,1);
    circle(320, 20+i, 1);
    circle(280, 70+i, 1);
    circle(550, -10+i, 1);
    circle(110, 60+i, 1);
    circle(490, -20+i, 1);
    circle(430, -30+i, 1);
    circle(240, 50+i, 1);
    circle(600, -30+i, 1);
    circle(370, 40+i, 1);
    circle(180, 30+i, 1);
    circle(520, -40+i, 1);
    circle(330, -20+i, 1);
    circle(280, -50+i, 1);
    circle(360, -40+i, 1);
    circle(400, -30+i, 1);
    circle(560, -50+i, 1);
    circle(60, 60+i, 1);
    circle(470, -10+i, 1);
    circle(110, 80+i, 1);
    circle(390, -30+i, 1);
    circle(130, 60+i, 1);
    circle(200, 80+i, 1);
    circle(340, 20+i, 1);
    circle(70, 70+i, 1);
    circle(330, -20+i, 1);
    circle(260, 60+i, 1);
    circle(130, -10+i, 1);
    circle(390, -20+i, 1);
    circle(540, -30+i, 1);
    circle(200, 20+i, 1);
    circle(300, 10+i, 1);
    circle(410, -20+i, 1);
    circle(250, 80+i, 1);
    circle(160, 40+i, 1);
    circle(360, 60+i, 1);
    circle(290, 0+i, 1);
    circle(460, 20+i, 1);
    circle(190, 60+i, 1);
    circle(250, -10+i, 1);
    circle(520, -40+i, 1);
    circle(420, 30+i, 1);
    circle(350, 0+i, 1);
    circle(450, -50+i, 1);
    circle(120, 30+i, 1);
    circle(550, -30+i, 1);
    circle(90, 0+i, 1);
    circle(330, 30+i, 1);
    circle(400, 60+i, 1);
    circle(550, 40+i, 1);
    circle(150, 50+i, 1);

		setcolor(BLUE);
		circle(250,300+i,400-i);
		circle(250,300+i,399-i);
		circle(250,300+i,398-i);
		circle(250,300+i,397-i);
		circle(250,300+i,396-i);
		circle(250,300+i,395-i);
		circle(250,300+i,394-i);
		circle(250,300+i,393-i);
		circle(250,300+i,392-i);
		circle(250,300+i,391-i);
		circle(250,300+i,390-i);
		circle(250,300+i,389-i);
		circle(250,300+i,388-i);

		setcolor(CYAN);
		circle(249,300+i,400-i);
		circle(249,300+i,399-i);
		circle(249,300+i,398-i);
		circle(249,300+i,397-i);
		circle(249,300+i,396-i);
		circle(249,300+i,395-i);
		circle(249,300+i,394-i);
		circle(249,300+i,393-i);
		circle(249,300+i,392-i);
		circle(249,300+i,391-i);
		circle(249,300+i,390-i);
		circle(249,300+i,389-i);
		circle(249,300+i,388-i);

//moon
setcolor(WHITE);
circle(0, -200+i, 120);
circle(0, -200+i, 120);
circle(0, -200+i, 120);
circle(0, -200+i, 120);
circle(0, -200+i, 120);
circle(0, -200+i, 120);
circle(0, -200+i, 120);
circle(0, -200+i, 120);
circle(0, -200+i, 120);
circle(0, -200+i, 120);
circle(0, -200+i, 120);
circle(0, -200+i, 120);
circle(0, -200+i, 120);

circle(0, -200+i, 121);
circle(0, -200+i, 121);
circle(0, -200+i, 121);
circle(0, -200+i, 121);
circle(0, -200+i, 121);
circle(0, -200+i, 121);
circle(0, -200+i, 121);
circle(0, -200+i, 121);
circle(0, -200+i, 121);
circle(0, -200+i, 121);
circle(0, -200+i, 121);
circle(0, -200+i, 121);
circle(0, -200+i, 121);

circle(0, -200+i, 122);
circle(0, -200+i, 122);
circle(0, -200+i, 122);
circle(0, -200+i, 122);
circle(0, -200+i, 122);
circle(0, -200+i, 122);
circle(0, -200+i, 122);
circle(0, -200+i, 122);
circle(0, -200+i, 122);
circle(0, -200+i, 122);
circle(0, -200+i, 122);
circle(0, -200+i, 122);
circle(0, -200+i, 122);

circle(0, -200+i, 123);
circle(0, -200+i, 123);
circle(0, -200+i, 123);
circle(0, -200+i, 123);
circle(0, -200+i, 123);
circle(0, -200+i, 123);
circle(0, -200+i, 123);
circle(0, -200+i, 123);
circle(0, -200+i, 123);
circle(0, -200+i, 123);
circle(0, -200+i, 123);
circle(0, -200+i, 123);
circle(0, -200+i, 123);

circle(0, -200+i, 124);
circle(0, -200+i, 124);
circle(0, -200+i, 124);
circle(0, -200+i, 124);
circle(0, -200+i, 124);
circle(0, -200+i, 124);
circle(0, -200+i, 124);
circle(0, -200+i, 124);
circle(0, -200+i, 124);
circle(0, -200+i, 124);
circle(0, -200+i, 124);
circle(0, -200+i, 124);
circle(0, -200+i, 124);

circle(0, -200+i, 125);
circle(0, -200+i, 125);
circle(0, -200+i, 125);
circle(0, -200+i, 125);
circle(0, -200+i, 125);
circle(0, -200+i, 125);
circle(0, -200+i, 125);
circle(0, -200+i, 125);
circle(0, -200+i, 125);
circle(0, -200+i, 125);
circle(0, -200+i, 125);
circle(0, -200+i, 125);
circle(0, -200+i, 125);

circle(0, -200+i, 126);
circle(0, -200+i, 126);
circle(0, -200+i, 126);
circle(0, -200+i, 126);
circle(0, -200+i, 126);
circle(0, -200+i, 126);
circle(0, -200+i, 126);
circle(0, -200+i, 126);
circle(0, -200+i, 126);
circle(0, -200+i, 126);
circle(0, -200+i, 126);
circle(0, -200+i, 126);
circle(0, -200+i, 126);

circle(0, -200+i, 127);
circle(0, -200+i, 127);
circle(0, -200+i, 127);
circle(0, -200+i, 127);
circle(0, -200+i, 127);
circle(0, -200+i, 127);
circle(0, -200+i, 127);
circle(0, -200+i, 127);
circle(0, -200+i, 127);
circle(0, -200+i, 127);
circle(0, -200+i, 127);
circle(0, -200+i, 127);
circle(0, -200+i, 127);

circle(0, -200+i, 128);
circle(0, -200+i, 128);
circle(0, -200+i, 128);
circle(0, -200+i, 128);
circle(0, -200+i, 128);
circle(0, -200+i, 128);
circle(0, -200+i, 128);
circle(0, -200+i, 128);
circle(0, -200+i, 128);
circle(0, -200+i, 128);
circle(0, -200+i, 128);
circle(0, -200+i, 128);
circle(0, -200+i, 128);

circle(0, -200+i, 129);
circle(0, -200+i, 129);
circle(0, -200+i, 129);
circle(0, -200+i, 129);
circle(0, -200+i, 129);
circle(0, -200+i, 129);
circle(0, -200+i, 129);
circle(0, -200+i, 129);
circle(0, -200+i, 129);
circle(0, -200+i, 129);
circle(0, -200+i, 129);
circle(0, -200+i, 129);
circle(0, -200+i, 129);

circle(0, -200+i, 130);
circle(0, -200+i, 130);
circle(0, -200+i, 130);
circle(0, -200+i, 130);
circle(0, -200+i, 130);
circle(0, -200+i, 130);
circle(0, -200+i, 130);
circle(0, -200+i, 130);
circle(0, -200+i, 130);
circle(0, -200+i, 130);
circle(0, -200+i, 130);
circle(0, -200+i, 130);
circle(0, -200+i, 130);

		if (i%2==0) {
			for ( int v=10; v>=0; v--) {
				setcolor(YELLOW);
				circle(318,400-i,v);
				circle(335,400-i,v);
			}
			setcolor(LIGHTRED);
			circle(325,260-i,5);
			circle(325,260-i,4);
			circle(325,260-i,3);
			circle(325,260-i,2);
			circle(325,260-i,1);
		}
		else {
			setcolor(YELLOW);
			for ( int w=10; w>=0; w--) {
				circle(300,400-i,w);
				circle(325,400-i,w);
				circle(350,400-i,w);
			}
		}
		delay(5);
		cleardevice();
	}
	  for(i=0;i<30;i++){

	settextstyle(8,HORIZ_DIR,9);
       outtextxy(350,150,"Thank you!");
      delay(50);
      cleardevice();
    }

	  // Set word durations
  int thankDuration = 200;
  int youDuration = 500;

  // Set tone frequencies
  int thankFreq = 900;
  int youFreq = 700;

  // Play "Thank"
  sound(thankFreq);
  delay(thankDuration);

  // Brief pause between words
  delay(100);

  // Play "You"
  sound(youFreq);
  delay(youDuration);

  // End sound
  nosound();
cleardevice();
printf("Enter 1 to restart simulation and 0 to exit:");
scanf("%d",&choice);
if(choice==0){
cleardevice();
exit(0);
}
}while(choice==1);
	getch();
	closegraph();
	return 0;
}
