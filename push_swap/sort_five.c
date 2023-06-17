#include "push_swap.h"

void sort_five(t_list **stack_a, t_list **stack_b)
{ // 2 en küçüğü B ye atar. Kalan 3 ü sıralar. B ye atılanları A ya geri atar
    int flag;
    t_list *end;

    end = ft_lstlast(*stack_a);
    if (end->index == 0)
    {
        rra(stack_a);
        pb(stack_a, stack_b);
    }
    else
    {
        flag = 0; // burada direkt push_small'a 0 yollasak?
        push_small_a(stack_a, stack_b, flag); 
    }
    flag = 1;
    push_small_a(stack_a, stack_b, flag); // burada da direkt 1 yollasak?
    sort_three(stack_a);
    pa(stack_a, stack_b);    
    pa(stack_a, stack_b);    
}