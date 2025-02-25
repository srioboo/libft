#include "test.h"

void	test_ft_lists(void)
{
	const char	*method_name = "test_ft_lists";
	t_list		*lstest;
	t_list		*lsnew;

	// lstest = ft_lstnew("fas");

	fun_start(method_name);
	fun_test_header_label(1, "--- listsize");
	lstest = ft_lstnew("contenido");
	printf(" %d\b", ft_lstsize(lstest));
	fun_test_header_label(1, "--- listadd_back");
	lsnew = ft_lstnew("contenido2");
	ft_lstadd_back(&lstest, lsnew);
	printf("-> %d %d\n", ft_lstsize(lstest), ft_lstsize(lsnew));

	fun_end(method_name);
}
