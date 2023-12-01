/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sting <sting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:07:54 by sting             #+#    #+#             */
/*   Updated: 2023/09/19 11:53:41 by sting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_int(int num)
{
	char	c;

	c = '0' + num;
	write (1, &c, 1);
}

void	print_all(int dig1, int dig2, int dig3)
{
	print_int(dig1);
	print_int(dig2);
	print_int(dig3);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i +1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				print_all(i, j, k);
				if (i < 7)
				{
					write (1, ", ", 2);
				}
				k++;
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
