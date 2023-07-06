/* ******************************************************************************* */
/*                                                                                 */
/*                                                     :::     ::: :::     :::     */
/*   ft_search.c                                      :+:    :+:  :+:     +:+      */
/*                                                   +:+   +:+   +:+     +:+       */
/*   By: nxwbtk <bunthakan.s@ku.th>                 +#+  +:+    +#+     +#+        */
/*                                                 +#+ #+#     +#+     +#+         */
/*   Created: 2022/08/17 23:41:34 by nxwbtk       #+#   #+#   +#+     +#+          */
/*   Updated: 2022/08/17 23:41:35 by nxwbtk      ###     ###   ########.th         */
/*                                                                                 */
/* ******************************************************************************* */

#include "easylib.h"

int	ft_search(t_node *lst, int c)
{
	int	count;

	count = 0;
	while (lst)
	{
		if (lst->content == (char)c)
		{
			count++;
			return (count);
		}
		count++;
		lst = lst->next;
	}
	return (0);
}