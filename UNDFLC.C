#include <stdio.h>

int main(){
  union{ float f; int i; } val;
  int steps;

  val.f=1.0;
  for(steps = 0; val.f != 0; val.f/=2, steps++ ){
    printf("value = 1/(2**%d) = %g, stored as %012o (octal) %08x (hex)\n",steps,val.f,val.i,val.i);
  }
}
