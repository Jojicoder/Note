#include <stdio.h>

void print_plates(int plates[], int num_plates){
    printf("[Inside Function]\n");
    printf("Received length: %d elements\n", num_plates);

    for(int i = 0; i < num_plates;i++){
        printf("- Plate %d: %d lbs\n", i+1, plates[i]);
    }
    printf("\n");
}

int main(){
    printf("=== Safe Array Passing in C ===");

    int my_plates[] = {45,35,25,10,5};
    int  calculated_length = sizeof(my_plates) / sizeof(my_plates[0]);

    printf("[Insde main()]\n");
    printf("Calculated length: %d elemnts\n\n", calculated_length);

    print_plates(my_plates, calculated_length);

    return 0;
}