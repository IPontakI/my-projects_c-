#include <iostream>
#include <math.h>
#include "vector3D.h"
#include <string>
#include <sstream>

using namespace std;


vector3D::vector3D()
{
	x = 0;
	y = 0;
	z = 0;
	scalar = 0;
	lenth_comp = 1;
}
vector3D::vector3D(int a, int b, int c, int d, bool e)
{
	x = a;
	y = b;
	z = c;
	scalar = d;
	lenth_comp = e;
}
vector3D::vector3D(int a, int b, int c)
{
	x = a;
	y = b;
	z = c;
	scalar = 0;
	lenth_comp = 1;
}

vector3D vector3D::result(vector3D M)
{
	this->x = M.x;
	this->y = M.y;
	this->z = M.z;
	return vector3D();
}

vector3D vector3D::operator + (vector3D M)
{

	vector3D tmp;
	tmp.x = M.x + this->x;
	tmp.y = M.y + this->y;
	tmp.z = M.z + this->z;
	return tmp;
}

vector3D vector3D::operator - (vector3D M)
{

	vector3D tmp;
	tmp.x = this->x - M.x;
	tmp.y = this->y - M.y;
	tmp.z = this->z - M.z;
	return tmp;
}

vector3D vector3D::operator * (vector3D M)
{
	vector3D tmp;
	tmp.x = this->x * M.x;
	tmp.y = this->y * M.y;
	tmp.z = this->z * M.z;
	return tmp;
}

float vector3D::GetX()
{
	return x;
}

float vector3D::GetY()
{
	return y;
}

float vector3D::GetZ()
{
	return z;
}

void vector3D::Init(int vecX, int vecY, int vecZ)
{
	//implementation of the Init method
	x = vecX;
	y = vecY;
	z = vecZ;
}

void vector3D::Read(int i)
{
	//implementation of the Read method
	cout << "Enter value x vec" << i << ":";
	cin >> x;
	cout << "Enter value y vec" << i << ":";
	cin >> y;
	cout << "Enter value z vec" << i << ":";
	cin >> z;
	cout << endl;
}

void vector3D::Display(int i)
{
	//implementation of the Display method
	cout << "vec" << i << ".x" << " = " << x << endl;
	cout << "vec" << i << ".y" << " = " << y << endl;
	cout << "vec" << i << ".z" << " = " << z << endl;
}



vector3D vector3D::plus(vector3D M)
{
	//implementation of the plus method 
	vector3D tmp;
	tmp.x = M.x + this->x;
	tmp.y = M.y + this->y;
	tmp.z = M.z + this->z;
	return tmp;
}

vector3D vector3D::minus(vector3D M)
{
	//implementation of the minus method
	vector3D tmp;
	tmp.x = this->x - M.x;
	tmp.y = this->y - M.y;
	tmp.z = this->z - M.z;
	return tmp;
}

float vector3D::scal_product(vector3D M)
{
	//implementation of the scal_product method
	float scalar_product;
	scalar_product = this->x * M.x + this->y * M.y + this->z * M.z;
	return scalar_product;
}

vector3D vector3D::scal_mult(int i)
{
	//implementation of the scal_minus method
	vector3D scalar_mult;

	cout << "Enter scalar value for vec" << i << ":";
	cin >> scalar;

	scalar_mult.x = x * scalar;
	scalar_mult.y = y * scalar;
	scalar_mult.z = z * scalar;

	return scalar_mult;
}

float vector3D::vec_lenth()
{
	//implementation of the vec_lenth method
	float vec_lenth;
	vec_lenth = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	return vec_lenth;
}

bool vector3D::vec_compare(vector3D M, vector3D N)
{
	//implementation of the vec_compare method

	if (M.vec_lenth() > N.vec_lenth())
	{
		return lenth_comp;
	}
	else {
		return !lenth_comp;
	}

}

void vector3D::To_string(vector3D M)
{
	string tmp = to_string(M.vec_lenth());
	cout << tmp << endl;
}
