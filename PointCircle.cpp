#include <iostream>
#include <math.h>

using namespace std;

class Point {
	public:
		Point(){}
		~Point(){}
		float GetX(){return x;}
		void SetX(float f){x=f;}
		float GetY(){return y;}
		void SetY(float f){y=f;}
	private:
		float x;
		float y;
};

class Circle {
	public:
		Circle(float r, float p, float q);
		~Circle(){}
		Point GetCircleCenter() const {return CircleCenter;}
		void SetCircleCenter(Point f){CircleCenter=f;}
		float GetCircleRadius() const {return CircleRadius;}
		void SetCircleRadius(float f){CircleRadius=f;}
		float GetArea() const;
	private:
		float CircleRadius;
		Point CircleCenter;		
};

Circle::Circle(float r, float p, float q) {
	CircleCenter.SetX(p);
	CircleCenter.SetY(q);
	CircleRadius=r;
}

float Circle::GetArea() const {
	return (22.0/7.0)*CircleRadius*CircleRadius;
}

int main() {
	Circle circ(3.0, 1.5, 2.5);
	float area = circ.GetArea();

	cout<<" Area of the circle with radius = "<<circ.GetCircleRadius()<<" Center("<<circ.GetCircleCenter().GetX()<<","<<circ.GetCircleCenter().GetY()<<") = " <<area<< " sq units"<<endl;

return 0;
}
