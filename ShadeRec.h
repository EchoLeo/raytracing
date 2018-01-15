#ifndef SHADEREC_H__
#define SHADEREC_H__

#include "Vector3.h"
#include "RGBColor.h"

class ShadeRec
{
public:
	Vector3 position;
	Vector3 normal;
	RGBColor color;

	ShadeRec();
	~ShadeRec();
	void set_position(Vector3 _position);
	void set_normal(Vector3 _normal);
	void set_color(RGBColor _color);
};

#endif // !SHADEREC_H__
