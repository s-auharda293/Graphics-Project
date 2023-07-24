#include <graphics.h>
#include <dos.h>
#include <conio.h>
#include <iostream.h>
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

