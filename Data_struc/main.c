/* ******************************************************************************* */
/*                                                                                 */
/*                                                     :::     ::: :::     :::     */
/*   main.c                                           :+:    :+:  :+:     +:+      */
/*                                                   +:+   +:+   +:+     +:+       */
/*   By: nxwbtk <bunthakan.s@ku.th>                 +#+  +:+    +#+     +#+        */
/*                                                 +#+ #+#     +#+     +#+         */
/*   Created: 2022/07/11 14:05:36 by nxwbtk       #+#   #+#   +#+     +#+          */
/*   Updated: 2022/07/11 14:05:38 by nxwbtk      ###     ###   ########.th         */
/*                                                                                 */
/* ******************************************************************************* */


#include <stdio.h>
#include <stdlib.h>

int main()
{
struct node
{
  int data;
  struct node *next;
};

/* Initialize nodes */
struct node *head;
struct node *one = NULL;
struct node *two = NULL;
struct node *three = NULL;

/* Allocate memory */
one = malloc(sizeof(struct node));
two = malloc(sizeof(struct node));
three = malloc(sizeof(struct node));

/* Assign data values */
one->data = 1;
two->data = 2;
three->data = 3;

/* Connect nodes */
one->next = two;
two->next = three;
three->next = NULL;

/* Save address of first node in head */
head = one;

struct node *newNode;
newNode = malloc(sizeof(struct node));
newNode->data = 55;
int i,position =3;

struct node *temp = head;
for(i=2; i < position; i++) {
    if(temp->next != NULL) {
        temp = temp->next;
    }
}
newNode->next = temp->next;
temp->next = newNode;

//print
temp = head;
printf("\n\nList elements are - \n");
while(temp != NULL)
{
     printf("%d --->",temp->data);
     temp = temp->next;
}
}
