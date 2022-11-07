#include "ft_list.h"
/*
int	ft_list_size(t_list *begin_list)
{
	if (begin_list == 0)
		return (0);
	else
		return (1 + (ft_list_size(begin_list->next)));
}
*/

#include <stddef.h>
int	ft_list_size(t_list *begin_list)
{
	int i = 0;

	if (begin_list == NULL)
		return (0);
	while (begin_list != NULL)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}

/*
#include <stdio.h>
#include <stdlib.h>
void	print_list(t_list **begin_list)
{
	t_list *cur = *begin_list;
	while (cur != 0)
	{
 		printf("%s\n", (char *)cur->data);
 		cur = cur->next;
 	}
}

int		main(void)
{
	char straa[] = "String aa";
	t_list *aa = malloc(sizeof(t_list));
	aa->next = 0;
	aa->data = straa;

	char strbb[] = "String bb";
	t_list *bb = malloc(sizeof(t_list));
	bb->next = 0;
	bb->data = strbb;

	char strcc[] = "String cc";
	t_list *cc = malloc(sizeof(t_list));
	cc->next = 0;
	cc->data = strcc;

	char strdd[] = "String dd";
	t_list *dd = malloc(sizeof(t_list));
	dd->next = 0;
	dd->data = strdd;

	aa->next = bb;
	bb->next = cc;
	cc->next = dd;

	t_list **begin_list = &aa;

	print_list(begin_list);
	printf("----------\n");

	printf("retorno %d\n", ft_list_size(aa));
}
*/