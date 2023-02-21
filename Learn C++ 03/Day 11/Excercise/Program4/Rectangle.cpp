#include "Rectangle.h";

Point::Point() {
	m_x = 0;
	m_y = 0;
}

Point::Point(int x, int y) {
	m_x = x;
	m_y = y;
}

int Point::GetX() const{
	return m_x;
}

int Point::GetY() const {
	return m_y;
}

Rectangle::Rectangle() {
	Point temp(0, 0);
	m_topleft = temp;
	m_bottomright = temp;
	//m_left = 0;
	//m_bottom = 0;
	//m_right = 0;
}

Rectangle::Rectangle(int top, int left, int bottom, int right) {
	/*m_top = top;
	m_left = left;
	m_bottom = bottom;
	m_right = right;*/
	Point temp(top, left);
	m_topleft = temp;
	Point temp1(bottom, right);
	m_bottomright = temp1;
}

Point Rectangle::CenterPoint() const {
	/*int x = (m_left + m_right) / 2;
	int y = (m_top + m_bottom) / 2;
	return Point(x, y);*/
	int x = (m_topleft.GetY() + m_bottomright.GetY()) / 2;
	int y = (m_topleft.GetY() + m_bottomright.GetX()) / 2;
	return Point(x, y);
}

Point Rectangle::TopLeft() const {
	return m_topleft;
}

Point Rectangle::BottomRight() const {
	return m_bottomright;
}
Rectangle Rectangle::Clone() const {
	/*int top = m_top;
	int bottom = m_bottom;
	int left = m_left;
	int right = m_right;
	return Rectangle(top, left, bottom, right);*/
	int top = m_topleft.GetX();
	int bottom = m_bottomright.GetX();
	int left = m_topleft.GetY();
	int right = m_bottomright.GetY();
	return Rectangle(top, left, bottom, right);
}

void Rectangle::MoveToX(int x) {
	Point temp(m_topleft.GetX(), x);
	m_topleft = temp;
}

void Rectangle::MoveToY(int y) {
	/*m_top = y;*/
	Point temp(y, m_topleft.GetY());
	m_topleft = temp;
}

//(top left)------
//               |
//----- (bottom right)