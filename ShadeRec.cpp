#include "ShadeRec.h"

ShadeRec::ShadeRec() : position(0), normal(0), color(0)
{}

ShadeRec::~ShadeRec()
{}

void ShadeRec::set_position(Vector3 p)
{
	position = p;
}

void ShadeRec::set_normal(Vector3 n)
{
	normal = n;
}

void ShadeRec::set_color(RGBColor c)
{
	color = c;
}