#include "main.h"

/**
 * _strspn - Calcule la longueur du préfixe contenant uniquement des caractères acceptés
 * @s: chaîne principale
 * @accept: chaîne contenant les caractères acceptés
 *
 * Return: longueur du préfixe valide
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		int found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}

		if (!found)
			break;

		count++;
	}

	return (count);
}
