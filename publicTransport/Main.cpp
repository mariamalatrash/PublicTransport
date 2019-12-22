#include <iostream>
#include "Area.h"

using namespace std;

int main() {
	Area a;
	a = Area();
	cout << a.toString().c_str()<<endl;
	getchar();
	return 0;
}