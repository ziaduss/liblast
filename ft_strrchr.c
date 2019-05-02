/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 13:21:08 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 13:35:11 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t len;
	size_t i;

	len = ft_strlen(s);
	i = 0;
	while (i <= len)
	{
		if (s[len - i] == (unsigned char)c)
			return ((char *)s + len - i);
		i++;
	}
	return (NULL);
}
