#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
int main()
{
clrscr();
int driver,mode;
driver=DETECT;
initgraph(&driver,&mode,"\\turboc3\\bgi");


	//LEGS
	setcolor(BLUE);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	ellipse(265,410,0,360,20,60);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(265,410,BLUE);

	setcolor(BLUE);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	ellipse(335,410,0,360,20,60);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(335,410,BLUE);

	//FOOT
	setcolor(WHITE);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	circle(265,465,12);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(265,465,WHITE);

	setcolor(WHITE);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	circle(335,465,12);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(335,465,WHITE);

	//HANDS
	setcolor(BLUE);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	ellipse(200,335,0,360,60,20);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(200,335,BLUE);

	setcolor(BLUE);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	ellipse(400,335,0,360,60,20);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(400,335,BLUE);


	//HANDS
	setcolor(WHITE);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	circle(160,335,22);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(160,335,WHITE);

	setcolor(WHITE);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	circle(448,335,22);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(448,335,WHITE);


	//BODY
	setcolor(BLUE);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	ellipse(300,350,0,360,78,98);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(300,350,BLUE);

	setcolor(WHITE);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	ellipse(300,360,0,360,58,68);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(300,360,WHITE);


	//LOCKET
	setcolor(BLUE);
	setlinestyle(SOLID_LINE,6,THICK_WIDTH);
	line(300,370,240,345);
	setcolor(BLUE);
	setlinestyle(SOLID_LINE,6,THICK_WIDTH);
	line(300,370,360,345);


	setcolor(YELLOW);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	circle(300,370,10);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(300,370,YELLOW);

	 //FACE
	setcolor(BLUE);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	circle(300,250,100);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(300,250,BLUE);

	setcolor(WHITE);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	ellipse(300,287,0,360,80,60);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(300,287,WHITE);

	//EYES OUTER BOUNDRY
	setcolor(BLACK);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	ellipse(250,200,0,360,26,36);

	setcolor(WHITE);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	ellipse(250,200,0,360,25,35);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(250,200,WHITE);

	setcolor(BLACK);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	ellipse(350,200,0,360,26,36);

	setcolor(WHITE);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	ellipse(350,200,0,360,25,35);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(350,200,WHITE);

	//Center Line
	setcolor(BLACK);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	line(300,253,300,340);

	//NOSE
	setcolor(RED);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	ellipse(300,253,0,360,30,28);
	setfillstyle(SOLID_FILL,RED);
	floodfill(300,253,RED);
	setcolor(BLACK);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	line(290,290,230,280);
	line(290,290,230,290);
	line(290,290,230,300);
	line(290,290,230,310);

	line(310,290,370,280);
	line(310,290,370,290);
	line(310,290,370,300);
	line(310,290,370,310);


	// Moustache
	setcolor(BLACK);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	arc(300,270,-135,-45,70);

		//GRAPHICAL TEXT
	int x,y;
	setcolor(WHITE);
	//rectangle(1,1,625,470);
	moveto(80,80);
	settextstyle(1,0,5);
	settextjustify(0,1);
	outtext("<HELLO! I AM DOREMON>");



	//EYES
	for(int i=1;i<=4;i++)
	{
	for(y=210;y>=190;y-=1)
	{
	setcolor(BLACK);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	ellipse(250,y,0,360,17,25);
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(250,y,BLACK);

	setcolor(BLACK);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	ellipse(350,y,0,360,17,25);
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(350,y,BLACK);

	delay(50);

	setcolor(WHITE);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	ellipse(250,y,0,360,17,25);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(250,y,WHITE);

	setcolor(WHITE);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	ellipse(350,y,0,360,17,25);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(350,y,WHITE);
	}
	setcolor(BLACK);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	ellipse(250,y,0,360,17,25);
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(250,y,BLACK);

	setcolor(BLACK);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	ellipse(350,y,0,360,17,25);
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(350,y,BLACK);


	for(y=189;y<=209;y+=1)
	{
	setcolor(BLACK);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	ellipse(250,y,0,360,17,25);
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(250,y,BLACK);

	setcolor(BLACK);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	ellipse(350,y,0,360,17,25);
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(350,y,BLACK);

	delay(50);

	setcolor(WHITE);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	ellipse(250,y,0,360,17,25);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(250,y,WHITE);

	setcolor(WHITE);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	ellipse(350,y,0,360,17,25);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(350,y,WHITE);
	}

	setcolor(BLACK);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	ellipse(250,y,0,360,17,25);
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(250,y,BLACK);

	setcolor(BLACK);
	setlinestyle(SOLID_LINE,1,THICK_WIDTH);
	ellipse(350,y,0,360,17,25);
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(350,y,BLACK);

	}






getch();
return 0;
}
