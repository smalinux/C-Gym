/*
https://stackoverflow.com/a/17053751/5688267
//
// This is good. as start point.
// but not perfect.
// I want these functions to be private.
// ...
********************************************/
#include <stdio.h>

typedef struct client_ops_t client_ops_t;
typedef struct client_t client_t, *pno;

struct client_t {
    /* ... */
   int data;
    client_ops_t *ops;
};

struct client_ops_t {
    pno (*AddClient)(client_t *);
    pno (*SubClient)(client_t *);
};

pno AddClient (client_t *client);
pno SubClient (client_t *client);


///////////////////////////////////////////////////////////////////////////////

int main(void) {

   client_t c1;
   c1.data = 10;

   printf("data = %d\n", c1.data);

   AddClient(&c1);
   printf("data = %d\n", c1.data);

   SubClient(&c1);
   printf("data = %d\n", c1.data);
   return 0;
}

///////////////////////////////////////////////////////////////////////////////



pno AddClient (client_t *client) {
   client->data += 1;
   return client;
}
pno SubClient (client_t *client) {
   client->data--;
   return client;
}
