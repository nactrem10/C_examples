// The producer-Consumer problem is make sure that two proccesses runs together and uses same buffer does not remove from the empty buffer or add to the full buffer.

// For the solution producer go to sleep when the buffer is full and consumer go to sleep when the buffer is empty. When consumer removes it wakes the producer and
// when the producer adds it wakes the consumer.

#include <stdio.h>
#include <malloc.h>
#include <memory.h>

// Creating Buffer structure
typedef struct buffer
{
    int *buff;
    int start;
    int end;
    int size;
    int count;
} buffer;

// Creating a new buffer
buffer *buffer_new(int size)
{
    buffer *sb = malloc(sizeof(buffer));
    memset(sb, 0, sizeof(buffer));
    sb->size = size;
    sb->buff = (int)malloc(sizeof(int) * size);

    return sb;
}

// Deleting the buffer
void buffer_delete(buffer *sb)
{
    free(sb->buff);
    free(sb);
}

// Adding to the buffer
void buffer_add(buffer *sb, int elem)
{
    int end = sb->end;
    if (sb->count && (end % sb->size) == sb->start)
    {
        printf("Overflow Elem[%d] %d lost\n", sb->start, sb->buff[sb->start]);
        sb->start = (sb->start + 1) % sb->size;
        sb->count--;
    }
    printf("Added Elem[%d] = %d\n", sb->end, elem);
    sb->buff[sb->end] = elem;
    sb->end = (sb->end + 1) % sb->size;
    sb->count++;
}

// Removing from the buffer
int buffer_remove(buffer *sb)
{
    int start = sb->start;
    int ret = -1;
    if (sb->count <= 0)
    {
        printf("Buffer is empty\n");
        return ret;
    }
    if (sb->count || (start % sb->size) != sb->end)
    {
        printf("Removed Elem[%d] = %d\n", sb->start, sb->buff[sb->start]);
        ret = sb->buff[sb->start];
        sb->start = (sb->start + 1) % sb->size;
        sb->count--;
    }
    else
    {
        printf("Producer Consumer Buffer is empty\n");
    }
    return ret;
}

// Printing the inside of the buffer
void buffer_print(buffer *sb)
{
    int start = sb->start;
    int end = sb->end;
    int i, count = 0;
    for (i = start; count < sb->count; i = (i + 1) % sb->size)
    {
        printf("Elem[%d] = %d\n", i, sb->buff[i]);
        count++;
        if (i == (end - 1))
        {
            break;
        }
    }
}

int main(int argc, char *argv[])
{
    char key;
    int elem;
    buffer *sb = buffer_new(5);

    // User Menu
    while (1)
    {
        printf("circular producer consumer buffer add[a], remove[r], print[p] : ");
        fflush(stdin);
        key = getchar();

        switch (key)
        {
        case 'a':
        {
            printf("Element in producer to add : ");
            scanf("%d", &elem);
            buffer_add(sb, elem);
            break;
        }
        case 'r':
        {
            buffer_remove(sb);
            break;
        }
        case 'p':
        {
            buffer_print(sb);
            break;
        }
        default:
        {
            buffer_delete(sb);
        }
        }
    }
    return 0;
}