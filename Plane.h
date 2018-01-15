#ifndef PLANE_H__
#define PLANE_H__

#include "GeometricObject.h"
#include "Vector3.h"

class Plane : public GeometricObject
{
public:
	Plane();
	Plane(const Vector3 &p, const Vector3 &n, const RGBColor &c);
	virtual bool hit(const Ray &ray, double& tmin, ShadeRec &sr) const;
	void set_point(const Vector3 &p);
	void set_normal(const Vector3 &n);
	void set_color(const RGBColor &c);
private:
	Vector3 point;
	Vector3 normal;
	RGBColor color;
};

#endif // !PLANE_H__
