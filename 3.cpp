#include <stdio.h>
#include <stdlib.h>


struct tamgiac
{
    float AB;
    float BC;
    float CA;
    struct tamgiac *next; 
};


struct tamgiac *taotamgiac(float AB2, float BC2, float CA2) {
    struct tamgiac *tamgiac2 = (struct tamgiac *)malloc(sizeof(struct tamgiac));
    if (tamgiac2 == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }
    tamgiac2->AB = AB2;
    tamgiac2->BC = BC2;
    tamgiac2->CA = CA2;
    tamgiac2->next = NULL;
    return tamgiac2;
}


void themtamgiac(struct tamgiac **head, float AB2, float BC2, float CA2) {
    struct tamgiac *tamgiacmoi = taotamgiac(AB2, BC2, CA2);
    if (*head == NULL) {
        *head = tamgiacmoi;
    } else {
        struct tamgiac *tam = *head;
        while (tam->next != NULL) {
            tam = tam->next;
        }
        tam->next = tamgiacmoi;
    }
}


void indstamgiac(struct tamgiac *head) {
    struct tamgiac *current = head;
    while (current != NULL) {
        printf("Triangle sides: %.2f, %.2f, %.2f\n", current->AB, current->BC, current->CA);
        current = current->next;
    }
}


int main() {
    struct tamgiac *dstamgiac = NULL;
    int n; 
    printf("Enter the number of triangles: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        float AB2, BC2, CA2;
        printf("Enter sides of Triangle %d (separated by spaces): ", i + 1);
        scanf("%f %f %f", &AB2, &BC2, &CA2);
        themtamgiac(&dstamgiac, AB2, BC2, CA2);
    }

    printf("\nList of triangles:\n");
    indstamgiac(dstamgiac);

    // Gi?i phóng b? nh?
    struct tamgiac *tam;
    while (dstamgiac != NULL) {
        tam = dstamgiac;
        dstamgiac = dstamgiac->next;
        free(tam);
    }

    return 0;
}

