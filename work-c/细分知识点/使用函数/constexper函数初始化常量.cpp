#include <iostream>

using namespace std;
constexpr int get_size() {
	return 20;
}

int main()
{
	constexpr int foo = get_size();//���в�������constexpr ��������һ����constexpr

	return 0;
}