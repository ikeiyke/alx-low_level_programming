
Trust@Trust-PC MINGW64 ~
$ ssh a43c84cc422c@a43c84cc422c.4a7aed94.alx-cod.online
a43c84cc422c@a43c84cc422c.4a7aed94.alx-cod.online's password:
root@a43c84cc422c:/# cd root
root@a43c84cc422c:~# cd alx-pre_course/
root@a43c84cc422c:~/alx-pre_course# ls
0x01-git  README.md  up_to_date
root@a43c84cc422c:~/alx-pre_course# cd ..
root@a43c84cc422c:~# ls
0x01_emacs  0x02_vi  alx-low_level_programming  alx-system_engineering-devops  Betty   new_school  school_is_amazing
0x02_emacs  0x03_vi  alx-pre_course             alx-zero_day                   client  school      so_cool
root@a43c84cc422c:~# alx-low_level_programming/
bash: alx-low_level_programming/: Is a directory
root@a43c84cc422c:~# cd alx-low_level_programming/
root@a43c84cc422c:~/alx-low_level_programming# ls
0x00-hello_world              0x02-functions_nested_loops  0x04-more_functions_nested_loops  0x06-pointers_arrays_strings  0x08-recursion            README.md
0x01-variables_if_else_while  0x03-debugging               0x05-pointers_arrays_strings      0x07-pointers_arrays_strings  0x12-singly_linked_lists
root@a43c84cc422c:~/alx-low_level_programming# mkdir 0x13-more_singly_linked_lists
root@a43c84cc422c:~/alx-low_level_programming# cd 0x13-more_singly_linked_lists/
root@a43c84cc422c:~/alx-low_level_programming/0x13-more_singly_linked_lists# cat > README.md
0. Print list
mandatory
Write a function that prints all the elements of a listint_t list.

Prototype: size_t print_listint(const listint_t *h);
Return: the number of nodes
Format: see example
You are allowed to use printf

GitHub repository: alx-low_level_programming
Directory: 0x13-more_singly_linked_lists
File: 0-print_listint.c

1. List length                                  File: 1-listint_len.c
mandatory
Write a function that returns the number of elements in a linked listint_t list.

Prototype: size_t listint_len(const listint_t *h);


2. Add node                             File: 2-add_nodeint.c
mandatory
Write a function that adds a new node at the beginning of a listint_t list.

Prototype: listint_t *add_nodeint(listint_t **head, const int n);

3. Add node at the end                          File: 3-add_nodeint_end.c
mandatory
Write a function that adds a new node at the end of a listint_t list.

Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

4. Free list                                            File: 4-free_listint.c
mandatory
Write a function that frees a listint_t list.

Prototype: void free_listint(listint_t *head);

5. Free                                                 File: 5-free_listint2.c
mandatory
Write a function that frees a listint_t list.

Prototype: void free_listint2(listint_t **head);

6. Pop                                                  File: 6-pop_listint.c
mandatory
Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

Prototype: int pop_listint(listint_t **head);
if the linked list is empty return 0
The function sets the head to NULL

7. Get node at index                            File: 7-get_nodeint.c
mandatory
Write a function that returns the nth node of a listint_t linked list.

Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
where index is the index of the node, starting at 0
if the node does not exist, return NULL

8. Sum list                                     File: 8-sum_listint.c
mandatory
Write a function that returns the sum of all the data (n) of a listint_t linked list.
Prototype: int sum_listint(listint_t *head);
if the list is empty, return 0
Return: the address of the new element, or NULL if it failed

9. Insert                                       File: 9-insert_nodeint.c
mandatory
Write a function that inserts a new node at a given position.
Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
where idx is the index of the list where the new node should be added. Index starts at 0
Returns: the address of the new node, or NULL if it failed
if it is not possible to add the new node at index idx, do not add the new node and return NULL

10. Delete at index                             File: 10-delete_nodeint.c
mandatory
Write a function that deletes the node at index index of a listint_t linked list.

Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
where index is the index of the node that should be deleted. Index starts at 0
Returns: 1 if it succeeded, -1 if it failed

11. Reverse list                                File: 100-reverse_listint.c
#advanced
Write a function that reverses a listint_t linked list.

