#include "push_swap.h"

void sort_four(t_list **stack_a, t_list **stack_b)
{
    int flag;

    flag = 0;
    push_small_a(stack_a, stack_b, flag); // flag 1 olursa? - flag olusturacağımıza direkt 1 yollasak
    sort_three(stack_a);
    pa(stack_a, stack_b);
}

