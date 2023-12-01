/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sting <sting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:14:55 by sting             #+#    #+#             */
/*   Updated: 2023/09/18 10:35:24 by sting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	if (n < 0)
		c = 'N';
	else
		c = 'P';
	write (1, &c, 1);
}

/* int	main(void)
{
	int	num;

	num = -10;
	ft_is_negative (num);
	return (0);
}
*/
