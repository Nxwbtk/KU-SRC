/* ******************************************************************************* */
/*                                                                                 */
/*                                                     :::     ::: :::     :::     */
/*   ft_lstadd_back.c                                 :+:    :+:  :+:     +:+      */
/*                                                   +:+   +:+   +:+     +:+       */
/*   By: nxwbtk <bunthakan.s@ku.th>                 +#+  +:+    +#+     +#+        */
/*                                                 +#+ #+#     +#+     +#+         */
/*   Created: 2022/08/17 23:12:40 by nxwbtk       #+#   #+#   +#+     +#+          */
/*   Updated: 2022/08/17 23:12:43 by nxwbtk      ###     ###   ########.th         */
/*                                                                                 */
/* ******************************************************************************* */

#include "easylib.h"

void	ft_lstadd_back(t_node *lst, t_node *new)
{
	if (lst && new)
	{
		if (!(lst))
			lst = new;
		else
		{
			lst = ft_lstlast(lst);
			lst->next = new;
		}
	}
}
