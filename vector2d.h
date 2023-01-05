#pragma once
class vector2d {
public:
	float x, y;
	vector2d(float x1, float y1):x(x1), y(y1){ }
	vector2d& operator+=(const vector2d& p) {
		this->x += p.x;
		this->y += p.y;
		return *this;
	}
	 
	vector2d& operator*(float i) {
		this->x *= i; this->y *= i;
		return *this;
	}
};