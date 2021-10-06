#include<iostream>
using namespace std;



class parent
{
	private:
		int y;
		
	protected:
		int z;
	public:
		int x;
				
int display()
{
	y=50;
	return y;
}
	
};

class derived : public parent
{
public:
void set(int a)
{
z=a;
}
void show()
{
cout<<"Z="<<z<<endl;
}
};

int main()
{
parent obj;
derived c;
obj.x=60;
cout<<"x="<<obj.x<<endl;
cout<<"y="<<obj.display()<<endl;
c.set(40);
c.show();
return 0;
}
