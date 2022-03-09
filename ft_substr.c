/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: supersko <ndionis@student.42mulhouse.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:51:11 by supersko          #+#    #+#             */
/*   Updated: 2022/03/09 17:34:42 by supersko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*return_val;

	substr = (char *) malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (start--)
		if (!*s++)
		{
			substr[0] = '\0';
			return (NULL);
		}
	return_val = substr;
	while (len-- && *s)
	{
		*substr++ = *s++;
	}
	*substr = '\0';
	return (return_val);
}

/*
//
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

// MAIN

int	main(void)
{
	char	str[100];
	char	*output;
	int		start;
	int		len;

	strcpy(str, "une chaine");
	start	= 1;
	len		= 3;
	output = ft_substr(str, start, len);
	printf("ft_substr(\"%s\", %d, %d) => [%s]\n", str, start, len, output);
}
*/
