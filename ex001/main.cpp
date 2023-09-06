#include <iostream>
#include <cstring>
#include <iomanip>
#include "header.hpp"

using namespace std;

const float PI = 3.1415;

int main(int argc, char *argv[]){

    cout << fixed << setprecision(3);

    char *op = argv[1];
    float area, base, altura, raio;

    if(strcmp(op, "triangulo") == 0){
        cout << "Informe o valor da base e da altura em m²: " << endl;
        cin >> base >> altura;

        area = calcularAreaTriangulo(base, altura);
    } else if(strcmp(op, "circulo") == 0){
        cout << "Informe o valor do raio em m²: ";
        cin >> raio;

        area = calcularAreaCirculo(raio, PI);
    } else if(strcmp(op, "quadrado") == 0){
        cout << "Informe o valor da base e da altura em m²: " << endl;
        cin >> base >> altura;

        area = calcularAreaQuadrado(base, altura);
    } else if(strcmp(op, "retangulo") == 0){
        cout << "Informe o valor da base e da altura em m²: " << endl;
        cin >> base >> altura;

        area = calcularAreaRetangulo(base, altura);
    }

    cout << "Área: " << area << "m²" << endl;

    return 0;
}
