#include "World.h"
#include "Sphere.h"
#include "ViewPlane.h"
#include "Plane.h"


int main()
{
	ViewPlane vp(200, 200, 1.0);
	World world;
	//setViewPlane
	world.set_viewplane(&vp);
	//add Sphere
	Sphere sphere(Vector3(0, 0, -90), 50, RGBColor::red);
	world.add_obj(&sphere);
	world.set_background(RGBColor::white);
	//add Plane
	Plane plane;
	plane.set_color(RGBColor::green);
	plane.set_point(Vector3(0, 0, -90));
	plane.set_normal(Vector3::unitZ);
	world.add_obj(&plane);
	
	world.render();
	return 0;
}