#include "Vector3.h"


Vector3 Vector3::zero = Vector3(0, 0, 0);
Vector3 Vector3::one = Vector3(1, 1, 1);
Vector3 Vector3::unitX = Vector3(1, 0, 0);
Vector3 Vector3::unitY = Vector3(0, 1, 0);
Vector3 Vector3::unitZ = Vector3(0, 0, 1);


Vector3::Vector3()
{}

Vector3::Vector3(double a) : x(a)
{}

Vector3::Vector3(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
{}

Vector3::Vector3(const Vector3 &v) : x(v.x), y(v.y), z(v.z)
{}

Vector3::~Vector3()
{}

Vector3& Vector3::operator=(const Vector3 &rhs)
{
    x = rhs.x;
    y = rhs.y;
    z = rhs.z;
    return *this;
}

Vector3 Vector3::operator-() const
{
    return Vector3(-x, -y, -z);
}

Vector3 Vector3::operator+(const Vector3 &rhs) const
{
    return Vector3(x+rhs.x, y+rhs.y, z+rhs.z);
}

Vector3 Vector3::operator-(const Vector3 &rhs) const
{
    return Vector3(x-rhs.x, y-rhs.y, z-rhs.z);
}

Vector3 Vector3::operator*(const double val) const
{
    return Vector3(x*val, y*val, x*val);
}

Vector3 Vector3::operator/(const double val) const
{
    double inv = 1/val;
    return (*this)*inv;
}

Vector3& Vector3::operator+=(const Vector3 &rhs)
{
    x += rhs.x;
    y += rhs.y;
    z += rhs.z;
    return *this;
}

double Vector3::operator*(const Vector3 &rhs) const
{
    return x*rhs.x + y*rhs.y + z*rhs.z;
}

Vector3 Vector3::cross(const Vector3 &rhs) const
{
    return Vector3(y*rhs.z - z*rhs.y, z*rhs.x - x*rhs.z, x*rhs.y - y*rhs.x);
}

Vector3& Vector3::scale(const double val)
{
    x *= val;
    y *= val;
    z *= val;
    return *this;
}

double Vector3::length() const
{
	return sqrt(len_squared());
}
double Vector3::len_squared() const
{
	return x*x + y*y + z*z;
}
Vector3& Vector3::normalize()
{
	double invLen = 1 / length();
	scale(invLen);
	return *this;
}