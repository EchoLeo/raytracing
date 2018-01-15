#ifndef GEOMETRICOBJECT_H__
#define GEOMETRICOBJECT_H__

#include "Ray.h"
#include "ShadeRec.h"

class GeometricObject
{
public:
    GeometricObject();
    GeometricObject(const GeometricObject &obj);

    virtual ~GeometricObject();

    virtual bool hit(const Ray &ray, double& tmin, ShadeRec &sr) const;
};

#endif //GEOMETRICOBJECT_H__