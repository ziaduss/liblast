/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 13:01:38 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 13:17:24 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	int		i;

	ch = c;
	i = 0;
	while (s[i] && s[i] != ch)
		i++;
	if (s[i] == ch)
		return (&((char*)s)[i]);
	return (NULL);
}
