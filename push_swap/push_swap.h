#ifndef PUSH_SWAP_C
# define PUSH_SWAP_C

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h> // sil bunu

typedef struct s_list
{
    int content;
    int index;
    struct s_list *next;
} t_list;

// libft
int	ft_isdigit(int nb);
t_list	*ft_lstnew(void *content);
size_t ft_strlen(const char *s); 
int ft_atoi(const char *str);
char **ft_split(char const *s, char c);
void ft_putendl_fd(char *s, int fd);
int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);
void ft_lstadd_back(t_list **lst, t_list *new);

// stack utils
void index_stack(t_list **stack);
void check_args(int ac, char **av);
void ft_sort_three(t_list **stack_a);
void push_small_a(t_list **stack_a, t_list **stack_b, int flag);
void small_sort(t_list **stack_a, t_list **stack_b);
void radix_sort(t_list **stack_A, t_list **stack_B);
void sort_four(t_list **stack_a, t_list **stack_b);
void sort_five(t_list **stack_a, t_list **stack_b);
void free_str(char **str);
void free_stack(t_list **stack);

#endif