/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sting <sting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:35:17 by sting             #+#    #+#             */
/*   Updated: 2023/09/25 11:19:07 by sting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char    str1[10] = "Call ";
    char    str2[] = "911.";
	char	str3[10] = "Call ";
	unsigned int	num;

	num = 1;
    ft_strncat (str1, str2, num);
    printf ("%s\n", str1);
    printf ("%s", strncat(str3, str2, num));
    return (0);
}
*/
