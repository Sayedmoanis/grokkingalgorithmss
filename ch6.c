#include <stdio.h>
#include <string.h>

#define MAX_FRIENDS 100

int isMangoSeller(char *name) {
    return name[strlen(name) - 1] == 'm';
}

int searchMangoSeller(char *person, char *friends[][2], int numFriends) {
    char *queue[MAX_FRIENDS];
    int front = 0;
    int rear = 0;

    for (int i = 0; i < numFriends; i++) {
        if (strcmp(friends[i][0], person) == 0) {
            queue[rear++] = friends[i][1];
        }
    }

    while (front < rear) {
        char *currentPerson = queue[front++];
        if (isMangoSeller(currentPerson)) {
            printf("%s is a mango seller!\n", currentPerson);
            return 1;
        }

        for (int i = 0; i < numFriends; i++) {
            if (strcmp(friends[i][0], currentPerson) == 0) {
                queue[rear++] = friends[i][1];
            }
        }
    }

    printf("No mango seller found among %s's friends.\n", person);
    return 0;
}

int main() {
    char *person = "Alice";
    char *friends[][2] = {
        { "Alice", "Bob" },
        { "Alice", "Charlie" },
        { "Bob", "mpappe" },
        { "Charlie", "leo" },
        { "Charlie", "messi" },
        { "mpappe", "MangoSeller" },
        { "messi", "Grace" },
        { "Grace", "MangoSeller" }
    };
    int numFriends = sizeof(friends) / sizeof(friends[0]);

    searchMangoSeller(person, friends, numFriends);

    return 0;
}