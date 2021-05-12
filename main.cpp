#include <iostream>
#include <math.h>
using namespace std;
int main() {
  float radiocirculo,areadecirculo, longituddelcirculo,metrosrecorridos,vueltas;
 printf("Ingrese el radio del circulo:");
 scanf("%f",& radiocirculo );
  areadecirculo=M_PI*pow(radiocirculo,2);
 longituddelcirculo=2*M_PI*radiocirculo;
 printf("Ingrese la cantidad de metros recorridos:");
 scanf("%f",& metrosrecorridos);
 vueltas=metrosrecorridos*longituddelcirculo;
 printf("La cantidad de vueltas dadas es de %f",vueltas);
}