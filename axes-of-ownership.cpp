/*
Ownership can be unique or shared.
Ownership can be constant or changing.
Changes in ownership can be atomic or not.
  Atomic can be lockfree or locked.
  For example, single threaded ownership changes do not need to be atomic.

Ownership is usually unique and constant. Local variables.
Single threaded shared changing ownership is for example passing the address of local variables, with LIFO order.
Ownership can be shared and constant. Global constants.
*/

// TODO: Examples?