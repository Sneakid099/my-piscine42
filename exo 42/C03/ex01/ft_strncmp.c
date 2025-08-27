# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft                                                 :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbourqui <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/26 16:36:20 by sbourqui          #+#    #+#              #
#    Updated: 2025/08/26 16:36:27 by sbourqui         ###   ####lausanne.ch    #
#                                                                              #
# **************************************************************************** #

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i + 1 < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
