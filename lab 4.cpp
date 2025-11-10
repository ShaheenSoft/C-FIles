#include <iostream>
using namespace std;
class mine{
	int n;
	public:
		int x;
		mine()
		{
			x=2;
			
		}
		friend class mine2;
		friend void minefunc();
		
};
class mine2{
	public:
	int z;
	mine2()
	{
		mine m3;
	cout<<m3.x;
		z=9;
		cout<<z<<endl;
	}
};
void minefunc()
{
	mine m1;
	cout<<m1.x<<endl;
}
int main()
{
	mine2 m2;
	minefunc();
	
}
