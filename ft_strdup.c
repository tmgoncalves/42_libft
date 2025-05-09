/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:02:37 by tmarinho          #+#    #+#             */
/*   Updated: 2025/05/08 20:22:34 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		counter;

	counter = 0;
	ptr = malloc(ft_strlen(s1) * sizeof(char) + 1);
	while (s1[counter] != '\0')
	{
		ptr[counter] = s1[counter];
		counter++;
	}
	ptr[counter] = '\0';
	return (ptr);
}
