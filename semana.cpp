#include "iostream"
int main()
{
int a;
std::cout<<"ingrese un numero\n";
std::cin>> a;
switch(a)
{
	case 1: std::cout<<"lunes";
	break;
		case 2: std::cout<<"martes";
	break;
		case 3: std::cout<<"miercoles";
	break;
		case 4: std::cout<<"jueves";
	break;
		case 5: std::cout<<"viernes";
	break;
		case 6: std::cout<<"sabado";
	break;
		case 7: std::cout<<"domingo";
	break;

	default:std::cout<<"no es un dia de la semana";
}

return 0;
}
