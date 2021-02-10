/* Chandan Kumar, Roll 10 , CSE 3A-X, Computer Graphics */
// MINI PROJECT
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <graphics.h>
#include <dos.h>
void red()
{
	setfillstyle(SOLID_FILL, RED);
	circle(350, 100, 50);
	floodfill(350, 100, WHITE);
	setfillstyle(SOLID_FILL, BLACK);
	circle(350, 250, 50);
	circle(350, 400, 50);
	floodfill(350, 250, WHITE);
	floodfill(350, 400, WHITE);
}
void yellow()
{
	setfillstyle(SOLID_FILL, YELLOW);
	circle(350, 250, 50);
	floodfill(350, 250, WHITE);
	setfillstyle(SOLID_FILL, BLACK);
	circle(350, 100, 50);
	circle(350, 400, 50);
	floodfill(350, 100, WHITE);
	floodfill(350, 400, WHITE);
}
void green()
{
	setfillstyle(SOLID_FILL, GREEN);
	circle(350, 400, 50);
	floodfill(350, 400, WHITE);
	setfillstyle(SOLID_FILL, BLACK);
	circle(350, 100, 50);
	circle(350, 250, 50);
	floodfill(350, 100, WHITE);
	floodfill(350, 250, WHITE);
}

void skelton()
{
	circle(350, 100, 50);
	circle(350, 250, 50);
	circle(350, 400, 50);
	line(270, 40, 435, 40);
	line(270, 40, 270, 470);
	line(270, 470, 435, 470);
	line(435, 40, 435, 470);
}

void main()
{
	int gd = DETECT, gm = DETECT, autoOrManual;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	char ch = 114;
	printf("Press\n'1' for Automatic Traffic Control\n'2' for Manual Traffic Control\n");
	scanf("%d", &autoOrManual);
	if (autoOrManual == 2)
	{
		printf("Press\n'r' for Red Light\n'y' for Yellow Light\n'g' for Green Light\n'x' for Exit");
		skelton();
		while (ch != 27)
		{
			ch = getch();
			if (ch == 114)
				red();
			else if (ch == 121)
				yellow();
			else if (ch == 103)
				green();
			else if (ch == 120)
				exit(1);
		}
	}
	else if (autoOrManual == 1)
	{
		skelton();
		for (int i = 0; i <= 2; i++)
		{
			red();
			delay(2000);

			yellow();
			delay(1000);

			green();
			delay(3000);

			yellow();
			delay(1000);

			if (i == 2)
			{
				int checkpoint;
				printf("Do you want to continue?\n'1' for YES \n'0' for NO\n");
				scanf("%d", &checkpoint);
				if (checkpoint == 1)
					i = 0;
				else if (checkpoint == 0)
				{
					printf("\nThank You Ma'am  [ Closing ]");
					delay(2500);
					exit(1);
				}
			}
		}
	}
	closegraph();
}
