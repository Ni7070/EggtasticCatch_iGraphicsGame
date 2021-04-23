#include "iGraphics.h"
#include "bitmap_loader.h"
#include<time.h>

int x = 300, y = 300, r = 20;
int win_b = 400, win_l = 400;
float delay = 0;
int speed = 0;
int zahid,zahid2;
/*
 function iDraw() is called again and again by the system.

 */
//void drawRoadLines(int offset)

/*{
	int len = 10;
	int width = 5;
	int gap = 10;
	int midx = 0, midy = win_l / 2;
	for (int i = 0; i < win_b / (len + gap); i++)
		iFilledRectangle((i * (len + gap) + offset) % win_b, midy, len, width);
}
*/
int k = 0;
int z = 0 ;
int x1 = 50 ;
int x2 = 300 ;
int y3 = 300 ;
int y2 = 250 ;
int z1 = 700 ;
int z2 = 270 ;
int f1 = 1;
int f2 = 1;
int r1;
int myintindex=0;

void iDraw()
{
	//place your drawing codes here
	iClear();
	iSetColor(205,255,25);
	iFilledRectangle(0,0,800,400);
	srand(time(NULL));
	myintindex = rand() % 3 + 1;
	iShowBMP2(5,280, "hen.bmp" ,0);
	iShowBMP2(250,250, "hen.bmp" ,0);
	iShowBMP2(650,280, "hen2.bmp" ,0);
	if(myintindex==1){
		iSetColor(255,255,255);
		iFilledCircle(x1,x2,6,50);
		x2--;
	iDelayMS(3);
	}
	if(myintindex==2){
		iSetColor(255,255,255);
		iFilledCircle(y3,y2,6,50);
		y2--;
	iDelayMS(3);
	}
	if(myintindex==3){
		iSetColor(255,255,255);
		iFilledCircle(z1,z2,6,50);
		z2--;
	iDelayMS(3);
	}	
	iShowBMP2(z,5, "Basket.bmp" ,0);
	
}
	




/*
 function iMouseMove() is called when the user presses and drags the mouse.
 (mx, my) is the position where the mouse pointer is.
 */
void iMouseMove(int mx, int my)
{
	printf("x = %d, y= %d\n", mx, my);
	//place your codes here
}

/*
 function iMouse() is called when the user presses/releases the mouse.
 (mx, my) is the position where the mouse pointer is.
 */
void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		
		z += 10;
	//	y += 10;
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
		z -= 10;
	//	y -= 10;
	}
}

/*
 function iKeyboard() is called whenever the user hits a key in keyboard.
 key- holds the ASCII value of the key pressed.
 */
void iKeyboard(unsigned char key)
{
	if (key == 'q')
	{
		exit(0);
	}
	
	if (key == 'd')
	{
		z+=10;
		iDelayMS(-20);
	}
	else if (key == 'a')
	{	z-=10;
	iDelayMS(-20);
	}
	//place your codes for other keys here
}

/*
 function iSpecialKeyboard() is called whenver user hits special keys like-
 function keys, home, end, pg up, pg down, arraows etc. you have to use
 appropriate constants to detect them. A list is:
 GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
 GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
 GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
 GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
 */
void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}
	//place your codes for other keys here
}


int main()
{
	//place your own initialization codes here.
	
	iInitialize(800, 400, "demo");
	return 0;
}
