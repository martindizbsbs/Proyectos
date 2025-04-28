#include "iostream"
int main()
{
	int a;
	int e;
	std::cout<<"ingrese un numero\n";
	std::cin>>a;
	while(a>0)
	{
		e=a+e;
		std::cout<<"ingrese un numero\n";
		std::cin>>a;
		
	}
	std::cout<<"el total de los numeros ingresados fue de:  "<<e<<std::endl;
	return 0;
}
