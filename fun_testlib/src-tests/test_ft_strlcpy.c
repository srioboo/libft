#include "test.h"

#include <bsd/string.h>

void	test_ft_strlcpy(void)
{
	const char		*method_name = "test_ft_strlcpy";
	size_t			size;
	char			src[26] = "This is the source string";
	char			dst[35] = "And this is the destination string";

	size = 6;
	fun_start(method_name);
	printf("--- orig: %zu -- %s (%zu)\n", strlcpy(dst, src, size),
		dst, strlen(dst));
	printf("---  new: %zu -- %s (%zu)\n", ft_strlcpy(dst, src, size),
		dst, ft_strlen(dst));
	printf("--- orig: %zu -- %s (%zu)\n", strlcpy(dst, "aaa", 0),
		dst, strlen(dst));
	printf("---  new: %zu -- %s (%zu)\n", ft_strlcpy(dst, "aaa", 0),
		dst, ft_strlen(dst));
	fun_end(method_name);
}
