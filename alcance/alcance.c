#include <stdio.h>
#include <math.h>

int main(){

  //definição de variáveis

  double t, dt, rx, ry, vx, vy, v0, ax, ay, dang, ang, g, bm;

  //loop ang

  dang = 15;

  for(ang = 0; ang <= 90; ang = ang + dang){

  t = 0;
  v0 = 100;
  dt = 0.1;
  g = 10;
  rx = 0;
  ry = 0;
  vx = v0 * cos(ang * 3.141592/180.0);
  vy = v0 * sin(ang * 3.141592/180.0);
  bm = 0; 
 
  //repetição
  
  while(ry >= 0){

    printf("%11.6f %11.6f %11.6f %11.6f %11.6f %11.6f \n", ang, t, rx, ry, vx, vy);

	t = t + dt;

    ax = 0.0 - bm * vx;
    ay = -g - bm * vy;

    rx = rx + vx * dt;
    vx = vx + ax * dt;

    ry = ry + vy * dt;
    vy = vy + ay * dt;
    
    //if(ry < 0) break;

  }}

  return 0;

}
