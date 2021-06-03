#include<stdio.h>
#include<ncurses.h>
#include<math.h>
struct point
{
  float x;
  float y;  
};
struct point inpcenter()
{
  struct point p;
  printw("enter the center of the circle to be drawn(y,x)\n");
  scanw("%f %f",&p.y,&p.x);
  return p;
}
float inprad()
{
    float r;
    printw("enter the radius of the circle\n");
    scanw("%f",&r);
    return r;
}
void drawcirc(struct point p,float r,int mx,int my,int sy,int sx)
{
 
  for(int i=0;i<mx;i++)
   {
       for(int j=0;j<my;j++)
             {
               if((int)sqrt((i-p.x)*(i-p.x)+(j-p.y)*(j-p.y))==(int)r)
               {
                  mvprintw(i,j,"+");
               }
                else
                  printw(" ");
             } 
   }
   
}  
int main()
{
    struct point p;
    int mx,my;
    initscr();
    getmaxyx(stdscr,my,mx);
    printw("the max coordinates of the screen is %d %d\n",my,mx);
    p=inpcenter();
    float r=inprad();
    getch();
    refresh();
    int h=20,w=20;
    int sx,sy;
    sx=sy=10;
    raw();
    clear();
    WINDOW*win=newwin(my,mx,sy,sx);
    wrefresh(win);
    drawcirc(p,r,mx,my,sy,sx);
    getch();
    endwin();
    return 0;
}

