#ifndef VIEWPLANE_H__
#define VIEWPLANE_H__

class ViewPlane
{
public:
	size_t width, height;
	double pixelSize;

	ViewPlane();
	ViewPlane(const ViewPlane &vp);
	ViewPlane(size_t _width, size_t _height, double _ps);
	~ViewPlane();
};
#endif // !VIEWPLANE_H__
