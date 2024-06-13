#include "SerializeBuffer.h"
int main()
{
	SerializeBuffer sb;
	sb.AllocBuffer();
	UCHAR a = 1;
	char b = 2;
	SHORT c = 3;
	int d = 4;
	LONGLONG e = 5;
	float f = 6.0;
	double g = 7.0;

	//sb << a << b << c << d << e << f << g;

	UCHAR a1;
	char b1;
	SHORT c1;
	int d1;
	LONGLONG e1;
	float f1;
	double g1;

	sb >> a1;
	//sb >> a1 >> b1 >> c1 >> d1 >> e1 >> f1 >> g1;
	//sb << a << b << c << d << e << f << g;
	//sb >> a1 >> b1 >> c1 >> d1 >> e1 >> f1 >> g1;
	return 0;
}