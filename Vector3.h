#ifndef VECTOR3_H__
#define VECTOR3_H__

#include <cmath>

class Vector3
{
public:
    double x, y, z;

	static Vector3 zero;
	static Vector3 one;
	static Vector3 unitX;
	static Vector3 unitY;
	static Vector3 unitZ;


    Vector3();
    explicit Vector3(double a);
    Vector3(double _x, double _y, double _z);
    Vector3(const Vector3 &v);

    ~Vector3();

    Vector3& operator=(const Vector3 &rhs);
    Vector3  operator-() const;
    Vector3  operator+(const Vector3 &rhs) const;
    Vector3  operator-(const Vector3 &rhs) const;
    Vector3  operator*(const double val) const;
    Vector3  operator/(const double val) const;
    Vector3& operator+=(const Vector3 &rhs);
    double   operator*(const Vector3 &rhs) const;
    Vector3  cross(const Vector3 &rhs) const;
    Vector3& scale(const double val);

    double length() const;
    double len_squared() const;
    Vector3& normalize();
    //Vector3 
};



#endif //VECTOR3_H__