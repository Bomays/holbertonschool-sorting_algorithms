#C - Sorting algorithms & Big O

## Functions and stucture of the project

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
_____________________________________________________

/**
 * print_array - Prints an array of integers
 * @array: Pointer to the array to be printed
 * @size: Number of elements in the array
 */
void print_array(const int *array, size_t size);
_____________________________________________________

/**
 * print_list - Prints all the elements of a listint_t list
 * @list: Pointer to the head of the list
 */
void print_list(const listint_t *list);
_____________________________________________________

/**
 * bubble_sort - Sorts an array of integers in ascending order using the Bubble sort algorithm
 * @array: Pointer to the array to be sorted
 * @size: Number of elements in the array
 */
void bubble_sort(int *array, size_t size);
______________________________________________________

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm
 * @list: Pointer to a pointer to the head of the list
 */
void insertion_sort_list(listint_t **list);
______________________________________________________

/**
 * selection_sort - Sorts an array of integers in ascending order using the Selection sort algorithm
 * @array: Pointer to the array to be sorted
 * @size: Number of elements in the array
 */
void selection_sort(int *array, size_t size);
______________________________________________________

/**
 * quick_sort - Sorts an array of integers in ascending order using the Quick sort algorithm
 * @array: Pointer to the array to be sorted
 * @size: Number of elements in the array
 */
void quick_sort(int *array, size_t size);
_____________________________________________________



