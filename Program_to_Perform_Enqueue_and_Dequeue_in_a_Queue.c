#include <stdio. h> #define MAX 100

int queue[ MAX] ;
int front = - 1, rear = - 1;

void enqueue( int value) { if ( rear == MAX - 1) {
printf( " Queue Overflow\n") ;
return;
}
if ( front == - 1) { front = 0;
}
queue[ ++rear] = value;
printf( " Enqueued: %d\n", value) ;
}

void dequeue( ) {
if ( front == - 1 | | front > rear) { printf( " Queue Underflow\n") ; return;
}
printf( " Dequeued: %d\n", queue[ front++] ) ;
if ( front > rear) { front = rear = - 1;
}
}

int main( ) {
enqueue( 10) ; enqueue( 20) ; dequeue( ) ; return 0;
}
