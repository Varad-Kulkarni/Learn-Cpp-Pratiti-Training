#pragma once

class Point {
public:
	Point();
	Point(int x, int y);
public:
	int GetX() const;
	int GetY() const;
private:
	int m_x;
	int m_y;
};


class Rectangle {
public:
	Rectangle();
	Rectangle(int top, int left, int bottom, int right);
public:
	Point CenterPoint() const;
	Point BottomRight() const;
	Point TopLeft() const;
	Rectangle Clone() const;
	void MoveToX(int x);
	void MoveToY(int y);
private:
	/*int m_top;
	int m_bottom;
	int m_left;
	int m_right;*/
	Point m_topleft;
	Point m_bottomright;
};