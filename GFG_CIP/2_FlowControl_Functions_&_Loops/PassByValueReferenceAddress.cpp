/*
https://www.includehelp.com/cpp-tutorial/argument-passing-with-its-types.aspx

C++ supports three types of argument passing:

Pass by Value : we pass argument to the function at calling position. That does not reflect changes into parent function. Scope of modification is reflected only in called function.
Pass by Reference : e pass argument to the function at calling position. That reflects changes into parent function. Scope of modification is reflected in calling function also.
Pass by Address : we pass argument to the function at calling position. That reflects changes into parent function. Scope of modification is reflected in calling function also.
*/

#include <iostream>
using namespace std;

void fun_V(int a)
{
	a=20;
}

void fun_R(int &b)
{
	b=20;
}

void fun_P(int *b)
{
	*b=20;
}


int main()
{
	int a =10;

	fun_V(a);

	cout<<"Value of A: "<<a<<endl;

    fun_R(a);

	cout<<"Value of A: "<<a<<endl;

    fun_P(&a);
	
	cout<<"Value of A: "<<a<<endl;

	return 0;
}
