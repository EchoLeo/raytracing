#include "World.h"
#include "PNGImage.h"
#include "Constants.h"

World::World()
{
}

World::~World()
{
}

void World::add_obj(GeometricObject *obj)
{
	objVec.push_back(obj);
}

void World::set_background(const RGBColor &c)
{
	backgroundColor = c;
}

void World::set_viewplane(ViewPlane *viewplane)
{
	vp = viewplane;
}

void World::render()
{
	size_t width = vp->width;
	size_t height = vp->height;

	PNGImage img(width, width, PNGImage::Format::RGBA);

	for (rsize_t h = 0; h < height; ++h)
	{
		for (rsize_t w = 0; w < width; ++w)
		{
			Vector3 o((0.5 + w - width / 2)*(vp->pixelSize), (0.5 + h - height / 2)*(vp->pixelSize), 0);
			Vector3 d(0, 0, -1);
			Ray ray(o, d);
			ShadeRec sr;
			sr.set_color(backgroundColor);
			double tmin = infinite;
			std::vector<GeometricObject *>::const_iterator it;
			std::vector<GeometricObject *>::const_iterator begin = objVec.cbegin();
			std::vector<GeometricObject *>::const_iterator end = objVec.cend();

			for (it = begin; it != end; ++it)
			{
				GeometricObject* obj = *it;
				ShadeRec shadeRec;
				double t;
				if (obj->hit(ray, t, shadeRec) && t < tmin)
				{
					tmin = t;
					sr = shadeRec;
				}
			}
			img.set(w, h, sr.color);
		}
	}

	img.write_png_file("filename.png");
}
