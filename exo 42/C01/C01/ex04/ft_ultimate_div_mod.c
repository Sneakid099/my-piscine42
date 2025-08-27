
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*#include <stdio.h>
int	main()
{
	int a = 13;
	int b = 5;

	ft_ultimate_div_mod(&a, &b);
	printf("division = %d\n", a);
	printf("modulo   = %d\n", b);
	return (0);
}