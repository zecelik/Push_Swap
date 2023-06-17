#include "push_swap.h"

void small_sort(t_list **stack_a, t_list **stack_b)
{
    int a;

    a = ft_lstsize(stack_a);
    (void)stack_b;
    if (a == 2)
        if ((*stack_a)->content > (*stack_a)->next->content)
            sa(stack_a);
    else if (a == 3)
        sort_three(stack_a);
    else if (a == 4)
        sort_four(stack_a, stack_b);
    else if (a == 5)
        sort_five(stack_a, stack_b);
}