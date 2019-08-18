#include <iostream>

using namespace std;

int main(){
	double H, P, m;
	cin>>P>>H;
	m=P/H;
	std::cout.precision(2);
	std::cout << std::fixed << m<<endl;
	return 0;
}