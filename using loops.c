// ROMAN, MARY ANGEL M. DIT 1-2
//using loops

int main ()
{
    printf ("While loop ( 1 to 10): \n");

    int i = 1;
    while (i <= 10) {
        printf("%d ", i);
        i ++;
    }

    printf ("\n\nFor loop ( 2 to 20 even numbers): \n");
    for ( i = 2; i <= 20; i += 2) {
        printf ("%d ", i);
    }
    
    printf (" \n\nDo-While loop ( 1 to 5): \n");
    i = 1;
    do {
        printf("%d ", i);
        i ++;
    } while (i <= 5);
    
    return 0;
    
}