#pragma once
class Point
{
	int _x, _y; 
public:
	void SetX(int x) { this->_x = x; }
	void SetY(int y) { this->_y = y; }

	int GetX() const { return _x; }
	int GetY() const { return _y; }
};

class Rectangle {
	Point _upperLeft, _upperRight, _lowerLeft, _lowerRight;
	int _top, _left, _bottom, _right;

public:
	Rectangle(int top, int left, int bottom, int right);
	~Rectangle(){}

	int GetTop() const { return _top; }
	int GetLeft() const { return _left; }
	int GetBottom() const { return _bottom; }
	int GetRight() const { return _right; }

	Point GetUpperLeft() const { return _upperLeft; }
	Point GetUpperRight() const { return _upperRight; }
	Point GetLowerLeft() const { return _lowerLeft; }
	Point GetLowerRight() const { return _lowerRight; }

	void SetUpperLeft(Point Location) { _upperLeft = Location; }
	void SetUpperRight(Point Location) { _upperRight = Location; }
	void SetLowerLeft(Point Location) { _lowerLeft = Location; }
	void SetLowerRight(Point Location) { _lowerRight = Location; }

	void SetTop(int top) { _top = top; }
	void SetRight(int right) { _right = right; }
	void SetLeft(int left) { _left = left; }
	void SetBottom(int bottom) { _bottom = bottom; }

	int GetArea() const;
};