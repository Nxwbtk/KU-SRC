/* ******************************************************************************* */
/*                                                                                 */
/*                                                     :::     ::: :::     :::     */
/*   ft_lstdelete.c                                   :+:    :+:  :+:     +:+      */
/*                                                   +:+   +:+   +:+     +:+       */
/*   By: nxwbtk <bunthakan.s@ku.th>                 +#+  +:+    +#+     +#+        */
/*                                                 +#+ #+#     +#+     +#+         */
/*   Created: 2022/08/18 17:38:13 by nxwbtk       #+#   #+#   +#+     +#+          */
/*   Updated: 2022/08/18 17:38:15 by nxwbtk      ###     ###   ########.th         */
/*                                                                                 */
/* ******************************************************************************* */

#include "easylib.h"

void	ft_lstdelete(t_node **lst, int c)
{
	t_node	*tmp;
	t_node	*del;

	tmp = *lst;
	while (tmp && tmp->content != (char)c)
		tmp = tmp->next;
	if (tmp && tmp->content == (char)c)
	{
		del = tmp;
		if (del == *lst) // edit head's address
			*lst = del->next;
		else //edit middle node
		{
			tmp = *lst;
			while (tmp->next != del)
				tmp = tmp->next;
			if (tmp->next == del)
				tmp->next = del->next;
		}
		free(del);
	}
}
