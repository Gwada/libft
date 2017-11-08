/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:31:35 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/08 16:03:03 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(newstr = (ft_strnew(len))))
		return (NULL);
	while (len--)
	{
		newstr[i] = (char)s[start + i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
