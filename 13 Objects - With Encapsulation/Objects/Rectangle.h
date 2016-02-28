#pragma once
class Rectangle
{
private:
	int _width;
	int _height;

public:
	Rectangle()	: _width{ 1 }, _height{ 1 } 
	{ }

	Rectangle(int initial_width, int initial_height)
		: _width{ initial_width }, _height{ initial_height }
	{ }

	int get_width()  { return _width; }
	int get_height() { return _height; }

	int area()
	{
		return _width * _height;
	}

};
