#include "config.h"
#include "ctype.h"
#include "genlib.h"
#include "stddefs.h"

/* strcat():
 * Concatenate s2 on the end of s1.  S1's space must be large enough.
 * Return s1.
 */

char *
strcat(register char *s1, register char *s2)
{
	register char *os1;

	os1 = s1;
	while(*s1++)
		;
	--s1;
	while((*s1++ = *s2++))
		;
	return(os1);
}
