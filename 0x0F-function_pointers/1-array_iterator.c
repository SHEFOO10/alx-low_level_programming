/**
 * array_iterator - looping on array
 *
 * @array: the array
 * @size: the size
 * @action: the action
 *
 * Return: Nothing
 */




void array_iterator(int *array, size_t size, void (*action)(int))
{
	int n = 0;

	if (!array || !size || !action())
		return (0);


	while (n != size)
	{
		(*action)(array[n]);
		n++;
	}
}








}
