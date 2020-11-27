#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
/*drawing hut*/
setcolor(WHITE);
rectangle(320,340,400,430);
rectangle(400,340,600,430);
rectangle(340,380,380,430);
rectangle(400,340,600,430);

line(320,340,360,280);
line(360,280,400,340);

line(360,280,570,280);
line(570,280,600,340);

setfillstyle(INTERLEAVE_FILL,GREEN);
floodfill(500,400,WHITE);
setfillstyle(LTBKSLASH_FILL,BROWN);
floodfill(350,381,WHITE);
setfillstyle(HATCH_FILL,RED);
floodfill(420,300,WHITE);
floodfill(360,281,WHITE);
setfillstyle(INTERLEAVE_FILL,GREEN);
floodfill(340,350,WHITE);

/*SUN*/
setcolor(YELLOW);
setfillstyle(INTERLEAVE_FILL,YELLOW);
circle(390,90,22);
floodfill(390,90,YELLOW);


 /*MOUNTAINS*/
setcolor(WHITE);
setfillstyle(LTBKSLASH_FILL,BROWN);
int arr1[]={0,150,100,75,100,75,200,150};
drawpoly(4,arr1);
fillpoly(4,arr1);
int arr2[]={200,150,300,75,300,75,400,150};
drawpoly(4,arr2);
fillpoly(4,arr2);
int arr3[]={400,150,500,75,500,75,600,150};
drawpoly(4,arr3);
fillpoly(4,arr3);


/*tree*/
setcolor(BROWN);
setfillstyle(INTERLEAVE_FILL,BROWN);
arc(176,360,100,240,70);
arc(10,360,300,70,70);


ellipse(125,310,160,70,32,25);
ellipse(65,305,100,20,32,25);
line(39,422,140,422);

floodfill(100,390,BROWN);


setcolor(GREEN);
setfillstyle(INTERLEAVE_FILL,GREEN);
ellipse(42,270,30,260,32,25);
ellipse(59,220,10,260,32,25);
ellipse(100,193,0,190,35,25);


ellipse(145,199,300,120,35,25);
ellipse(173,237,260,100,35,25);
ellipse(180,284,210,80,30,25);
ellipse(125,310,160,30,32,25);
ellipse(65,305,100,20,32,25);
floodfill(200,250,GREEN);




/*WINDOW*/
setcolor(BROWN);
setfillstyle(LTBKSLASH_FILL,BROWN);
rectangle(510,410,460,370);
floodfill(470,390,BROWN);

/*river*/
setcolor(BLUE);
setfillstyle(LTBKSLASH_FILL,BLUE);
ellipse(210,204,310,80,20,60);
ellipse(210,314,310,70,30,70);
ellipse(213,432,310,70,30,70);
ellipse(270,212,310,80,20,70);
ellipse(272,320,290,70,30,70);
ellipse(272,436,320,70,30,70);


line(216,153,285,153);
line(232,480,300,480);
putpixel(230,250,RED);
floodfill(230,250,BLUE);


/*birds*/
setcolor(WHITE);
setfillstyle(SLASH_FILL,WHITE);

arc(50,68,30,210,10);
arc(30,70,30,200,10);

arc(120,65,30,210,10);
arc(132,50,30,200,10);

arc(290,55,30,210,10);
arc(270,60,30,200,10);

arc(470,65,30,210,10);
arc(450,70,30,200,10);


/*cloud*/
setcolor(CYAN);
setfillstyle(SLASH_FILL,CYAN);

ellipse(525,45,30,270,32,25);
ellipse(579,25,10,260,32,25);
ellipse(620,35,280,150,18,20);
ellipse(609,67,210,50,30,25);
ellipse(553,73,130,20,35,25);
//ellipse(575,80,160,30,33,35);
putpixel(520,40,RED);
floodfill(520,40,CYAN);

getch();
closegraph();
}