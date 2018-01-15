#ifndef PNGIMAGE_H_
#define PNGIMAGE_H_

#include "RGBColor.h"

class PNGImage
{
public:
	enum Format
	{
		NONE = 0, RGB = 3, RGBA = 4
	};
	PNGImage();
	PNGImage(int w, int h, Format f);
	PNGImage(const PNGImage &img);
	bool read_png_file(const char *filename);
	bool write_png_file(const char *filename);
	RGBColor get(int x, int y);
	int get_width();
	int get_height();
	int get_format();
	bool set(int x, int y, RGBColor c);
	PNGImage & operator =(const PNGImage &img);
	void clear();
	~PNGImage();

protected:
	unsigned char *data;
	int width = 0;
	int height = 0;
	Format format = NONE;
	void print();
};

#endif