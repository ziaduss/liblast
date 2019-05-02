/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 13:03:24 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/14 19:44:10 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	char	*dest;

	if (s)
	{
		start = 0;
		end = ft_strlen(s) - 1;
		while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
			start++;
		while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
			end--;
		if (end + 1 == 0)
		{
			dest = (char*)malloc(sizeof(char));
			*dest = '\0';
			return (dest);
		}
		dest = ft_strsub(s, start, end - start + 1);
		return (dest);
	}
	return ((char*)s);
}
