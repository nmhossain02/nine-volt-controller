#include "main.h"
#include "nvc/class.h"

void opcontrol() {
	using namespace nvc;
	MyClass * myClass = new MyClass(4);
	int a = myClass->myInt;
	int b = myClass->myMethod(a, myClass->myInt);
	delete myClass;
}
