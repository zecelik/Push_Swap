#include "push_swap.h"

void ft_other_three(t_list **stack_a, int *nums)
{
    if (nums[0] > nums[1] && nums[1] > nums[2])                           // 3 - 2 - 1 ->       1 - 2 - 3
    {
        ra(stack_a);
        sa(stack_a);
    }
    else if (nums[0] < nums[1] && nums[1] > nums[2] && nums[0] < nums[2]) // 1 - 3 - 2 ->       1 - 2 - 3
    {
        sa(stack_a);
        ra(stack_a);
    }
}

void ft_sort_three(t_list **stack_a)
{
    t_list *head;
    int nums[3];
    int i;

    i = 0;
    head = *stack_a;
    while (head != 0)
    {
        nums[i] = head->content;
        head = head->next;
        i++;
    }
    if (nums[0] > nums[1] && nums[1] < nums[2] && nums[0] < nums[2])      // 2 - 1 - 3 ->       1 - 2 - 3
        sa(stack_a);
    else if (nums[0] < nums[1] && nums[1] > nums[2] && nums[0] > nums[2]) // 2 - 3 - 1 ->       1 - 2 - 3
        rra(stack_a);
    else if (nums[0] > nums[1] && nums[1] < nums[2] && nums[0] > nums[2]) // 3 - 1 - 2 ->       1 - 2 - 3
        ra(stack_a);
    else
        ft_other_three(stack_a, nums);
}

// bu yığın 3 elemandan daha kısa ise, fonksiyon segmentation fault hatası verebilir. Ayrıca, yığının ilk 3 elemanı zaten sıralanmışsa, bu fonksiyon yine de yığını değiştirir. Bu nedenle, bu fonksiyonu kullanmadan önce, yığının ilk 3 elemanının sıralı olup olmadığını ve yığının 3 elemandan daha uzun olduğunu kontrol etmek gerekir.
// programın çalışan haliyle bu fonksiyonları değiştirerek dene!!!!

// static int index_of_max(t_list *stack_a) // nums kesin 3 elemanlı mı?
// {
//     if (stack_a->content > stack_a->next->content && stack_a->content > stack_a->next->next->content) // en büyük 0. ise
//         return 0;
//     if (stack_a->next->content > stack_a->content && stack_a->next->content > stack_a->next->next->content) // en büyük 1. ise
//         return 1;
//     else // 2. büyükse
//         return 2;
// }

// void sort_three(t_list **stack_a)
// {
//     t_list *tmp;
//     int i_of_max;

//     tmp = *stack_a;
        // if (ft_lstsize < 2)
        //     return ;
        // if (ft_lstsize == 2)
        //     if ((*stack_a)->next->content > (*stack_a)->content)
        //         sa(stack_a);
        // if (ft_lstsize > 2)
        // {
        //     i_of_max = index_of_max(*stack_a);
        //     if (i_of_max == 0)
        //         ra(stack_a);
        //     else if (i_of_max == 1)
        //         rra(stack_a);
        // }

//     if (tmp->content > tmp->next->content)
//         sa(stack_a);
// }