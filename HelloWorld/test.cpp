#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm,"");
    //setcolor(GREEN);
    //line(30,50,100,50);

    //start reactangle
    //rectangle(50,50,120,100);
    //setfillstyle(SOLID_FILL,YELLOW);
    //floodfill(51,51,YELLOW);
    //end reactangle

    //start circle
    //setcolor(YELLOW);
    //circle(200,200,100);
    //setfillstyle(SOLID_FILL,YELLOW);
    //floodfill(201,201,YELLOW);
    //end circle

    //start triangle
    //line(100,100,200,100);
    //line(100,100,100,30);
    //line(100,30,200,100);
    //end triangle

    //start pyramid
    //setcolor(GREEN);
    //line(80,80,160,80);
    //line(80,80,120,30);
    //line(120,30,160,80);
    //setfillstyle(SOLID_FILL,RED);
    //floodfill(70,80,RED);

    //show test
    //setcolor(YELLOW);
    //outtextxy(50,50,"I am SHAIKAT");

    //read image
    //readimagefile("shaikat.jpg",20,20,350,400);


    //flag
    setcolor(GREEN);
    rectangle(50,50,250,150);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(51,51,GREEN);

    setcolor(RED);
    circle(150,100,30);
    setfillstyle(SOLID_FILL,RED);
    floodfill(150,100,RED);
    getch();
    closegraph();
}
