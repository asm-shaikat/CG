#include <iostream>
#include <graphics.h>
using namespace std;
void drawEllipse(int xc, int yc, int a, int b) {
int x = 0, y = b;
int a_squared = a * a;
int b_squared = b * b;
int two_a_squared = 2 * a_squared;
int two_b_squared = 2 * b_squared;
int d = b_squared - a_squared * b + 0.25 * a_squared;
while (two_b_squared * x <= two_a_squared * y) {
putpixel(xc + x, yc + y, WHITE);
putpixel(xc - x, yc + y, WHITE);
putpixel(xc + x, yc - y, WHITE);
putpixel(xc - x, yc - y, WHITE);
x++;
if (d < 0)
d += two_b_squared * x + b_squared;
else {
y--;
d += two_b_squared * x - two_a_squared * y + a_squared +
b_squared;
}
}
d = b_squared * (x + 0.5) * (x + 0.5) + a_squared * (y - 1) * (y - 1) -
a_squared * b_squared;
while (y >= 0) {
putpixel(xc + x, yc + y, WHITE);
putpixel(xc - x, yc + y, WHITE);
putpixel(xc + x, yc - y, WHITE);
putpixel(xc - x, yc - y, WHITE);
y--;
if (d > 0)
d += a_squared - two_a_squared * y;
else {
x++;
d += two_b_squared * x - two_a_squared * y + a_squared +
b_squared;
}
}
}
int main() {
int gd = DETECT, gm;
initgraph(&gd, &gm, "");
int xc = 320, yc = 240;
int a = 100, b = 50;
drawEllipse(xc, yc, a, b);
getch();
closegraph();
return 0;
}
