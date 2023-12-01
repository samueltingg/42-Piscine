/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sting <sting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:55:06 by sting             #+#    #+#             */
/*   Updated: 2023/09/20 14:32:26 by sting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
    char    *string1;
    char    *string2;
    char    *string3;
    int result1;
    int result2;
    int result3;

    string1 = "aaasdfrld";
    string2 = "123wer4";
    string3 = "";
    result1= ft_str_is_lowercase(string1);
    result2 = ft_str_is_lowercase(string2);
    result3 = ft_str_is_lowercase(string3);

    printf ("%d\n", result1);
    printf ("%d\n", result2);
    printf ("%d", result3);
    return (0);
}
*/
