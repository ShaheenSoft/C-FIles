#include<iostream>
using namespace std;
class Time{
	int hrs;
	int mins;
	public:
		
		Time(int a,int b)
		{
			hrs=a;
			mins=b;
		}
		void display(int hrs,int mins)
		{
			int duration;
			Time t(hrs,mins);
			duration=t;
			cout<<"duration"<<duration;
			cout<<"2nd"<<endl;
			t.operator int();
			cout<<duration<<endl;
			
		}
		// operator int()
		//{
		
	//		return (hrs*60)+mins;
	//	}
};
int main()
{
	
	int hrs,mins;
	hrs=2;
	mins=3;
	
	
	
	
	return 0;
}