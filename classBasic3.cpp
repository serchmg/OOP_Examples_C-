#include <iostream>
#include <math.h>

using namespace std;

class Polar {
	public:
		Polar():r(0.0),t(0.0){}; //Constructor, initialize r=0.0 and t=0.0
		Polar(double f, double g):r(f),t(g){}; //Constructor, initilize r=f and t=g
		~Polar(){};
		friend void DisplayPolar (Polar v);
		friend Polar MultiplyPolar (Polar v1, Polar v2);
		
	private:
		double r;
		double t;
};

void DisplayPolar (Polar v) {
	cout<<"Magnitude "<<v.r<<" Angle"<<v.t<<endl;
}

Polar MultiplyPolar (Polar v1, Polar v2) {
	Polar v3;
	v3.r = v1.r*v2.r;
	v3.t = v1.t+v2.t;
	return v3;
}

int main () {
	Polar v1(5.0,53.0), v2(6.0,28.0),v3;
	v3 = MultiplyPolar (v1,v2);
	cout<<"\n The given vectors in polar form ... \n"<<endl;
	cout<<"\n Polar from vector v1: ";
	DisplayPolar(v1);
	cout<<"\n Polar from vector v2: ";
	DisplayPolar(v2);
	cout<<"\n Polar from vector v3: ";
	DisplayPolar(v3);

	return 0;
}
