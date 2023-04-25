#include "ComplexPlane.h"

using namespace std;

ComplexPlane::ComplexPlane(float aspectRatio)
{
	m_aspectRatio = aspectRatio;
	m_view.setSize(BASE_WIDTH, -BASE_HEIGHT * m_aspectRatio);
	m_view.setCenter(0.0, 0.0);
	m_zoomCount = 0;
}

void ComplexPlane::zoomIn()
{
	m_zoomCount++;
}

void ComplexPlane::zoomOut()
{
	m_zoomCount--;
}

void ComplexPlane::setCenter(Vector2f coord)
{
	m_view.setCenter(coord);
}

void ComplexPlane::setMouseLocation(Vector2f coord)
{
	m_mouseLocation = coord;
}

void ComplexPlane::loadText(Text& text)
{
	stringstream s;
	s << "Mandelbrot Set" << endl
	 //fixme << "Center: (" << m_view.x << "," << m_view.y << ")" << endl
	  << "Cursor: (" << m_mouseLocation.x << "," << m_mouseLocation.y << ")" << endl
	  << "Left-click to Zoom in" << endl
	  << "Right-click to Zoom out" << endl;
}

size_t ComplexPlane::countIterations(Vector2f coord)
{
	//fixme
}

void ComplexPlane::iterationsToRGB(size_t count, Uint8& r, Uint8& g, Uint8& b)
{
	//fixme
}
