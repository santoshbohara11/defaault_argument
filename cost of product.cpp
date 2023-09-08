//WAP to calculate the total cost of the product
#include<iostream>
using namespace std;
void calculate(int q=8,float p=600)
{
	float cost;
	cost=(q*p);
	cout<<"the total cost of product ="<<cost;
}
int main()
{
	calculate(10,40);
	return 0;
}
