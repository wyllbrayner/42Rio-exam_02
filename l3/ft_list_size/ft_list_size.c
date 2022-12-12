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
void	print_list(t_list *begin_list)
{
	while (begin_list != 0)
	{
 		printf("%s\n", (char *)begin_list->data);
 		begin_list = begin_list->next;
 	}
}

int		main(void)
{
	char straa[] = "String aa";
	t_list *aa = malloc(sizeof(t_list));
	aa->data = straa;

	char strbb[] = "String bb";
	t_list *bb = malloc(sizeof(t_list));
	bb->data = strbb;

	char strcc[] = "String cc";
	t_list *cc = malloc(sizeof(t_list));
	cc->data = strcc;

	char strdd[] = "String dd";
	t_list *dd = malloc(sizeof(t_list));
	dd->data = strdd;

	aa->next = bb;
	bb->next = cc;
	cc->next = dd;
	dd->next = NULL;

	print_list(aa);
	printf("----------\n");

	printf("retorno: %d\n", ft_list_size(aa));
}
*/