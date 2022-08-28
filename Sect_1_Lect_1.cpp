//Example 1: Air travel
// Barbet Airlines serves several cities in India
// Some cities are connected by direct flights
// Want to compute all pairs A,B such that A and B are connected by a sequence of flights.

// Throw away the map and record the network
// This is a graph - a collection of node and edges.

// Connected destinations 
//>> Compute paths in the praph
//>> How do we reprsent the graph so that we can manipulate it using a computer program?
//>>>> Suitable data structure
//>> How do we deisgn an efficient algorithm  for this data representation?

// Efficiency
//>> N cities , F direct flightd
//>> Computing paths depends on N and F
//>> What is the dependency?
//>> How large a value of N and F can we handle?
//>>>> online booking requiures response in seconds

// Varitions
//>> Flights have variable and departure times
//>> Only some connections are feasible
//>>>> should not have to wait overnight
//>>>> or more than 4 hours
//>> How to compute fasible paths with constraints?

// Other problems
//>> Each sector has a cost
//>>>> Compute cheapest route between a pair of cities
//>> some aircraft grounded for maintainance
//>>>> Which routes to operate to maintain connectivity?
