#include <stdio.h>
#include "foo.h"

static foo_t foo;

static void sfunc()
{
	printf("foo's sfunc\n");
}

int foo_fn()
{
	sfunc();

	printf("foo's foo is at %p\n", &foo);

	return foo.x++;
}
