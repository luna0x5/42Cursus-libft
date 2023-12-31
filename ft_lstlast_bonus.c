/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoukit <hmoukit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:45:01 by hmoukit           #+#    #+#             */
/*   Updated: 2023/11/15 16:09:59 by hmoukit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;
	t_list	*last;

	if (!lst)
		return (NULL);
	current = lst;
	last = NULL;
	while (current != NULL)
	{
		last = current;
		current = current -> next;
	}
	return (last);
}
