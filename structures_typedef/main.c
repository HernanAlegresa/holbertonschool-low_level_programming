int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Ghost", 4.75, "Jon Snow");
    if (my_dog == NULL)
    {
        printf("Failed to create a new dog\n");
        return (1);
    }
    
    printf("My name is %s, I am %.2f, and my owner is %s\n", my_dog->name, my_dog->age, my_dog->owner);

    // Free the memory for the dog structure
    free(my_dog);

    return (0);
}

