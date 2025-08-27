# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft                                                 :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbourqui <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/26 16:34:16 by sbourqui          #+#    #+#              #
#    Updated: 2025/08/26 16:34:25 by sbourqui         ###   ####lausanne.ch    #
#                                                                              #
# **************************************************************************** #

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
