#include "shell.h"

int main(int ac, char **av, **env)
{
	if(ac == 1)
		prompt(av, env);
}

