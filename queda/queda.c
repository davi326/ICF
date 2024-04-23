#include <stdio.h>
#include <cmath>

int main(){

  //definição de variáveis

  double t, dt, x, v, x, g;
  
  //alocação de valores iniciais

  dt = 0.2;
  g = 10;
  r = 0;
  v = 0;
  a = 0;  
  //repetição
  
  for(t = 0; t <= 5 + dt / 2.0; t = t + dt){

    printf("%f | %f | %f \n", t, x, v);

    a = g;
    x = x + v * dt;
    v = v + a * dt;
    
  }

  return 0;

}
