#include "Ray.h"

Ray::Ray() : o(0), d(0)
{}

Ray::Ray(const Vector3 &origin, const Vector3 &dir) : o(origin), d(dir)
{}

Ray::Ray(const Ray &ray) : o(ray.o), d(ray.d)
{}

Ray::~Ray()
{}

Ray& Ray::operator=(const Ray &rhs)
{
    o = rhs.o;
    d = rhs.d;
    return *this;
}