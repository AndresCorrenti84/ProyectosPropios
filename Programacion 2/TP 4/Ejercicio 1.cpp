#include <stdio.h>

int main() {
int w, z;
int *p, *q; 
w = 20; 
p = &z; 
q = p; 
*q = 7; 
z += *q; 
w -= *p; 
p = &w; 
*q += *p; 
z += *(&w); 
p = q; 
*p = *q;
printf("%d %d %p %p\n", w, z, *p, *q);
return 0;
}
