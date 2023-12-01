/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sting <sting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:48:13 by sting             #+#    #+#             */
/*   Updated: 2023/09/25 11:08:39 by sting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
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

int main(void)
{
    char    str1[] = "help";
    char    str2[] = "helpee";
    int result;
	int	comp_amt;

	comp_amt = 4;
    result = ft_strncmp(str1, str2, comp_amt);

    printf ("%d\n", result);
    printf ("%d", strncmp(str1, str2, comp_amt));
    return (0);
}
*/
/* strncmp > compare not more than n character. */
