/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sting <sting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:53:38 by sting             #+#    #+#             */
/*   Updated: 2023/09/25 11:32:48 by sting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (*str)
	{
		i = 0;
		while (to_find[i] != '\0' && (str[i] == to_find[i]))
		{
			i++;
		}
		if (to_find[i] == '\0')
			return (str);
		str++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char    str1[18] = "bacon or egg";
    char    str2[] = "ort";
    char    str3[18] = "bacon or egg";

    printf ("replica      : %s\n", ft_strstr(str1, str2));
    printf ("original func: %s", strstr(str3, str2));
    return (0);
}
*/

/* line 27: only 1 int variable needed,
 *		position[0] of str moves due to incrementation
 * line 28: if statement should be within while(*str) & before str++,
 * 		so that func returns (str) straight away when match is found
 */
