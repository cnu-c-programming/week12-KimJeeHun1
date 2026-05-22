#include <stdio.h>

int main(int argc, const char* argv[]) {
    if (argc < 3)
        return 0;

FILE* fp_src = fopen(argv[1],"r");
FILE* fp_dst = fopen(argv[2],"w");

FILE* temp = fopen("myfile2.txt", "rw");
temp=fp_src;
fp_dst=temp;
    
fclose(fp_src);
fclose(fp_dst);
}

