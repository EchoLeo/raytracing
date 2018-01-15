#ifndef SPHERE_H__
#define SPHERE_H__

#include "GeometricObject.h"
#include "Vector3.h"
#include "RGBColor.h"
#include "Ray.h"
#include "ShadeRec.h"
#include "Constants.h"


class Sphere : public GeometricObject
{
public:
	Vector3 center;
	double radius;
	RGBColor color;

	Sphere();
	Sphere(const Vector3 &_center, double _radius, const RGBColor &_color);
	~Sphere();

	void set_center(const Vector3 &_center);
	void set_radius(double _radius);
	void set_color(const RGBColor &_color);

	virtual bool hit(const Ray &ray, double& tmin, ShadeRec &sr) const;
};

#endif // !SPHERE_H__
