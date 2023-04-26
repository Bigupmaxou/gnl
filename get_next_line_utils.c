/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxipeti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 19:17:31 by maxipeti          #+#    #+#             */
/*   Updated: 2023/04/25 16:25:05 by maxipeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dest;
	size_t	i;

	len = ft_strlen(s);
	dest = (char *)malloc(sizeof (char) * (len +1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
        char    *dst;
        int             i;
        int             j;

        if (!s1 || !s2)
                return (NULL);
        i = 0;
        j = 0;
        dst = malloc(sizeof (char) * (ft_strlen(s1) +ft_strlen(s2) + 1));
        if (dst == NULL)
                return (NULL);
        while (s1[i] != '\0')
        {
                dst[i] = s1[i];
                i++;
        }
        while (s2[j] != '\0')
        {
                dst[i + j] = s2[j];
                j++;
        }
        dst[i + j] = '\0';
        return (dst);
}
