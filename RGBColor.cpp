#include "RGBColor.h"

RGBColor RGBColor::black = RGBColor(0, 0, 255, 255);
RGBColor RGBColor::white = RGBColor(255, 255, 255, 255);
RGBColor RGBColor::red = RGBColor(255, 0, 0, 255);
RGBColor RGBColor::green = RGBColor(0, 255, 0, 255);
RGBColor RGBColor::blue = RGBColor(0, 0, 255, 255);

RGBColor::RGBColor() : r(0), g(0), b(0), alpha(255)
{}

RGBColor::RGBColor(unsigned char c) : r(c), g(c), b(c), alpha(255)
{}

RGBColor::RGBColor(unsigned char _r, unsigned char _g, unsigned char _b, unsigned char a) : r(_r), g(_g), b(_b), alpha(a)
{}

RGBColor::RGBColor(const RGBColor &c) : r(c.r), g(c.g), b(c.b), alpha(c.alpha)
{
}

RGBColor::~RGBColor()
{}

RGBColor& RGBColor::operator=(const RGBColor &rhs)
{
    r = rhs.r;
    g = rhs.g;
    b = rhs.b;
	alpha = rhs.alpha;
    return *this;
}

unsigned char& RGBColor::operator[](size_t index)
{
	switch (index)
	{
	case 0:
		return r;
		break;
	case 1:
		return g;
		break;
	case 2:
		return b;
		break;
	case 3:
		return alpha;
		break;
	default:
		break;
	}
}
