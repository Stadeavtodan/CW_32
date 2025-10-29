#pragma once
#include "Class1.h"

class OutsideClass : public Yehor::Class1
{
public:
	void show()const {
		std::cout << "OutsideClass from namespase Yehor\n";
	}
};

