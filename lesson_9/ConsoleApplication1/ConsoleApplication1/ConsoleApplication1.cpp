#include <iostream>

namespace MyNS1 {
	class MyClass
	{
	public:
		void show()const{
			using std::cout;
			cout << "MyClass from NS1";
		}
	};
}

namespace MyNS2 {
	class MyClass
	{
	public:
		void show()const {
			using std::cout;
			cout << "MyClass from NS2";
		}
	};
}

int main()
{
	MyNS1::MyClass a;
	MyNS2::MyClass b;
	a.show();
	b.show();

}