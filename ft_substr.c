/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:40:38 by tmarinho          #+#    #+#             */
/*   Updated: 2025/05/09 16:34:02 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	counter;

	if (((size_t) start + len) > ft_strlen(s))
		len = ft_strlen(s) - start;
	counter = 0;
	str = malloc(len * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	while (counter < len && s[start] != '\0')
	{
		str[counter] = s[start];
		counter++;
		start++;
	}
	str[counter] = '\0';
	return (str);
}
