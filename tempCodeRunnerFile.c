    for (int j = 5; j >= 1; j--)
    {
        for(int k=5; k>j; k--){
            printf("  ");
        }

        for (int i = j; i >= 1; i--)
        {
            printf("%d ", i);
        }
        printf("\n");
    }