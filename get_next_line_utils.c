/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksellami <ksellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:05:52 by ksellami          #+#    #+#             */
/*   Updated: 2024/01/17 12:56:16 by ksellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	int	i;

	i = 0;
	if (!string)
		return (NULL);
	while (string[i] != '\0')
	{
		if (string[i] == searchedChar)
			return ((char *)(string + i));
		i++;
	}
	return (NULL);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count += 1;
		str += 1;
	}
	return (count);
}

char	*ft_strdup(char *s1)
{
	char	*p;
	int		l;
	int		i;

	i = 0;
	l = ft_strlen(s1) + 1;
	p = (char *) malloc (l);
	if (!p)
		return (NULL);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	char	*k;
	int		j;

	if (!s1)
		return (ft_strdup(s2));
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	k = (char *) malloc (i + j + 1);
	if (!k)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		k[j++] = s1[i++];
	i = 0;
	while (s2[i])
		k[j++] = s2[i++];
	k[j] = '\0';
	free(s1);
	s1 = NULL;
	return (k);
}
