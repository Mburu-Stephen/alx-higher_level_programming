int check_cycle(listint_t *list)
{
    listint_t *tortoise, *hare;

    if (list == NULL)
        return (0);

    tortoise = list;
    hare = list->next;

    while (hare != NULL && hare->next != NULL)
    {
        if (hare == tortoise)
            return (1);

        hare = hare->next->next;
        tortoise = tortoise->next;
    }

    return (0);
}
