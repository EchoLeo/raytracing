#include "Plane.h"
#include "Constants.h"

Plane::Plane()
{
}

Plane::Plane(const Vector3 & p, const Vector3 & n, const RGBColor & c) : point(p), normal(n), color(c)
{
}

bool Plane::hit(const Ray & ray, double & tmin, ShadeRec & sr) const
{
	double t = ((point - ray.o)*normal) / (ray.d * normal);
	if (t > epsilon)
	{
		tmin = t;
		sr.normal = normal;
		sr.color = color;
		sr.position = ray.o + ray.d * t;
		return true;
	}
	return false;
}

void Plane::set_point(const Vector3 & p)
{
	point = p;
}

void Plane::set_normal(const Vector3 & n)
{
	normal = n;
}

void Plane::set_color(const RGBColor & c)
{
	color = c;
}
