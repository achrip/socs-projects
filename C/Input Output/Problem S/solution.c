#include <stdio.h>
#include <string.h>

int main (){
    char str[100]; 

    scanf("%[^\n]s", str);

    printf("#include <stdio.h>\n");
    printf("int main()\n");
    printf("{\n");
    printf("\t printf(\"%%s\\n\",\"%s\")\n", str);
    printf("\t return 0;\n");
    printf("}\n");


}