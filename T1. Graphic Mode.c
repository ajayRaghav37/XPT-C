#include <stdio.h>
#include<graphics.h>
int main(int argc, char* argv[])
{
	int gdriver=DETECT,gmode,x1=0,y1=0,x2,y2;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
	line(10,10,200,200);
	return 0;
}