Prototype: listint_t *reverse_listint(listint_t **head);
Returns: a pointer to the first node of the reversed list
You are not allowed to use more than 1 loop.
You are not allowed to use malloc, free or arrays
You can only declare a maximum of two variables in your function

12. Print (safe version)                                File: 101-print_listint_safe.c
#advanced
Write a function that prints a listint_t linked list.

Prototype: size_t print_listint_safe(const listint_t *head);
Returns: the number of nodes in the list
This function can print lists with a loop
You should go through the list only once
If the function fails, exit the program with status 98
Output format: see example

13. Free (safe version)                                 File: 102-free_listint_safe.c
#advanced
Write a function that frees a listint_t list.

Prototype: size_t free_listint_safe(listint_t **h);
This function can free lists with a loop
You should go though the list only once
Returns: the size of the list that was free’d
The function sets the head to NULL

14. Find the loop                                       File: 103-find_loop.c
#advanced
Write a function that finds the loop in a linked list.

Prototype: listint_t *find_listint_loop(listint_t *head);
Returns: The address of the node where the loop starts, or NULL if there is no loop
You are not allowed to use malloc, free or arrays
You can only declare a maximum of two variables in your function
^Z
[1]+  Stopped                 cat > README.md
root@a43c84cc422c:~/alx-low_level_programming/0x13-more_singly_linked_lists# cat > lists.h
#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
        int n;
        struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
size_t print_listint_safe(const listint_t *head);
size_t free_listint_safe(listint_t **h);
listint_t *find_listint_loop(listint_t *head);
int _putchar(char c);

#endif /*LISTS_H*/^Z
[2]+  Stopped                 cat > lists.h
root@a43c84cc422c:~/alx-low_level_programming/0x13-more_singly_linked_lists# cat > 0-print_listint.c
#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: head of linklist node
 *
 * Return: the number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
        size_t count = 0;

        while (h != NULL)
        {
                printf("%d\n", h->n);
                h = h->next;
                count++;
        }
        return (count);
}
^Z
[3]+  Stopped                 cat > 0-print_listint.c
root@a43c84cc422c:~/alx-low_level_programming/0x13-more_singly_linked_lists# cat > 1-listint_len.c
#include "lists.h"

/**
 * listint_len - the number of elements in a linked listint_t list.
 *
 * @h: head pointer
 *
 * Return: the number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
        size_t count = 0;

        while (h != NULL)
        {
        h = h->next;
                count++;
        }
        return (count);
}
^Z
[4]+  Stopped                 cat > 1-listint_len.c
root@a43c84cc422c:~/alx-low_level_programming/0x13-more_singly_linked_lists# cat > 2-add_nodeint.c
#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - add node at beginning of a listint_t list.
  *
  * @head: head of double pointer
  * @n: int add the list
  * Return: NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
        listint_t *ptr;

        if (head == NULL)
                return (NULL);
        ptr = malloc(sizeof(listint_t));
        if (ptr == NULL)
                return (NULL);
        ptr->n = n;
        ptr->next = *head;
        *head = ptr;
        return (ptr);
}
^Z
[5]+  Stopped                 cat > 2-add_nodeint.c
root@a43c84cc422c:~/alx-low_level_programming/0x13-more_singly_linked_lists# cat > 3-add_nodeint_end.c
#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - add node at end of a listint_t list.
  *
  * @head: head of double pointer
  * @n: int add the list
  * Return: NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
        listint_t *new;
        listint_t *temp;

        if (head == NULL)
                return (NULL);
        new = malloc(sizeof(listint_t));
        if (new == NULL)
                return (NULL);
        new->n = n;
        new->next = NULL;
        if (*head == NULL)
        {
        *head = new;
                return (new);
        }
        temp = *head;
        while (temp->next != NULL)
        {
                temp = temp->next;
        }
        temp->next = new;
        return (new);
}
^Z
[6]+  Stopped                 cat > 3-add_nodeint_end.c
root@a43c84cc422c:~/alx-low_level_programming/0x13-more_singly_linked_lists# cat > 4-free_listint.c
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 *
 * @head: the head of the list
 *
 * Return: NULL if error
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
