#include<stdio.h>
#include<string.h>


/*int i = 0;
p()    { printf("%d\n", ++i); }
a()    { p();p();p();p();p(); }
b()    { a();a();a();a();a(); }
c()    { b();b();b();b();b(); }
main() { c();c();c();c();c();c();c();c(); return 0; }

*/

#include <stdio.h>

int f(int val) {
    --val && f(val);
    return printf( "%d\n", val+1);
}

void main(void) {
    f(1000);
}
