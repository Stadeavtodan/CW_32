#pragma once
#include "Class1.h"

namespace Yehor {
	class Class2 : public Class1 {
	public:
		void show()const {
			std::cout << "Class2 derived from namespace Yehor\n";
		}
	};
}