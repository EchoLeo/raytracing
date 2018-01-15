#ifndef RAY_H__
#define RAY_H__

#include "Vector3.h"

class Ray
{
public:
    Vector3  o;       //origin
    Vector3 d;       //direction

    Ray();
    Ray(const Vector3 &origin, const Vector3 &dir);
    Ray(const Ray &ray);

    ~Ray();

    Ray& operator=(const Ray &rhs);
};

#endif //RAY_H__