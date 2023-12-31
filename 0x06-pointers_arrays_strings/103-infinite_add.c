#include "main.h"
/**
 * rev_string - reverse array
 * @n: character array to reverse
 * Return: void
 */
void rev_string(char *n)
{
	int i = 0, j = 0;
	char temp;

	while (n[i] != '\0')
	i++;
	i--;
	while (j < i)
	{
	temp = n[j];
	n[j] = n[i];
	n[i] = temp;
	j++;
	i--;
	}
}
/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (n1[i])
	i++;
	while (n2[j])
	j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
	return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
	val1 = (i >= 0) ? (n1[i] - '0') : 0;
	val2 = (j >= 0) ? (n2[j] - '0') : 0;
	temp_tot = val1 + val2 + overflow;
	overflow = (temp_tot >= 10) ? 1 : 0;
	if (digits >= (size_r - 1))
	return (0);
	r[digits] = (temp_tot % 10) + '0';
	digits++;
	j--;
	i--;
	}
	if (digits == size_r)
	return (0);
	r[digits] = '\0';
	rev_string(r);
	return (r);
}
