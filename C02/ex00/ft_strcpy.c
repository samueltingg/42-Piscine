/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sting <sting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:07:19 by sting             #+#    #+#             */
/*   Updated: 2023/09/20 10:18:48 by sting            ###   ########.fr       */
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

/*#include <unistd.h>

int	main(void)
{
	char	source[] = "Hello";
	char	destination[6];

	ft_strcpy(destination, source);
	write (1, source, 5);
	write (1, "\n", 1);
	write (1, destination, 5);
}
*/
