#include "push_swap.h"


static int max_bits(t_list **lst)
{
    t_list *tmp;
    int max;
    int max_bit;

    tmp = *lst;
    max = tmp->index;
    max_bit = 0;
    while (tmp)
    {
        if (tmp->index > max)
            max = tmp->index;
        tmp = tmp->next;
    }
    while ((max >> max_bit) != 0)
        max_bit++;
    return (max_bit);
}

void radix_sort(t_list **stack_A, t_list **stack_B)
{
    t_list *tmp;
    int i;
    int j;
    int size;
    int max_bit;

    i = 0;
    tmp = *stack_A;
    size = ft_lstsize(tmp);
    max_bit = max_bits(stack_A);
    while (i < max_bit)
    {
        j = 0;
        while (j++ < size)
        {
            tmp = *stack_A;
            if (((tmp->index >> i) & 1) == 1) // == 1 ' e gerek var mı?
                ra(stack_A);
            else
                pb(stack_A, stack_B);
        }
        while (ft_lstsize(*stack_B) != 0)
            pa(stack_A, stack_B);
        i++;
    }
}


