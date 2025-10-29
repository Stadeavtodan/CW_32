#pragma once
#include "Class1.h"

namespace Yehor {
	class Class3 : public Class1 {
	public:
		void show()const {
			std::cout << "Class3 derived from namespace Yehor\n";
		}
	};
}