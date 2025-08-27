
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h> 

int main ()
{
    char dest[50] = "hola"; 
    char src[] = "worda"; 
    
    printf("%s\n", ft_strncat(dest, src, 3));
    printf ("%s\n", ft_strncat(dest, src, 20));
}*/