#include "push_swap.h"

void push_small_a(t_list **stack_a, t_list **stack_b, int flag)
{
    t_list *tmp;
    
    tmp = *stack_a;
    while (tmp->next)
    {
        if ((tmp->next == 0 && flag == 0) || (tmp->index == 1 && flag == 1))
        {
            pb(stack_a, stack_b);
            break;
        }
        ra(stack_a); // bu arkadaşları ra yapmış ama geri almamış. Neden geri alınmadılar? -> çünkü bu fonksiyon sadece 5 elemanda çalıştırılıyor.
        tmp = *stack_a;
    }  
}