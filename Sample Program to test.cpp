#include <graphics.h>
#include <conio.h>

main()
{
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\TC\\BGI");
arc(200, 200, 0, 135,80);
getch();
closegraph();
return 0;
}
