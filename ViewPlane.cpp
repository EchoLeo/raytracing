#include "ViewPlane.h"

ViewPlane::ViewPlane()
{
}

ViewPlane::ViewPlane(const ViewPlane &vp) : width(vp.width), height(vp.height), pixelSize(vp.pixelSize)
{
}

ViewPlane::ViewPlane(size_t _width, size_t _height, double _ps) : width(_width), height(_height), pixelSize(_ps)
{
}

ViewPlane::~ViewPlane()
{
}
