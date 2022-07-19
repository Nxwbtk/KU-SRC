/* ******************************************************************************* */
/*                                                                                 */
/*                                                     :::     ::: :::     :::     */
/*   linkedlist.c                                     :+:    :+:  :+:     +:+      */
/*                                                   +:+   +:+   +:+     +:+       */
/*   By: nxwbtk <bunthakan.s@ku.th>                 +#+  +:+    +#+     +#+        */
/*                                                 +#+ #+#     +#+     +#+         */
/*   Created: 2022/07/19 01:38:46 by nxwbtk       #+#   #+#   +#+     +#+          */
/*   Updated: 2022/07/19 01:38:50 by nxwbtk      ###     ###   ########.th         */
/*                                                                                 */
/* ******************************************************************************* */

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int			data;
	struct node	*next;
}   node;

node *top = NULL;

void	push(int value)
{
	node *newnode;
	newnode = malloc(sizeof(node));
	newnode->data = value;
	if (top == NULL)
		newnode->next = NULL;
	else
		newnode->next = top;
	top = newnode;
	printf("\nInsertion is Success!!\n");
}

void	pop(void)
{
	if (top == NULL)
		printf("\nStack is Empty!!!\n");
	else
	{
		node *temp = top;
		printf("\nDeleted element: %d\n", temp->data);
		top = temp->next;
		free(temp);
	}
}

void	display()
{
	if (top == NULL)
		printf("\nStack is Empty!!!\n");
	else
	{
		node *temp = top;
		while (temp->next != NULL)
		{
			printf("%d--->", temp->data);
			temp = temp->next;
		}
		printf("%d--->NULL\n\n", temp->data);
	}
}

int main(void)
{
    int value;
    int choice;
	printf("\n::Stack using Linked List::\n");
    while (1)
    {
        printf("\n\n*****MENU*****\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
			system ("clear");
			printf("Enter the value to be insert: ");
            scanf("%d", &value);
            push(value);
            display();
            break;
        case 2:
			system ("clear");
			pop();
            display();
            break;
        case 3:
			system ("clear");
			display();
			break;
        case 4: 
			exit(0);
		default:
			printf("\nWrong selection!!! Try again!!!");
			break;
		}
	}
}
