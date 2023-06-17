#include "push_swap.h"

void free_str(char **str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    while (i >= 0)
        free(str[i--]);
    free(str);    
}

void free_stack(t_list **stack)
{
    t_list *tmp;
    t_list *curr;

    tmp = *stack;
    while (tmp)
    {
        curr = tmp;
        tmp = tmp->next;
        free(curr);
    }
    free(stack);
}