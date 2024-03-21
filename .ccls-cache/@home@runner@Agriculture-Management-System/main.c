
// AGRICULTURE MANAGEMENT SYSTEM IN C 
// MARCH 09, 2024 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CROPS 100

typedef  struct {
    char  name[50];
    float area;
    float yield_per_area;
    float price_per_unit
} Crop;

Crop crops[MAX_CROPS];
int crop_count = 0;

void add_crops() {
   if (crop_count < MAX_CROPS) {
     Crop new_crop;

     printf("Enter crop name: ");
     scanf("%s", new_crop.name);

     printf("Enter Area: ");
     scanf("%f", &new_crop.area);

     printf("Enter yield per area: ");
     scanf("%f", &new_crop.yield_per_area);

     printf("Enter price per unit: ");
     scanf("%f", &new_crop.price_per_unit);

     crops[crop_count++] = new_crop;
     printf("Crop added Sucessfully!\n");  
   } else {
     printf("Maximum number of crops reached.\n");
   }
}

void display_crops() {
    for (int i = 0; i < crop_count; i++) {
      printf("Crops: %s\n", crops[i].name);
      printf("Area: %.2f\n", crops[i].area);
      printf("Yield per area: %.2f\n", crops[i].yield_per_area);
      printf("Price per Unit: %.2f\n", crops[i].price_per_unit);
      printf("-----------------------------------------"); 
    }
}

int main() {
  int choice;

  do {
    printf("-----------------------------------------"); 
    printf("\n --- Agriculture Management System --- \n");
    printf("-----------------------------------------\n"); 
    printf("1. Add Crops\n");
    printf("2. Display Crops\n");
    printf("3. Exit\n");
    scanf("%d", &choice);

    switch (choice) {
      case 1: 
         add_crops();
         break;
      case 2: 
         display_crops();
         break;
      case 3: 
         printf("Exiting.....\n");
         break;
      default: 
        printf("Invalid choice. Please Try Again.\n");
    } 
  }
    while(choice != 3);

  return 0;
}


