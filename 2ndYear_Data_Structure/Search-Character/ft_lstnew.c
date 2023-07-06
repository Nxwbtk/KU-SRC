/* ******************************************************************************* */
/*                                                                                 */
/*                                                     :::     ::: :::     :::     */
/*   ft_lstnew.c                                      :+:    :+:  :+:     +:+      */
/*                                                   +:+   +:+   +:+     +:+       */
/*   By: nxwbtk <bunthakan.s@ku.th>                 +#+  +:+    +#+     +#+        */
/*                                                 +#+ #+#     +#+     +#+         */
/*   Created: 2022/08/17 23:13:08 by nxwbtk       #+#   #+#   +#+     +#+          */
/*   Updated: 2022/08/17 23:13:10 by nxwbtk      ###     ###   ########.th         */
/*                                                                                 */
/* ******************************************************************************* */

#include "easylib.h"

t_node	*ft_lstnew(char content)
{
	t_node	*ptr;

	ptr = (t_node *)malloc(sizeof(t_node));
	if (!ptr)
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}
