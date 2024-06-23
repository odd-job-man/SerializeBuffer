#include "SerializeBuffer.h"
int main()
{
	SerializeBuffer sb;
	sb.AllocBuffer();
	unsigned char a = 1;
	char b = 2;
	short c = 3;
	int d = 4;
	long long e = 5;
	float f = 6.0;
	double g = 7.0;

	sb << a << b << c << d << e << f << g;

	sb >> a >> b >> c >> d >> e >> f >> g;
	return 0;
}