#include "push_swap.h"

static t_list *get_next_min(t_list **stack)
{
    int flag;
    t_list *min;
    t_list *tmp;

    tmp = *stack;
    flag = 0;
    min = NULL;
    if (!tmp)
        return NULL;
        // flag kullanmak yerine = min = tmp -> kullanmak nasıl olur?
    while (tmp)
    { // index == -1 : henüz indexlenmemiş elemanı ifade eder -> indexlenmiş ifade karşılaştırmaya katılmaz.
        if ((tmp->index == -1) && (!flag || tmp->content < min->content)) // -> ya ilk elemansa || min'den daha küçükse
        {
            flag = 1;
            min = tmp;
        }
        tmp = tmp->next;
    }
    return min;
}

void index_stack(t_list **stack)
{
    t_list *tmp;
    int i;

    i = 0;
    tmp = get_next_min(stack);
    while (tmp)
    {
        tmp->index = i++;
        tmp = get_next_min(stack);
    }
}
