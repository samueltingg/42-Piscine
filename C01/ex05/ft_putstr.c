/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sting <sting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:16:21 by sting             #+#    #+#             */
/*   Updated: 2023/09/19 16:28:51 by sting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "asdfsadfadsfadsfasdf adf";
	ft_putstr(str);
}
*/
