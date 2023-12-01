/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sting <sting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:12:32 by sting             #+#    #+#             */
/*   Updated: 2023/09/20 17:12:33 by sting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
    char    string1[3];
    char    string2[5] = "\x01\x02\x03\x04";
    char    *string3;
    int result1;
    int result2;
    int result3;

	string1[0] = 32;
	string1[1] = 34;
	string1[2] = '\0';
    string3 = "";

    result1= ft_str_is_printable(string1);
    result2 = ft_str_is_printable(string2);
    result3 = ft_str_is_printable(string3);

    printf ("%d\n", result1);
    printf ("%d\n", result2);
    printf ("%d", result3);
    return (0);
}
*/
