
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*#include <stdio.h>
int main ()
{
    int a;
    int b; 
    int d;
    int m;
    
    a = 13;
    b = 5;
    ft_div_mod (a, b, &d, &m);
    printf ("a = %d, b = %d\n", a, b);
    printf ("division = %d\n", d);
    printf("modulo = %d\n", m);
}  