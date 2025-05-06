for (int i = 0; i < 5; i++)
    {
        mul[i] = mall[i] * call[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Multiplication = %d\n",mul[i]);
    }
    free(mul);

    return 0;
}