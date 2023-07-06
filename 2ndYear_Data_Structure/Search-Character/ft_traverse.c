/* ******************************************************************************* */
/*                                                                                 */
/*                                                     :::     ::: :::     :::     */
/*   ft_traverse.c                                    :+:    :+:  :+:     +:+      */
/*                                                   +:+   +:+   +:+     +:+       */
/*   By: nxwbtk <bunthakan.s@ku.th>                 +#+  +:+    +#+     +#+        */
/*                                                 +#+ #+#     +#+     +#+         */
/*   Created: 2022/08/07 22:34:49 by nxwbtk       #+#   #+#   +#+     +#+          */
/*   Updated: 2022/08/07 22:34:52 by nxwbtk      ###     ###   ########.th         */
/*                                                                                 */
/* ******************************************************************************* */

#include "easylib.h"

void    ft_traverse(t_node *head)
{
    t_node  *tmp;

    if (!(head))
    {
        printf("List is empty\n");
        return ;
    }
    tmp = head;
    if (tmp)
    {
        while (tmp)
        {
            printf("%c --> ", tmp->content);
            tmp = tmp->next;
        }
        printf("HEAD\n");
        tmp = head;
    }
}
