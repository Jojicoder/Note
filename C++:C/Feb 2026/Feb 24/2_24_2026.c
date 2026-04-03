#include <stdio.h>

void check_array_size(int array[]){
    int size_in_bytes =sizeof(array);
    int num_elements = sizeof(array)/ sizeof(array[0]);

    printf("[Inside Function]\n");
    printf("- Size in bytes: %d bytes\n", size_in_bytes);
    printf("- Caluculated length: %d elements\n\n", num_elements);
}

int main(){
    printf("=== The sizeof() Trap ===\n\n");

    int my_plates[] = {45,35,25,10,5};

    int size_in_bytes = sizeof(my_plates);
    int num_elements = sizeof(my_plates)/sizeof(my_plates[0]);

    printf("[Inside main()]\n");
    printf("- Size in bytes: %d bytes\n", size_in_bytes);
    printf("- Calculated length: %d elements\n\n", num_elements);

    check_array_size(my_plates);

    return 0;

}