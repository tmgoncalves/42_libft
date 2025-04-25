/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:38:33 by tmarinho          #+#    #+#             */
/*   Updated: 2025/04/25 16:56:48 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*u_s1;
	unsigned char	*u_s2;
	size_t			counter;

	u_s1 = (unsigned char *) s1;
	u_s2 = (unsigned char *) s2;
	counter = 0;
	while (counter < n)
	{
		if (u_s1[counter] != u_s2[counter])
			return (u_s1[counter] - u_s2[counter]);
		counter++;
	}
	return (0);
}
