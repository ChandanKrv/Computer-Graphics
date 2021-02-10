//Implemention of Bresenham's Line Drawing Algorithm
//Chandan Kumar, Roll 10 , CSE 3A-X
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void lineDrawing(int x0, int y0, int x1, int y1){
 int dx,dy,p,x,y;
 dx=x1-x0;
 dy=y1-y0;
 x=x0;
 y=y0;
 p=2*dy-dx;
 while(x<x1){
  if(p>=0){
   putpixel(x,y,10);
   y=y+1;
   p=p+2*dy-2*dx;
  }
  else{
   putpixel(x,y,10);
   p=p+2*dy;
   }
   x=x+1;
   delay(10);
  }

 }
void main(){
int gd=DETECT,gm,x0,x1,y0,y1;
initgraph(&gd,&gm,"c:\\bgi");//I have copied the bgi folder to this location
printf("Enter co-ordinates of first point: ");
scanf("%d%d",&x0,&y0);
printf("Enter the co-ordinates of second point: ");
scanf("%d%d",&x1,&y1);
lineDrawing(x0,y0,x1,y1);
getch();
closegraph();
}