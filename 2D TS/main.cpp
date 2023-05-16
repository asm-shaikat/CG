#include <graphics.h>
#include <math.h>
struct Point2D {
int x, y;
};
void translate(Point2D& p, int dx, int dy) {
p.x += dx;
p.y += dy;
}
void scale(Point2D& p, float sx, float sy) {
p.x = (int)(p.x * sx);
p.y = (int)(p.y * sy);
}
int main() {
int gd = DETECT, gm;
initgraph(&gd, &gm, "");
Point2D p = {100, 100};
setcolor(RED);
circle(p.x, p.y, 20);
translate(p, 50, 0);
setcolor(BLUE);
circle(p.x, p.y, 20);
scale(p, 2.0, 2.0);
setcolor(GREEN);
circle(p.x, p.y, 20);
setcolor(YELLOW);
circle(p.x, p.y, 20);
getch();
closegraph();
return 0;}
