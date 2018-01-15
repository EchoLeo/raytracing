#include "World.h"
#include "Sphere.h"
#include "ViewPlane.h"


int main()
{
	ViewPlane vp(200, 200, 1.0);
	World world;
	world.set_viewplane(&vp);
	Sphere sphere(Vector3(0, 0, -90), 100, RGBColor::red);
	world.add_obj(&sphere);
	world.set_background(RGBColor::white);
	world.render();
	return 0;
}