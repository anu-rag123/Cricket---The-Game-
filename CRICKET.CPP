#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void result();
int u=0,v;
void batting()
{
char ch;
int score=0;
randomize();
int gdriver=DETECT,gmode,i,j,k,l,m;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
setfillstyle(SOLID_FILL,YELLOW);
settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
for(m=1;m<=6;m++)
{
for(i=407;i>=370;i--)
{
gotoxy(65,2);
cout<<"score="<<score;
setcolor(BLUE);
circle(350,250,7);
circle(440,420,7);
circle(100,420,7);
circle(600,200,7);
circle(50,100,7);
circle(120,10,7);
circle(20,20,7);
circle(530,40,7);
circle(100,350,7);
circle(420,30,7);
setcolor(WHITE);
rectangle(630,478,8,1);
line(315,380,325,i);
setcolor(RED);
circle(330,i+5,7);
delay(30);
cleardevice();
setbkcolor(GREEN);
setcolor(WHITE);
bar(250,160,320,300);
circle(300,350,30);
line(295,380,280,410);
line(302,380,302,450);
line(302,450,290,470);
line(302,450,315,470);
circle(300,30,30);
line(295,60,280,90);
line(302,60,280,90);
bar3d(270,90,280,150,3,0);
line(302,60,302,120);
line(302,120,315,130);
line(302,120,290,130);
}
line(315,380,325,i);
circle(330,i+5,7);
line(302,380,302,450);
line(302,450,290,470);
line(302,450,315,470);
for(j=300;j>=150;j--)
{
gotoxy(65,2);
cout<<"score="<<score;
setcolor(BLUE);
circle(350,250,7);
circle(440,420,7);
circle(100,420,7);
circle(600,200,7);
circle(50,100,7);
circle(120,10,7);
circle(20,20,7);
circle(530,40,7);
circle(100,350,7);
circle(420,30,7);
setcolor(WHITE);
rectangle(630,478,10,1);
bar(250,160,320,300);
setcolor(RED);
circle(280,j,7);
delay(30);
cleardevice();
setcolor(WHITE);
circle(300,350,30);
line(295,380,280,410);
line(302,380,302,450);
line(302,450,290,470);
line(302,450,315,470);
circle(300,30,30);
line(295,60,280,90);
line(302,60,280,90);
bar3d(270,90,280,150,3,0);
line(302,60,302,120);
line(302,120,315,130);
line(302,120,290,130);
line(315,380,325,i);
}
rectangle(630,478,10,1);
bar(250,160,320,300);
setcolor(BLUE);
circle(350,250,7);
circle(440,420,7);
circle(100,420,7);
circle(600,200,7);
circle(50,100,7);
circle(120,10,7);
circle(20,20,7);
circle(530,40,7);
circle(100,350,7);
circle(420,30,7);
k=random(478);
l=12;
ch=getch();
if(ch=='l')
{
l=random(280);
setcolor(RED);
circle(l,k,7);
}
else if(ch=='r')
{
l=random(280)+281;
setcolor(RED);
circle(l,k,7);
}
else if(ch=='s')
{
setcolor(RED);
circle(280,k,7);
l=11;
}
else
{
setcolor(RED);
outtextxy(50,250,"OUT");
getch();
closegraph();
result();
}
if(l==350&&k==250||l==440&&k==420||l==100&&k==420||l==600&&k==200||l==50&&k==100||l==120&&k==10||l==20&&k==20||l==530&&k==40||l==100&&k==350||l==420&&k==30)
{
setcolor(RED);
outtextxy(50,250,"OUT");
gotoxy(65,2);
cout<<"score="<<score;
getch();
closegraph();
result();
}
else if(l>=560||l<=10||k>=465||k<=5)
{
outtextxy(50,250,"FOUR");
score=score+4;
u=score;
gotoxy(65,2);
cout<<"score="<<score;
if(u>=v)
{
getch();
closegraph();
result();
}
else
getch();
}
else
{
gotoxy(65,2);
score=score+2;
u=score;
cout<<"score="<<score;
if(u>=v)
{
getch();
closegraph();
result();
}
else
getch();
}
}
if(u<v)
{
getch();
closegraph();
result();
}
}
void page1()
{
int gdriver=DETECT,gmode,i,x1=100,t1,t2,j=100,a;
char ch[]="1";
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
setlinestyle(DASHED_LINE,1,THICK_WIDTH);
setcolor(BLUE);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,10);
outtextxy(65,10,"CRICKET");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
outtextxy(200,170,"THE GAME");
setcolor(WHITE);
rectangle(638,478,1,1);
setcolor(GREEN);
settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
outtextxy(50,250,"LOADING.......");
delay(1200);
for(i=0;i<400;i++)
{
if(i==0)
{
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(75,320,"1");
}
else if(i==399)
{
setcolor(GREEN);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(500,320," 100");
}
else
{
setcolor(YELLOW);
outtextxy(j,320,"()");
j++;
delay(30);
}
}
for(a=100;a>0;a--)
{
sound(2000);
delay(50);
nosound();
delay(a);
}
outtextxy(150,400,"lets start....");
}
void page2()
{
int gdriver=DETECT,gmode,i;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
setlinestyle(DASHED_LINE,1,THICK_WIDTH);
rectangle(638,478,1,1);
setbkcolor(LIGHTBLUE);
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(180,160,"1:New game");
outtextxy(180,195,"2:Controls");
outtextxy(180,230,"3:About Game");
outtextxy(180,265,"4:Quit");
gotoxy(290,20);
cin>>i;
closegraph();
if(i==1)
{
randomize();
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
v=random(10)+8;
settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
setbkcolor(BLUE);
outtextxy(100,50,"CRICKET:THE GAME");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
outtextxy(100,200,"Hiii,Your target is ");
gotoxy(37,14);
cout<<v<<".";
outtextxy(308,200,"Achieve it as soon as possible.");
outtextxy(100,250,"You have only 1 wicket and 6 balls to achieve it.");
outtextxy(100,350,"ALL THE BEST FRIEND......");
getch();
closegraph();
batting();
}
else if(i==3)
{
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
setlinestyle(DASHED_LINE,1,THICK_WIDTH);
rectangle(638,478,1,1);
setcolor(BLUE);
setbkcolor(LIGHTRED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(50,50,"CRICKET is a game for beginners by ANURAG KHANNA.");
outtextxy(50,100,"It is a batting game in which one can develop cricketing");
outtextxy(50,150,"basics and can enjoy a lot.");
outtextxy(50,200,"In this game one must have to achieve a target in 6 balls");
outtextxy(50,250,"with 1 wicket in hand.I expect that you like it.");
outtextxy(50,350,"HAVE FUN FRIENDS....");
getch();
page2();
}

else if(i==2)
{
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
setlinestyle(DASHED_LINE,1,THICK_WIDTH);
rectangle(638,478,1,1);
setcolor(BLUE);
setbkcolor(LIGHTRED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(50,50,"The game contains minimum 2 runs and maximum four");
outtextxy(50,100,"runs.To guide the ball to left press 'l' and to right press");
outtextxy(50,150,"'r' and for straight drive press 's'.");
outtextxy(50,200,"If you left the ball you get out.If ball go out of boundary");
outtextxy(50,250,"then four runs will be award otherwise 2 runs.If you are");
outtextxy(50,300,"caught by a fielder you will get out.");
outtextxy(50,350,"At the starting of game some target is assigned to you");
outtextxy(50,400,"if you get it in 1 wicket then you will win otherwise lose.");
outtextxy(50,450,"BEST OF LUCK FRIENDS.....");
getch();
page2();
}
else if(i==4)
{
closegraph();
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
setlinestyle(DASHED_LINE,1,THICK_WIDTH);
rectangle(638,478,1,1);
setcolor(YELLOW);
setbkcolor(LIGHTRED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,10);
outtextxy(100,150,"QUITING....");
delay(1500);
exit(0);
}
}
void result()
{
closegraph();
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
setbkcolor(BLUE);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
outtextxy(100,50,"CRICKET:THE GAME");
if(u>=v)
outtextxy(150,190,"YOU WON");
else
outtextxy(150,190,"YOU LOSE");
getch();
closegraph();
page2();
}
void main()
{
clrscr();
page1();
delay(1000);
page2();
}
