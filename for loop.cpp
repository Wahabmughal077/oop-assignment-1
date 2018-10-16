#include <iostream>
using namespace std;
int main()
{
	int n,t;
	cout<<"Enter number for table ";
	cin>>t;
	for(n=1;n<=10;n++)
	{
		cout<<t<<"X"<<n<<"="<<t*n<<endl;
	}
	return 0;
}
