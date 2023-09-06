#include "header.hpp"

float calcularAreaTriangulo(float base, float altura){
    float area;

    area = (base * altura) / 2;

    return area;
}
float calcularAreaCirculo(float raio, float pi){
    float area;

    area = pi * (raio * raio);

    return area;
}
float calcularAreaQuadrado(float base, float altura){
    float area;

    area = base * altura;

    return area;
}
float calcularAreaRetangulo(float base, float altura){
    float area;

    area = base * altura;

    return area;
}