
void	ft_swap(int*a, int*b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
#include <stdio.h>
/*int main () 
{
    int x; 
    int y; 
    
    x = 69;
    y = 29;

    printf ("avant le swap: x = %d, y = %d\n", x, y);
    ft_swap(&x, &y);
    printf ("apres swap : x = %d, y = %d\n", x, y);
}