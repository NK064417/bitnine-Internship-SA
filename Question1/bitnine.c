#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
} Node;

Node* makeNode(int value) {
    Node* node = (Node*) malloc(sizeof(Node));
    node->value = value;
    return node;
}

Node* addNodes(Node* a, Node* b) {
    return makeNode(a->value + b->value);
}

Node* subNodes(Node* a, Node* b) {
    return makeNode(a->value - b->value);
}

Node* mulNodes(Node* a, Node* b) {
    return makeNode(a->value * b->value);
}

Node* divNodes(Node* a, Node* b) {
    return makeNode(a->value / b->value);
}

Node* fibonacci(int n) {
    if (n == 0) {
        return makeNode(0);
    } else if (n == 1 || n == 2) {
        return makeNode(1);
    }

    Node* a = makeNode(1);
    Node* b = makeNode(1);
    for (int i = 3; i <= n; i++) {
        Node* c = addNodes(a, b);
        a = b;
        b = c;
    }
    return b;
}

void calc(Node* node) {
    printf("%d\n", node->value);
}

int main() {
    Node* addition = addNodes(makeNode(10), makeNode(6));
    Node* multiplication = mulNodes(makeNode(5), makeNode(4));
    Node* subtraction = subNodes(addition, multiplication); // Corrected order here
    Node* fibo = fibonacci(2);
    calc(addition);
    calc(multiplication);
    calc(subtraction);
    calc(fibo);

    // Free dynamically allocated memory
    free(addition);
    free(multiplication);
    free(subtraction);
    free(fibo);
	
	printf("Press any key to continue...");
    getchar(); // Wait for a key press


    return 0;
}
