#include "testlibft.h"
#include <bsd/string.h>

static void	ft_show_data(int n, char **str_to_test)
{
	fun_test_header_label(n, "---");
	fun_show_data(str_to_test);
}

void	test_ft_split(void)
{
	const char	*method_name = "test_ft_split";
	char		**test;
	int			num_test;

	num_test = 1;
	fun_start(method_name);

	test = ft_split("  lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", 32);
	ft_show_data(num_test++, test);

	test = ft_split("  tripouille  42  ", ' ');
	ft_show_data(num_test++, test);

	test = ft_split("", 'a');
	ft_show_data(num_test++, test);

	test = ft_split("hola,adios,saludos", ',');
	ft_show_data(num_test++, test);

	test = ft_split("hola!", 32);
	ft_show_data(num_test++, test);

	test = ft_split("hola!", '\0');
	ft_show_data(num_test++, test);

	test = ft_split("", 'z');
	ft_show_data(num_test++, test);

	test = ft_split(",,lorem,,,ipsum,ectetur,", ',');
	ft_show_data(num_test++, test);

	test = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", 32);
	ft_show_data(num_test++, test);

	test = ft_split("xxxxxxxxhello!", 'x');
	ft_show_data(num_test++, test);

	test = ft_split("hello!zzzzzzzz", 'z');
	ft_show_data(num_test++, test);

	test = ft_split("\11\11\11\11hello!\11\11\11\11", '\11');
	ft_show_data(num_test++, test);

	test = ft_split("", 'a');
	ft_show_data(num_test++, test);

	test = ft_split("ggggggggggg", 'g');
	ft_show_data(num_test++, test);

	test = ft_split("  lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", 32);
	ft_show_data(num_test++, test);

	test = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
	ft_show_data(num_test++, test);

	test = ft_split("", ' ');
	ft_show_data(num_test++, test);

	test = ft_split("--1-2--3---4----5-----42", '-');
	ft_show_data(num_test++, test);

	test = ft_split("", ' ');
	ft_show_data(num_test++, test);

	test = ft_split(" Tripouille", ' ');
	ft_show_data(num_test++, test);

	test = ft_split(" Tripouille ", 32);
	ft_show_data(num_test++, test);

	fun_end(method_name);
}
