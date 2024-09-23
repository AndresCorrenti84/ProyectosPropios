#include <stdio.h>
using namespace std;
int calcular(char operacion, double n1, double n2);
int main (void){
	double numero1, numero2;
	char operacion;
	calcular(operacion, numero1, numero2);
}
int calcular(char operacion, double n1, double n2) {
    printf("Ingresar que operacion desea hacer (+, -, *, /): ");
    scanf("%c", &operacion);
    printf("Ingresa dos numeros: ");
    scanf("%lf %lf",&n1, &n2);

    switch(operacion){
        case '+':
            printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            break;
            
        default:
            printf("Error! Operador incorrecto.");
    }

    return 0;
}
