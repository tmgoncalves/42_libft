/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:35:30 by tmarinho          #+#    #+#             */
/*   Updated: 2025/04/30 18:12:03 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	counter;
	size_t	chr;
	size_t	aux;

	counter = 0;
	if (!*needle)
		return ((char *) &haystack[0]);
	while (counter < len)
	{
		chr = 0;
		if (haystack[counter] == needle[chr])
		{
			aux = counter;
			while (haystack[counter] == needle[chr] && counter < len)
			{
				if (needle[chr + 1] == '\0')
					return ((char *) &haystack[aux]);
				counter++;
				chr++;
			}
			counter--;
		}
		counter++;
	}
	return (NULL);
}
