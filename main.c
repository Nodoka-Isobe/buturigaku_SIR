#include <stdio.h>

int main(void){
  int i;
  int t = 0;
  double dSdt;
  double dIdt;
  double dRdt;
  double beta = 0.3;  //0≦β≦1
  double gamma = 0.1;  //0≦γ≦1

  int N = 10000;
  int I =1;
  int S = N - I;
  int R = 0;
  
  double dt = 0.01;

  for(i =0; i<=200; i++){
    printf("%lf, %lf, %lf, %lf\n", t, S, I, R);

    dSdt = -beta*S*I/N;
    dIdt = beta*S*I/N-gamma*I;
    dRdt = gamma*I;
    S = S + dSdt*dt;
    I = I + dIdt*dt;
    R = R + dRdt*dt;
    t = t + dt;
  }
  return 0;
}
