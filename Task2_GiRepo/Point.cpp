#include "Point.h"
#include <iostream>

Rectangle::Rectangle(int top, int left, int bottom, int right)
{
	_top = top;
	_left = left;
	_bottom = bottom;
	_right = right;

	_upperLeft.SetX(left);
	_upperLeft.SetX(top);

	_upperRight.SetX(right);
	_upperRight.SetY(top);

	_lowerLeft.SetX(left);
	_lowerLeft.SetY(bottom);

	_lowerRight.SetX(right);
	_lowerRight.SetY(bottom);
}

int Rectangle::GetArea() const
{
	int wight = _right - _left;
	int height = _top - _bottom;
	return wight*height;
}
