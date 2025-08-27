/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbourqui <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 11:35:55 by sbourqui          #+#    #+#             */
/*   Updated: 2025/08/25 15:15:05 by sbourqui         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
        char src [] = "salut poilu";
        char dest[50];
        
        ft_strcpy(dest,src); 
        printf("source %s\n", src); 
        printf("destination %s\n", dest);
        return 0;
}
*/
