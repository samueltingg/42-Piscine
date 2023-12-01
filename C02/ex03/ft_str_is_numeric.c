/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sting <sting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:47:40 by sting             #+#    #+#             */
/*   Updated: 2023/09/20 12:50:43 by sting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
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

    string1 = "Wa123aa%^*sdfrld";
    string2 = "1231";
    string3 = "";
    result1 = ft_str_is_numeric(string1);
    result2 = ft_str_is_numeric(string2);
    result3 = ft_str_is_numeric(string3);

    printf ("%d\n", result1);
    printf ("%d\n", result2);
    printf ("%d", result3);
    return (0);
}
*/
