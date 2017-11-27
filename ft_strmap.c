/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 15:39:39 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/23 10:22:29 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	size;
	char	*fresh;
	int		i;

	size = ft_strlen((char *)s);
	if (!(fresh = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	if (!s || !f)
		return (0);
	while (s[i])
	{
		fresh[i] = (*f)(s[i]);
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
