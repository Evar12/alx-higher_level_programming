#include "lists.h"

/**
 * is_palindrome - check if a linked list is a palindrome
 * @head: pointer to pointer to the first node
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
    int palindrome = 1;
    int len = get_length(*head);

    if (*head == NULL || len == 1)
        return palindrome;

    int first = 1, last = len;
    listint_t *first_node = *head, *last_node = get_last_node(*head);

    while (first < last && palindrome)
    {
        if (first_node->n != last_node->n)
            palindrome = 0;

        first++;
        last--;

        first_node = first_node->next;
        last_node = get_previous_node(*head, last_node);
    }

    return palindrome;
}

/**
 * get_length - get length of a linked list
 * @head: head node
 * Return: length of the linked list or 0 if none
 */
int get_length(listint_t *head)
{
    int count = 0;

    while (head != NULL)
    {
        count++;
        head = head->next;
    }

    return count;
}

/**
 * get_last_node - get the last node of a linked list
 * @head: head node
 * Return: last node of the linked list
 */
listint_t *get_last_node(listint_t *head)
{
    while (head != NULL && head->next != NULL)
    {
        head = head->next;
    }

    return head;
}

/**
 * get_previous_node - get the node before a given node in a linked list
 * @head: head node
 * @target: the target node
 * Return: the node before the target node
 */
listint_t *get_previous_node(listint_t *head, listint_t *target)
{
    while (head != NULL && head->next != target)
    {
        head = head->next;
    }

    return head;
}
