#ifndef RGBCOLOR_H__
#define RGBCOLOR_H__

class RGBColor
{
public:
    unsigned char r, g, b, alpha;

	static RGBColor red;
	static RGBColor green;
	static RGBColor blue;
	static RGBColor black;
	static RGBColor white;

    RGBColor();
    RGBColor(unsigned char c);
    RGBColor(unsigned char _r, unsigned char _g, unsigned char _b, unsigned char _a);
    RGBColor(const RGBColor &c);

    ~RGBColor();

    RGBColor& operator=(const RGBColor &rhs);
	unsigned char& operator[](size_t index);
};

#endif  //RGBCOLOR_H__