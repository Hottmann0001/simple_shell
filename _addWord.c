#include "shell.h"

/**
 * _addWord - add a word to an array (prmArray).
 * @prmWord: its word to add.
 * @prmIndex: its current index.
 * @prmArray: its array to hold data.
 */
void _addWord(char *prmWord, int *prmIndex, char **prmArray)
{
	prmWord = _cleanString(prmWord);
	prmArray[*prmIndex] = _strdup(prmWord);
	free(prmWord);
	*prmIndex += 1;
}
