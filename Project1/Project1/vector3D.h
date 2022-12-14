#pragma once

class vector3D
{
	// ініціалізація змінних об'єктів методу
private:
	int x, y, z, scalar;
	bool lenth_comp;
	// initialization of class methods
public:
	vector3D();
	vector3D(int a, int b, int c, int d, bool e);
	vector3D(int a, int b, int c);
	vector3D result(vector3D M);
	float GetX();
	float GetY();
	float GetZ();
	void Init(int vecX, int vecY, int vecZ);
	void Read(int i);
	void Display(int i);
	vector3D operator+(vector3D M);
	vector3D operator-(vector3D M);
	vector3D operator*(vector3D M);
	vector3D plus(vector3D M);
	vector3D minus(vector3D M);
	float scal_product(vector3D M);
	vector3D scal_mult(int i);
	float vec_lenth();
	bool vec_compare(vector3D M, vector3D N);
	void To_string(vector3D M);
};
