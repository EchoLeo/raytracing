#ifndef IMAGE_H__
#define IMAGE_H__

#include <fstream>
#include "Rgb.h"

class Image
{
public:
    Image();
    Image(int w, int h);
    Image(int w, int h, Rgb &c);

    bool set(int x, int y, Rgb &c);
    Rgb get(int x, int y);

    void gammaCorrect(float gamma);
    void writePPM(ostream &out);
    void readPPM(string fileName);

private:
    Rgb** raster;
    int _w, _h;
}

#endif