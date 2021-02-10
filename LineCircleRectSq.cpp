#include<stdio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"");
 //LINE
 line(100,100,100,300);
 //TRIANGLE
line(200,150,120,300);
line(120,300,300,300);
line(200,150,300,300);
 //CIRCLE circle(400,200,80);
 //RECTANGLE
 rectangle(100,350,400,500);
 //ELLIPSE
 ellipse(580,170,0,360,80,50);
 //SQUARE
 rectangle(100,600,300,800);
 //CONCENTRIC CIRCLES
 circle(600,350,100);
circle(600,350,80);
closegraph();
getch();
return 0;
}
