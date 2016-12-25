#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

class MySpaceTime
{
	double x, y, z, ct;

public:
	MySpaceTime()
	{
		x = y = z = ct = 0.0;
	}

	MySpaceTime(double xi, double  yi, double  zi, double  cti)
	{
		x = xi;
		y = yi;
		z = zi;
		ct = cti;
	}

	void setCoordinates(double xi, double  yi, double  zi, double  cti)
	{
		x = xi;
		y = yi;
		z = zi;
		ct = cti;
	}

	void getCoordinates(double &xi, double &yi, double & zi, double  &cti)
	{
		xi = x;
		yi = y;
		zi = z;
		cti = ct;
	}

	


};

double distance(MySpaceTime a, MySpaceTime b)
{
	double x, y, z, ct;
	double x1, y1, z1, ct1;
	a.getCoordinates(x, y, z, ct);
	b.getCoordinates(x1, y1, z1, ct1);
	return (x - x1)*(x - x1) + (y - y1)*(y - y1) + (z - z1)*(z - z1) - (ct - ct1)*  (ct - ct1);
}

int main(int argc, char const *argv[])
{
	cout << "Please input the coordinates of spacetime events:\n";
	cout << "First event:";
	
	double xx, yy, zz, ctt;
	cin >> xx >> yy >> zz >> ctt;

	cout << "Second event:";
	double xx1, yy1, zz1, ctt1;
	cin >> xx1 >> yy1 >> zz1 >> ctt1;

	MySpaceTime m1(xx, yy, zz, ctt);
	MySpaceTime m2(xx1, yy1, zz1, ctt1);

	cout <<"The interval is:"<< distance(m1, m2);

	return 0;
}