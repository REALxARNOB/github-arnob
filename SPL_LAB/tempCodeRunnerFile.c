for (int i = 1; temp != NULL && i < position; i++)
    {
        prev = temp;
        temp = temp->pointer;
    }