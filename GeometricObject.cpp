#include "GeometricObject.h"

GeometricObject::GeometricObject()
{
}

GeometricObject::GeometricObject(const GeometricObject & obj)
{
}

GeometricObject::~GeometricObject()
{
}

bool GeometricObject::hit(const Ray & ray, double & tmin, ShadeRec & sr) const
{
	return false;
}
