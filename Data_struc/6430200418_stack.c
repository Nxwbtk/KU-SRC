/* ******************************************************************************* */
/*                                                                                 */
/*                                                     :::     ::: :::     :::     */
/*   stack.c                                          :+:    :+:  :+:     +:+      */
/*                                                   +:+   +:+   +:+     +:+       */
/*   By: nxwbtk <bunthakan.s@ku.th>                 +#+  +:+    +#+     +#+        */
/*                                                 +#+ #+#     +#+     +#+         */
/*   Created: 2022/07/19 01:15:10 by nxwbtk       #+#   #+#   +#+     +#+          */
/*   Updated: 2022/07/19 01:15:13 by nxwbtk      ###     ###   ########.th         */
/*                                                                                 */
/* ******************************************************************************* */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int	stack[SIZE];
int	top = -1;

void    push(int value)
{
    if (top == SIZE - 1)
        printf("\nStack is Full!!!\n\n");
    else
    {
        stack[++top] = value;
        printf("\nInsertion success!!!\n\n");
    }
}

void    pop()
{
    if (top == -1)
    printf("\nStack is Empty!!!\n\n");
    else
    {
        printf("\nDeleted : %d", stack[top]);
        top--;
    }
}

void    display()
{
    if (top == -1)
        printf("\nStack is Empty!!!\n\n");
    else
    {
        printf("\nStack elements are:\n\n");
        for (int i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}

int main(void)
{
    int value;
    int choice;
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
