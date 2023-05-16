    #include <iostream>
    #include<math.h>
    #include <graphics.h>
    using namespace std;
    int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x1, y1, x2, y2;
    cout << "Enter the starting point coordinates (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter the ending point coordinates (x2, y2): ";
    cin >> x2 >> y2;
    int color, width;
    cout << "Enter the color of the line (0-15): ";
    cin >> color;
    cout << "Enter the width of the line: ";
    cin >> width;
    int dx = x2 - x1;
    int dy = y2 - y1;
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
    float xinc = dx / (float)steps;
    float yinc = dy / (float)steps;
    float x = x1, y = y1;
    setcolor(color);
    setlinestyle(SOLID_LINE, 0, width);
    for (int i = 0; i < steps; i++) {
    putpixel(round(x), round(y), color);
    x += xinc;
    y += yinc;
    }
    getch();
    closegraph();
    return 0;
    }
