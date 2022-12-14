#include <iostream>
#include "vector3D.h"

using namespace std;

int main()
{
	//initialization of class objects
	vector3D vec1, vec2, a, sum, min, scalar_mult, vector_lenth, c;

	//vector3D(1, 2, 3, 1, 0);

	vec1.Init(1, 2, 3);
	vec2.Init(7, 8, 9);

	c.result(c = vec1 + vec2);
	c.Display(3);
	c.result(c = vec1 - vec2);
	c.Display(3);
	c.result(c = vec1 * vec2);
	c.Display(3);

	cout << "-----Class vector3D working------------" << endl;
	//calling methods to execute them
	vec1.Read(1);
	vec1.Display(1);
	cout << "---------------------------------------" << endl;
	vec2.Read(2);
	vec2.Display(2);
	/*_________________________________________________________*/

	cout << "\n-----Metod plus working----------------" << endl << endl;
	sum = vec1.plus(vec2);
	cout << "vec1 + vec2 = (" << sum.GetX() << "; " << sum.GetY() << "; " << sum.GetZ() << ")" << endl;

	cout << "\n-----Metod minus working---------------" << endl << endl;
	min = vec1.minus(vec2);
	cout << "(" << min.GetX() << "; " << min.GetY() << "; " << min.GetZ() << ")" << endl;

	cout << "\n-----Metod scal_product working--------" << endl << endl;
	cout << "Scalar product = " << vec1.scal_product(vec2) << endl;

	cout << "\n-----Metod scal_mult working-----------" << endl << endl;
	scalar_mult = vec1.scal_mult(1);
	cout << "Scalar mult vec1 = " << "(" << scalar_mult.GetX() << "; " << scalar_mult.GetY() << "; " << scalar_mult.GetZ() << ")" << endl << endl;
	scalar_mult = vec2.scal_mult(2);
	cout << "Scalar mult vec2 = " << "(" << scalar_mult.GetX() << "; " << scalar_mult.GetY() << "; " << scalar_mult.GetZ() << ")" << endl;

	cout << "\n-----Metod vec_lenth working-----------" << endl << endl;
	cout << "lenth_vec1 = " << vec1.vec_lenth() << endl;
	cout << "lenth_vec2 = " << vec2.vec_lenth() << endl;

	cout << "\n-----Metod vec_compare working---------" << endl << endl;
	if (a.vec_compare(vec1, vec2))
	{
		cout << "vec1 > vec2" << endl;
	}
	else
	{
		cout << "vec1 < vec2" << endl;
	}

	a.To_string(vec1);

	system("PAUSE");
};
