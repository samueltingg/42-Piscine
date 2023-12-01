/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sting <sting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:14:13 by sting             #+#    #+#             */
/*   Updated: 2023/09/20 17:52:30 by sting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{	
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
#include <unistd.h>

int	main(void)
{
	char	string[] = "AbCdEfr";
	ft_strupcase(string);
	write (1, string, 7);
	return (0);
}
*/
//line 22 diff of 'a' & 'A' is 32
