#include <stdio.h>
#include <math.h>

int main(){

  //definição de variáveis

  double c, t, dt, rx, ry, vx, vy, v0, ax, ay, ang, g, bm;

  //alocação de valores iniciais

  t = 0;
  ang = 60;
  v0 = 100;
  dt = 0.01;
  g = 10;
  bm = 0.9;  

  rx = 0;
  ry = 0;
  vx = v0 * cos(ang * 3.141592/180.0);
  vy = v0 * sin(ang * 3.141592/180.0);
  
  //repetição
  
  while(ry >= 0){

    printf("%11.6f %11.6f %11.6f %11.6f %11.6f \n", t, rx, ry, vx, vy);

	t = t + dt;
   
    ax = 0.0 - bm * vx;
    ay = - g - bm * vy;

    rx = rx + vx * dt;
    vx = vx + ax * dt;

    ry = ry + vy * dt;
    vy = vy + ay * dt;

   
    
  }

  return 0;

}
