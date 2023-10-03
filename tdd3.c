#include <stdlib.h>
int *create_array(size_t size)
{
    return malloc(size * sizeof(int));
}

void free_array(int *arr)
{
    if (arr)
    {
        free(arr);
        arr = NULL;
    } 
}

void read_and_inc(int *v)
{
    printf("%d\n", *v++);
}

char *my_strdup(const char *str)
{
    int i = 0;
    for (; str[i]; i++)
    {
    
    }
    char *res = malloc(i * sizeof(char));
    if (!res)
        return NULL;
    *res = *str;
    return res;
}

char *my_strndup(const char *str, size_t n)
{
    char *res=NULL;
    int i = 0;
    for (; str[i]; i++)
    {
    
    }
    char *res = malloc(i * sizeof(char));
    if (!res)
        return NULL;
    if (i<n)
    {
        res = malloc(i * sizeof(char));

    }
    else
        char *res = malloc(n * sizeof(char));
    if (!res)
        return NULL;
    for (int j = 0; res[j]; j++)
        res[j] = str[j];
    printf("%s\n", *res); 
    free(res);
    res = NULL;
    return NULL;
    

}
