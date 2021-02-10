#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main(){

 int x1,y1,x2,y2,dx,dy,i,steps;
 float x,y,xinc,yinc;
 int gd=DETECT,gm;
 clrscr();
 initgraph(&gd,&gm,"c:\\bgi");
   printf("Enter the starting coordinate: ");
   scanf("%d%d",&x1,&y1);
   printf("Enter the ending coordinate: ");
   scanf("%d%d",&x2,&y2);
   dx=x2-x1;
   dy=y2-y2;
   if(abs(dx)>abs(dy))
   steps=abs(dx);
   else
    steps=abs(dy);
    xinc=dx/steps;
    yinc=dy/steps;

    for(i=1;i<=steps;i++){
     putpixel(x1,y1,10);
     x1=x1+xinc;
     y1=y1+yinc;
    delay(10);

    }
     getch();
     closegraph();

}