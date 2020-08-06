#include"prime.h"
#include <iostream>
using namespace std;
int main()
{
	int n=10;
	bool x = isPrime(n);
	if(x==true)
	{
		cout<<"Yes "<<n<<" is a prime number"<<endl;
	}
	else
	{
		cout<<"No "<<n<<" is not a prime number"<<endl;
	}

	return 1;
}
