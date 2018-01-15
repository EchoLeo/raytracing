#include "Sphere.h"

Sphere::Sphere()
{}

Sphere::Sphere(const Vector3 &c, double r, const RGBColor &col) : center(c), radius(r), color(col)
{}

Sphere::~Sphere()
{}

void Sphere::set_center(const Vector3 &c)
{
	center = c;
}

void Sphere::set_radius(double r)
{
	radius = r;
}

void Sphere::set_color(const RGBColor &c)
{
	color = c;
}

bool Sphere::hit(const Ray &ray, double& tmin, ShadeRec &sr) const
{
	double a = ray.d.len_squared();
	double b = (ray.o - center)*ray.d * 2;
	double c = (ray.o - center)*(ray.o - center) - radius*radius;
	double delta = b*b - 4 * a*c;
	if (delta < 0)
		return false;
	else
	{
		bool isRayOriginInSphere = (ray.o - center)*(ray.o - center) - radius*radius < 0;

		double t1 = (-b - sqrt(delta)) / (2 * a);
		double t2 = (-b + sqrt(delta)) / (2 * a);
		if (t1 > epsilon)
		{
			tmin = t1;
			sr.set_color(color);
			sr.set_position(ray.o + ray.d*t1);
			Vector3 normal = isRayOriginInSphere ? center - sr.position : sr.position - center;
			sr.set_normal(normal);
			return true;
		}
		else if (t2 > epsilon)
		{
			tmin = t2;
			sr.set_color(color);
			sr.set_position(ray.o + ray.d*t2);
			Vector3 normal = isRayOriginInSphere ? center - sr.position : sr.position - center;
			sr.set_normal(normal);
		}
		return true;
	}
}