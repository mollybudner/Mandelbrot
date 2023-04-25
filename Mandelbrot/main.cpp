#include "ComplexPlane.h"
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;

int main()
{
	float width = VideoMode::getDesktopMode().width;
	float height = VideoMode::getDesktopMode().height;
	float aspectRatio = height / width;

	ComplexPlane window(aspectRatio);

/*	Font font;
	font.loafFromFile("fonts/arial.ttf");

	Text text;
	text.setFont(font);
*/

	VertexArray vertices(Points);
	vertices.resize(width * height);
}
