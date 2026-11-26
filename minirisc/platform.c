#include <stdlib.h>
#include <stdio.h>
#include "platform.h"



platform_t* platform_new()
{
	// TODO
}


void platform_free(platform_t *platform)
{
	// TODO
}


int platform_load_program(platform_t *plt, const char *file_name)
{
	// TODO
}


int platform_read(platform_t *plt, platform_access_type_t access_type, uint32_t addr, uint32_t *data)
{
	// TODO
}


int platform_write(platform_t *plt, platform_access_type_t access_type, uint32_t addr, uint32_t data)
{
	// TODO
}


