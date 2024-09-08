#include <stdio.h>
#include <string.h> 
#include <stdbool.h>

bool detA(char* p, int length) {

for (int i=0;i<length-1;i++) {
    if (*(p+i)!=*(p+i+1)){ 
        return 1;
    }
}
return 0;
}

int main() { 

char arr[101]; char*p;

bool det;


scanf("%s", arr);
p=arr;
det=detA(p, strlen(arr));

if (det==true) printf("Yes");
else printf("No");

return 0;
}