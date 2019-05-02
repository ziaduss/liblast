/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/17 14:43:38 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 14:59:11 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*maill;

	if (!(maill = (t_list *)malloc(sizeof(t_list) * 1)))
		return (NULL);
	if (content == NULL)
	{
		maill->content = NULL;
		maill->content_size = 0;
	}
	else
	{
		maill->content = (malloc(content_size));
		maill->content = ft_memcpy(maill->content, content, content_size);
		maill->content_size = content_size;
	}
	maill->next = NULL;
	return (maill);
}
