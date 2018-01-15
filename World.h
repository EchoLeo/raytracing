#ifndef WORLD_H__
#define WORLD_H__

#include "GeometricObject.h"
#include "RGBColor.h"
#include "ViewPlane.h"
#include <vector>

class World
{
public:
	World();
	~World();

	void add_obj(GeometricObject *);
	void set_background(const RGBColor &c);
	void set_viewplane(ViewPlane *viewplane);
	void render();
private:
	std::vector<GeometricObject *> objVec;
	RGBColor backgroundColor;
	ViewPlane *vp;
};

#endif // !WORLD_H__

