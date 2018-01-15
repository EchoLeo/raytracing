#include "World.h"
#include "Sphere.h"
#include "ViewPlane.h"
#include "Plane.h"


int main()
{
	ViewPlane vp(400, 400, 0.5);
	World world;
	//setViewPlane
	world.set_viewplane(&vp);

	// colours

	RGBColor yellow(255, 255, 0, 255);									// yellow
	RGBColor brown(181, 102, 40, 255);									// brown
	RGBColor dark_green(0, 105, 105, 255);							// dark_green
	RGBColor orange(255, 191, 0, 255);								// orange
	RGBColor green(0, 153, 77, 255);									// green
	RGBColor light_green(166, 255, 77, 255);							// light green
	RGBColor dark_yellow(156, 156, 0, 255);							// dark yellow
	RGBColor light_purple(101, 77, 255, 255);							// light purple
	RGBColor dark_purple(128, 0, 255, 255);							// dark purple

																	// spheres

	//Sphere*	sphere_ptr1 = new Sphere(Vector3(5, 3, 0), 30, yellow);
	//world.add_obj(sphere_ptr1);

	Sphere*	sphere_ptr2 = new Sphere(Vector3(45, -7, -60), 20, brown);
	world.add_obj(sphere_ptr2);

	Sphere*	sphere_ptr3 = new Sphere(Vector3(40, 43, -100), 17, dark_green);
	world.add_obj(sphere_ptr3);

	//Sphere*	sphere_ptr4 = new Sphere(Vector3(-20, 28, -15), 20, orange);
	//world.add_obj(sphere_ptr4);

	Sphere*	sphere_ptr5 = new Sphere(Vector3(-25, -7, -35), 27, green);
	world.add_obj(sphere_ptr5);

	Sphere*	sphere_ptr6 = new Sphere(Vector3(20, -27, -35), 25, light_green);
	world.add_obj(sphere_ptr6);

	Sphere*	sphere_ptr7 = new Sphere(Vector3(35, 18, -35), 22, green);
	world.add_obj(sphere_ptr7);

	Sphere*	sphere_ptr8 = new Sphere(Vector3(-57, -17, -50), 15, brown);
	world.add_obj(sphere_ptr8);

	Sphere*	sphere_ptr9 = new Sphere(Vector3(-47, 16, -80), 23, light_green);
	world.add_obj(sphere_ptr9);

	Sphere*	sphere_ptr10 = new Sphere(Vector3(-15, -32, -60), 22, dark_green);
	world.add_obj(sphere_ptr10);

	Sphere*	sphere_ptr11 = new Sphere(Vector3(-35, -37, -80), 22, dark_yellow);
	world.add_obj(sphere_ptr11);

	Sphere*	sphere_ptr12 = new Sphere(Vector3(10, 43, -80), 22, dark_yellow);
	world.add_obj(sphere_ptr12);

	Sphere*	sphere_ptr13 = new Sphere(Vector3(30, -7, -80), 10, dark_yellow);
	world.add_obj(sphere_ptr13);

	Sphere*	sphere_ptr14 = new Sphere(Vector3(-40, 48, -110), 18, dark_green);
	world.add_obj(sphere_ptr14);

	Sphere*	sphere_ptr15 = new Sphere(Vector3(-10, 53, -120), 18, brown);
	world.add_obj(sphere_ptr15);

	Sphere*	sphere_ptr16 = new Sphere(Vector3(-55, -52, -100), 10, light_purple);
	world.add_obj(sphere_ptr16);

	Sphere*	sphere_ptr17 = new Sphere(Vector3(5, -52, -100), 15, brown);
	world.add_obj(sphere_ptr17);

	Sphere*	sphere_ptr18 = new Sphere(Vector3(-20, -57, -120), 15, dark_purple);
	world.add_obj(sphere_ptr18);

	Sphere*	sphere_ptr19 = new Sphere(Vector3(55, -27, -100), 17, dark_green);
	world.add_obj(sphere_ptr19);

	Sphere*	sphere_ptr20 = new Sphere(Vector3(50, -47, -120), 15, brown);
	world.add_obj(sphere_ptr20);

	Sphere*	sphere_ptr21 = new Sphere(Vector3(70, -42, -150), 10, light_purple);
	world.add_obj(sphere_ptr21);

	Sphere*	sphere_ptr22 = new Sphere(Vector3(5, 73, -130), 12, light_purple);
	world.add_obj(sphere_ptr22);

	Sphere*	sphere_ptr23 = new Sphere(Vector3(66, 21, -130), 13, dark_purple);
	world.add_obj(sphere_ptr23);

	Sphere*	sphere_ptr24 = new Sphere(Vector3(72, -12, -140), 12, light_purple);
	world.add_obj(sphere_ptr24);

	Sphere*	sphere_ptr25 = new Sphere(Vector3(64, 5, -160), 11, green);
	world.add_obj(sphere_ptr25);

	Sphere*	sphere_ptr26 = new Sphere(Vector3(55, 38, -160), 12, light_purple);
	world.add_obj(sphere_ptr26);

	Sphere*	sphere_ptr27 = new Sphere(Vector3(-73, -2, -160), 12, light_purple);
	world.add_obj(sphere_ptr27);

	Sphere*	sphere_ptr28 = new Sphere(Vector3(30, -62, -140), 15, dark_purple);
	world.add_obj(sphere_ptr28);

	Sphere*	sphere_ptr29 = new Sphere(Vector3(25, 63, -140), 15, dark_purple);
	world.add_obj(sphere_ptr29);

	Sphere*	sphere_ptr30 = new Sphere(Vector3(-60, 46, -140), 15, dark_purple);
	world.add_obj(sphere_ptr30);

	Sphere*	sphere_ptr31 = new Sphere(Vector3(-30, 68, -130), 12, light_purple);
	world.add_obj(sphere_ptr31);

	Sphere*	sphere_ptr32 = new Sphere(Vector3(58, 56, -180), 11, green);
	world.add_obj(sphere_ptr32);

	Sphere*	sphere_ptr33 = new Sphere(Vector3(-63, -39, -180), 11, green);
	world.add_obj(sphere_ptr33);

	Sphere*	sphere_ptr34 = new Sphere(Vector3(46, 68, -200), 10, light_purple);
	world.add_obj(sphere_ptr34);

	Sphere*	sphere_ptr35 = new Sphere(Vector3(-3, -72, -130), 12, light_purple);
	world.add_obj(sphere_ptr35);

	//add Sphere
	//Sphere sphere(Vector3(0, 0, -90), 50, RGBColor::red);
	//world.add_obj(&sphere);
	//world.set_background(RGBColor::white);
	//add Plane
	//Plane plane;
	//plane.set_color(RGBColor::green);
	//plane.set_point(Vector3(0, 0, -90));
	//plane.set_normal(Vector3::unitZ);
	//world.add_obj(&plane);
	
	world.render();
	return 0;
}