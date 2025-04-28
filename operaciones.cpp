#include "iostream"
int main()
{
int a;
int e;
int l;
int n;
std::cout<<"suma=1\n";
std::cout<<"resta=2\n";
std::cout<<"multiplicacion=3\n";
std::cout<<"division=4\n";
std::cout<<"ingrese la opcion que desearealizar\n";
std::cin>> a;
switch(a)
{
	case 1: std::cout<<"ingrese dos numeros\n";
	std::cin>> e;
	std::cin>> l;
	n=e+l
	std::cout<<"el total de la suma es de "<<n<<std::endl;
	break;
		case 2: std::cout<<"ingrese dos numeros\n";
	std::cin>> e;
	std::cin>> l;
	n=e-l
	std::cout<<"el total de la resta es de "<<n<<std::endl;
	break;
		case 3: std::cout<<"ingrese dos numeros\n";
	std::cin>> e;
	std::cin>> l;
	n=e*l
	std::cout<<"el total de la multiplicacion es de "<<n<<std::endl;
	break;
		case 4: std::cout<<"ingrese dos numeros\n";
	std::cin>> e;
	std::cin>> l;
	n=e/l
	std::cout<<"el total de la division es de "<<n<<std::endl;
	break;
	default:std::cout<<"no esta dentro de las opciones";
}

return 0;
}
