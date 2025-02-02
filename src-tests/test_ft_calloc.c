#include "test.h"

void	test_ft_calloc_0(void)
{
	int	n = 5;
	int	*array;

	fun_test_header_label(1, "orig");
	// use calloc function to allocate the memory
	array = (int *)calloc(n, sizeof(int));
	if (array == NULL)
		fprintf(stderr, "Memory allocation failed!\n");
	// Display the array value
	printf("Array elements after calloc: ");
	int i = 0;
	while (i < n)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	free(array); // free the allocated memory
}

void test_ft_calloc_1(void)
{
	int	n = 5;
	int	*array;

	fun_test_header_label(1, "new");
	// use calloc function to allocate the memory
	array = (int*)ft_calloc(n, sizeof(int));

	if (array == NULL) {
		fprintf(stderr, "Memory allocation failed!\n");
	}

	//Display the array value
	printf("Array elements after calloc: ");
	int i = 0;
	while (i < n)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	free(array); // free the allocated memory
}

void test_ft_calloc_2(void)
{
	long *number;
	//initialize number with null
	number = NULL;
	if( number != NULL )
		printf( "Allocated 10 long integers.\n" );
	else
		printf( "Can't allocate memory.\n" );
	fun_test_header_label(2, "orig");
	//allocating memory of a number
	number = (long *)calloc( 10, sizeof( long ) );
	if( number != NULL )
		printf( "Allocated 10 long integers.\n" );
	else
		printf( "\nCan't allocate memory.\n" );
	//free the allocated memory
	free( number );
	fun_test_header_label(2, "new");
	// allocating memory of a number
	number = (long *)ft_calloc(10, sizeof(long));
	if (number != NULL)
		printf("Allocated 10 long integers.\n");
	else
		printf("\nCan't allocate memory.\n");
	// free the allocated memory
	free(number);
}

void	test_ft_calloc_3(void)
{
	fun_test_header_label(3, "orig");
	int *pointer = (int *)calloc(0, 0);
	if (pointer == NULL)
		printf("Null pointer \n");
	else
		printf("Address = %p", (void*)pointer);
	free(pointer);
	fun_test_header_label(3, "new");
	int *pointer2 = (int *)ft_calloc(0, 0);
	if (pointer2 == NULL)
		printf("Null pointer \n");
	else
		printf("Address = %p", (void *)pointer2);
	free(pointer2);
}

void	test_ft_calloc_4(void)
{
	fun_test_header_label(4, "orig");
	int *pointer = (int *)calloc(10, 8);
	if (pointer == NULL)
		printf("Null pointer \n");
	else
		printf("Address = %p", (void *)pointer);
	free(pointer);
	fun_test_header_label(4, "new");
	int *pointer2 = (int *)ft_calloc(10, 8);
	if (pointer2 == NULL)
		printf("Null pointer \n");
	else
		printf("Address = %p", (void *)pointer2);
	free(pointer2);
}

void	test_ft_calloc(void)
{
	const char	*method_name = "test_ft_calloc";

	fun_start(method_name);
	test_ft_calloc_0();
	test_ft_calloc_1();
	test_ft_calloc_2();
	test_ft_calloc_3();
	test_ft_calloc_4();
	fun_end(method_name);
}
