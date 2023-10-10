#include<iostream>
using namespace std;

int main() {
	cout<<boolalpha<<"Logical AND(&&)"
	<<"\nfalse && false:"<<(0&&0)
	<<"\nfalse && true:"<<(0&&1)
	<<"\ntrue && false:"<<(1&&0)
	<<"\ntrue && true:"<<(1&&1)<<endl<<endl;
	cout<<"Logical OR(||)"
	<<"\nfalse || false:"<<(false||false)
	<<"\nfalse || true:"<<(false || true)
	<<"\ntrue || false:"<<(true || false)
	<<"\ntrue || true:"<<(true || true)<<endl<<endl;
	
	cout<<"Logical NOT(!)"
	<<"\n!false:"<<(!false)
	<<"\n!true:"<<(!true)<<endl;
	
	return 0;
}
