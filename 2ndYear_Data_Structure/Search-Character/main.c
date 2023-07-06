/* ******************************************************************************* */
/*                                                                                 */
/*                                                     :::     ::: :::     :::     */
/*   main.c                                           :+:    :+:  :+:     +:+      */
/*                                                   +:+   +:+   +:+     +:+       */
/*   By: nxwbtk <bunthakan.s@ku.th>                 +#+  +:+    +#+     +#+        */
/*                                                 +#+ #+#     +#+     +#+         */
/*   Created: 2022/08/01 16:31:29 by nxwbtk       #+#   #+#   +#+     +#+          */
/*   Updated: 2022/08/01 16:31:30 by nxwbtk      ###     ###   ########.th         */
/*                                                                                 */
/* ******************************************************************************* */

#include "easylib.h"

int main(void)
{
	float	menu;
	char	any;
	t_node	*lst;
	int		i;

	lst = NULL;
    ft_welcome();
	main_menu:
	menu = ft_menu();
	if (menu == 1)
	{
		ft_traverse(lst);
		printf("Press anykey to continue...");
		scanf(" %c", &any);
		goto main_menu;
	}
	else if (menu == 2)
	{
		t_node	*last;

		if (lst)
		{
			last = ft_lstlast(lst);
			printf("Last node is %c\n", last->content);
		}
		else
			printf("List is empty!!!\n");
		goto main_menu;
	}
	else if (menu == 3)
	{
		char		new[BUFF_SIZE];
		t_node		*newlst;

		printf("Please enter character: ");
		scanf("%s", new);
		i = 0;
		while (new[i])
		{
			if (!lst)
				lst = ft_lstnew(new[i]);
			else
			{
				newlst = ft_lstnew(new[i]);
				ft_lstadd_back(lst, newlst);
			}
			i++;
		}
		printf("Add done\n");
		system("sleep 0.5 && (clear || cls)");
		goto main_menu;
	}
	else if (menu == 4)
	{
		char	find[2];
		int		i_find;

		printf("Enter character to find: ");
		scanf("%s", find);
		system("cls || clear");
		i_find = ft_search(lst, find[0]);
		if (i_find)
		{
			ft_traverse(lst);
			printf("Found at index %d !!!\n", i_find);
		}
		else
			printf("Character not found in string.\n");
		printf("Press any key to continue...");
		scanf(" %c", &any);
		system("clear || cls");
		goto main_menu;
	}
	else if (menu == 5)
	{
		int	i_find;

		if (!lst)
		{
			printf("List is empty. Please try again.\n");
			system("sleep 1.3 && (clear || cls)");
			goto main_menu;
		}
		ft_traverse(lst);
		char	find[2];

		printf("Enter character to delete: ");
		scanf("%s", find);
		i_find = ft_search(lst, find[0]);
		if (!i_find)
		{
			printf("Character isn't in the string. Please try again.\n");
			system("sleep 1.3 && (clear || cls)");
			goto main_menu;
		}
		ft_lstdelete(&lst, find[0]);
		ft_traverse(lst);
		printf("Press Any key to continue...");
		scanf(" %c", &any);
		system("cls || clear");
		goto main_menu;
	}
	else if (menu == 6)
		ft_goodbye();
	else
	{
		printf("Please enter Only 1-6!!!\n");
		system("sleep 2.0");
		system("clear || cls");
		goto main_menu;
	}
}
