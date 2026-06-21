#include <stdio.h>
#include <string.h>

#define N 5

// Enumeration for item categories
typedef enum {
    Food,
    Electronics,
    Other
} ItemCategory;

// Structure representing an item
typedef struct {
    char name[30];
    float price;
    int available_quantity;
    ItemCategory category;
} Item;

int main() {

    Item T[N];

    int i;
    int food_ctg_count = 0;
    int Electronics_ctg_count = 0;
    int Other_ctg_count = 0;
    int total_quantity = 0;
    int found = 0;

    char searched_item_name[30];
    float pr;

    printf("--- Filling the item array ---\n");

    // Input the items
    for(i = 0; i < N; i++) {
        printf("\n--- Enter the information for item No.%d ---\n", i + 1);

        printf("Name:\n");
        scanf("%s", T[i].name);

        printf("Price:\n");
        scanf("%f", &T[i].price);

        printf("Available quantity:\n");
        scanf("%d", &T[i].available_quantity);

        printf("Category: 0 = Food, 1 = Electronics, 2 = Other\n");
        scanf("%d", &T[i].category);

        // Check if the entered category is valid
        if(T[i].category < 0 || T[i].category > 2) {
            printf("Invalid category. Category set to Other.\n");
            T[i].category = Other;
        }
    }

    // Display all entered items
    printf("\n--- Displaying entered items ---\n");

    for(i = 0; i < N; i++) {
        printf("\nItem No.%d:\n", i + 1);
        printf("Name: %s\n", T[i].name);
        printf("Price: %.2f DA\n", T[i].price);
        printf("Available quantity: %d\n", T[i].available_quantity);

        printf("Category: ");

        if(T[i].category == Food) {
            printf("Food\n");
            food_ctg_count++;
        }
        else if(T[i].category == Electronics) {
            printf("Electronics\n");
            Electronics_ctg_count++;
        }
        else {
            printf("Other\n");
            Other_ctg_count++;
        }
    }

    // Display the number of items in each category
    printf("\n--- Number of items per category ---\n");

    printf("Food: %d item(s)\n", food_ctg_count);
    printf("Electronics: %d item(s)\n", Electronics_ctg_count);
    printf("Other: %d item(s)\n", Other_ctg_count);

    // Search for an item by its name
    printf("\nEnter the name of the item to search for: ");
    scanf("%s", searched_item_name);

    for(i = 0; i < N; i++) {
        if(strcmp(searched_item_name, T[i].name) == 0) {
            found = 1;
            pr = T[i].price;
            total_quantity += T[i].available_quantity;
        }
    }

    // Display the search result
    if(found == 0) {
        printf("Item not found.\n");
    }
    else if(total_quantity == 0) {
        printf("The item exists but is out of stock.\n");
    }
    else {
        printf("The searched item has a quantity of %d and a price of %.2f DA.\n",
               total_quantity, pr);
    }

    return 0;
}
