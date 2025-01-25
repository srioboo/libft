#include "test.h"

void	test_ft_lists(void)
{
	const char	*method_name = "test_ft_lists";
	// t_list		*lstest;

	// lstest = ft_lstnew("fas");

	fun_start(method_name);
	fun_test_header_label(1, "--- listsize");
	// printf(" %d\b", ft_lstsize(lstest));
	// ft_lstnew(content);
	fun_test_header_label(1, "--- listadd_back");
	// ft_lstadd_back(&lstest, lstest);

	// printf("-> %d\n", ft_lstsize(lstest));

	fun_end(method_name);
}
