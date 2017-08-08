#include <stdio.h>
#include "foo.h"

static foo_t foo;

static void sfunc()
{
	printf("bar's sfunc\n");
}

int bar_fn()
{
	sfunc();

	printf("bar's foo is at %p\n", &foo);

	return foo.x++;
}
