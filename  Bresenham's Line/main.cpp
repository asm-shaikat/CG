#include <iostream>
#include <graphics.h>
using namespace std;
int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x1, y1, x2, y2;
    cout << "Enter the starting point coordinates (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter the ending point coordinates (x2, y2): ";
    cin >> x2 >> y2;
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int p = 2 * dy - dx;
    int xinc = x1 < x2 ? 1 : -1;
    int yinc = y1 < y2 ? 1 : -1;
    int x = x1, y = y1;
    setcolor(WHITE);
    setlinestyle(SOLID_LINE, 0, 2);
    while (x != x2 || y != y2){
        putpixel(x, y, WHITE);
        int p2 = 2 * p;
        if (p2 > -dx){
            p -= dx;
            y += yinc;
        }
        if (p2 < dy){
            p += dy;
            x += xinc;
        }
    }
    getch();
    closegraph();
    return 0;
}
