/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sting <sting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:27:43 by sting             #+#    #+#             */
/*   Updated: 2023/09/25 10:51:35 by sting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ori_len_dest;

	ori_len_dest = ft_strlen(dest);
	i = ft_strlen(dest);
	j = 0;
	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	while (((ori_len_dest + j) < size - 1) && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ori_len_dest + ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char    str1[9] = "Call_";
    char    str2[] = "Tom";
	char	str3[9] = "Call_";
	unsigned int	size;

	size = 7;
    printf ("mine: %i\n", ft_strlcat (str1, str2, size));
    printf ("%s\n", str1);
    printf ("ori : %lu\n", strlcat(str3, str2, size));
	printf ("%s\n", str3);
    return (0);
}
*/
/* line 36: include '- 1' ,else when assing \0 to dest[i], 
 * \0 will be assigned one character pass dest buffer */

/* line 36: include "src[j]", else src have not enough char to copy over */

/* if size < strlen(dest), return (size + strlen(src) 
 * if size >= strlen(dest), return (strlen(dest) + strlen(src))
 * if size > dest buffer size, ERROR */
