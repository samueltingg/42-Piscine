/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sting <sting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 08:38:23 by sting             #+#    #+#             */
/*   Updated: 2023/09/25 11:04:33 by sting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "helpa";
	char	str2[] = "helpe";
	int	result;

	result = ft_strcmp(str1, str2);

	printf ("%d\n", result);
	printf ("%d", strcmp(str1, str2));
	return (0);
}
*/
/* if s1>s2, return value positive
 * if s1<s2, return value negative */
