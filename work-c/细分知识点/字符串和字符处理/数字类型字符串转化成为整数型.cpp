#include <iostream>
#include <sstream>//��Ҫ
#include <string>

using namespace std;

int main()
{
	string a = "123";
	
	int b = 0;
	stringstream ss;
	ss<<a;
	ss>>b;

	cout<<b+1<<endl;

	return 0;
}