#include <stdio.h>
typedef struct s{
	int i;
	char c;
	};
main() {
	struct s var;
	printf("%d",sizeof(var));
}
