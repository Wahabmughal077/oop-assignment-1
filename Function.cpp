#include <iostream>
using namespace std;
int fact(int n)
{ 
	if (n==0||n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
int main()
{
	int n=0; int factorial=0;
	cout<<"ENTER A NUMBER...";
	cin>>n;
	factorial=fact(n);
	cout<<"FACTORIAL OF "<<n<<" is "<<factorial;
}

