#include <graphics.h>
#include <math.h>
struct Point2D {
int x, y;
};
void rotate(Point2D& p, float angle) {
float rad = angle * M_PI / 180.0;
float cosTheta = cos(rad);
float sinTheta = sin(rad);
int x = (int)(p.x * cosTheta - p.y * sinTheta);
int y = (int)(p.x * sinTheta + p.y * cosTheta);
p.x = x;
p.y = y;
}
int main() {
int gd = DETECT, gm;
initgraph(&gd, &gm, "");
Point2D p = {150, 100};
setcolor(RED);
circle(p.x, p.y, 20);
rotate(p, 45.0);
setcolor(YELLOW);
circle(p.x, p.y, 20);
getch();
closegraph();
return 0;
}
