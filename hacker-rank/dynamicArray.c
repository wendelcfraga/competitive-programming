
int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);
    total_number_of_books = (int*) calloc(total_number_of_shelves,sizeof(int));
    total_number_of_pages = (int**) calloc(total_number_of_shelves,sizeof(int*)); // a pointer that points to the start of a memory location that 
    for (int i = 0; i < total_number_of_shelves; i++)                             // will contain all integer pointers that will point to the shelves.
    {
        *(total_number_of_pages+i) = calloc(1100,sizeof(int)); //max no of books per shelve
    }
    
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);

    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);
        
        if (type_of_query == 1) {
            int x, y;
            scanf("%d %d", &x, &y);
            *(*(total_number_of_pages+x)+*(total_number_of_books+x)) =y;
            *(total_number_of_books+x) +=1;

