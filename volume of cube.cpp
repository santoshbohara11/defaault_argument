//WAP to find the volume of cube using the deafult argument
#include<iostream>
using namespace std;

void volume(float l=30,float b=50, float h=70)
{
	float v=0;
	v=(l*b*h);
	cout<<"volume of cube ="<<v;
}
int main()
{
	volume(2.4,5.7,8.9);
	return 0;
}
