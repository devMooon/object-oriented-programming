#include "Point.h"
#include "ColorPoint.h"

int main(void)
{
	Point* p[3];

	p[0] = new Point(2, 3);
	p[1] = new ColorPoint(4, 3, "³ë¶û");
	p[2] = new ColorPoint(3, 2, "ÆÄ¶û");

	for (int i = 0; i < 3; i++) {
		p[i]->show();

		ColorPoint* colorPoint;
		colorPoint = dynamic_cast<ColorPoint*>(p[i]);
		if (colorPoint != NULL) {
			colorPoint->draw();
		}
	}
	
	return 0;
}