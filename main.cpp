#include <cstdio>
#include "sum.h"

int main() {
    int n;
    scanf("%256d",n);
    int s = sum(n);
    printf("sum  = %d\n", s);    
}
