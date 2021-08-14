#include <iostream>
#include <cmath>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	cout << "Hello World!" << endl;

	string  s = "Hello";
	string name = "Marco";
	int i = 9;
	char c = 'a';
	bool tf = true;
	float f = -2.0;
	double d = 3.1415926;//data types, double is just float that can hold more decimal places, char is single characters.

	int x, y, z;
	x = 1, y = 2, z = 3;
	cout << x << y << z << endl;

	cout << s << ", my name is " << name << "." << endl;
	cout << "There are " << name.length() << " letters in the name " << name << "." << endl;

	//Indexing is the same as python and js, starts at 0 and uses square brackets, remember to use single quotes for char values ''.
	name[0] = 'm';
	cout << name << endl;
	cout << name[0] << endl;

	//str.find() seraches a variable to see if the value in the parameters is inside the value.
	//The first parameter in quotes is what you are looking for.
	//The second paramter is the index number after which you want to start looking for the first parameter.
	//If you want to search the whole variable, make the second paratmer 0.
	//.find() will return a number, it will tell you which index it finds the first parameter you are looking for.
	cout << name.find('m', 0) << endl;

	name = "marcom";
	cout << name.find('m', 0) << endl;
	//Seems it doesn't give the indexes of all the 'm's in the variable, just the first one it finds.
	cout << name.find('m', 2) << endl;

	//Other string function, str.substr(), takes two parameteres.
	//.substr(), takes a snippet of the variable out, first parameter is which index number you want to start the output with.
	//Second paramter is how many characters you want to snip.

	cout << name.substr(1, 4) << endl;//Output is "arco" because 'a' is index 1 and arco is 4 characters.

	string subname = name.substr(1, 4);//"arco" is now stored in the string variable subname.
	cout << subname << endl;


	//Math section, #include <cmath>
	cout << pow(5, 2) << endl;//pow() is indicies, 2 parameters, (5,2 ) = 5^2 = 25. Needs #include <cmath>
	cout << sqrt(100) << endl;//sqrt() is the square root function, square roots whatever you put in the parameters.
	cout << round(4.5) << endl;//Rounding like normal, ceil() rounds up, floor() does the opposite.
	cout << fmax(69, 420) << endl;//fmax() takes two parameters and tells you which one is bigger. Returns 420.
	cout << fmin(69, 420) << endl;//fmin() does the opposite of fmax(), returns the smaller of the two parameters.
	cout << log(2) << endl;//log() returns the natural log of the parameter, loge(2) = 0.69.
	cout << hypot(3, 4) << endl;//hypot(x, y) returns sqrt(x^2 + y^2), it returns the hypotenuse.
	cout << abs(-3.4) << endl;//abs() returns the absolute value, fabs() returns the absolute float value.
	cout << fabs(3) << endl;
	//The f means float value.

	return 0;
}