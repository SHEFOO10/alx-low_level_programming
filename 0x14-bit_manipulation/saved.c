#include <string.h>


// Online C compiler to run C program online
unsigned int binary_to_uint(const char *b)
{
        char b_arr[strlen(b)];
        strcpy(b_arr, b);
        
        unsigned int i = sizeof(b_arr);
        
        if (!b)
            return (0);
            
        while (i--)
        {
            if (b_arr != '0' && b_arr != '1')
                return (0);
        }
        


}


int main(void)
{
    unsigned int n;
    
    n = binary_to_uint("1001");
    // printf("%u\n", n);
    // n = binary_to_uint("101");
    // printf("%u\n", n);
    // n = binary_to_uint("1e01");
    // printf("%u\n", n);
    // n = binary_to_uint("1100010");
    // printf("%u\n", n);
    // n = binary_to_uint("0000000000000000000110010010");
    // printf("%u\n", n);
    return (0);
}
