#ifndef RGB_H__
#define RGB_H__

#include <cmath>

class Rgb
{
public:
    Rgb() {}
    Rgb(float r = 0.0f, float g = 0.0f, float b = 0.0f) : _r(r), _g(g), _b(b) {}
    Rgb(const Rgb &c) 
    {
        _r = c.r();
        _g = c.g();
        _b = c.b();
    }

    float r() const { return _r; }
    float g() const { return _g; }
    float b() const { return _b; }

    void setR(float r) { _r = r; }
    void setG(float g) { _g = g; }
    void setB(float b) { _b = b; }

    void addR(float r) { _r += r; }
    void addG(float g) { _g += g; }
    void addB(float b) { _b += b; }

    void add(const Rgb &c)
    {
        _r += c.r();
        _g += c.g();
        _b += c.b();
    }

    void clamp()
    {
        if (_r < 0.0f) _r = 0.0f;
        else if (_r > 1.0f) _r = 1.0f;
        if (_g < 0.0f) _g = 0.0f;
        else if (_g > 1.0f) _g = 1.0f;
        if (_b < 0.0f) _b = 0.0f;
        else if (_b > 1.0f) _b = 1.0f;
    }

    void scale(float s)
    {
        _r *= s;
        _g *= s;
        _b *= s;
    }

private:
    float _r, _g, _b;
}

#endif