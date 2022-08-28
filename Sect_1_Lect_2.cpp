// Example shop
//>> Campus Xerox has several photocopiers
//>> Tomorrow is the deadline for BTech projects and there is a rush of reports to be printed
//>> How to schedule the pending jobs most effectively?

// Xerox shop...
//>> The number of pages for each job is known 
//>> Each customer has been promised delivery by a deadline
//>>>> campus Xerox offers discount if dadline is not met
//>> How to sequentially allocate the jobs to photocopiers to maximize revenue? 
//>> Brute force 
//>>>> Try all possible allocations
//>>>> choose one that is optimum
//>> Number of possibilities is exponential1
//>> Even with 30 jobs , it would take hours to compute an optimal schedule
//>> Decompose the problem
//>> Choose a job to schedule first, and the machine on which it will run , according to some stratgey.
//>> Now, recursively solve the problem for N-1 jobs
//>> Greedy approach
//>>>> Fix the choice of next job once and for all
//>>>> Never go back and try another sequence
//>> How to choose the next job?
//>>>> shortest processing time?
//>>>> earliest deadline?
//>> How to show that this stratgey is optimal?

// Variations
//>> Some photocopiers are old and slow are new and past
//>>>> Time for a job depends on choice of machine
//>> Cost of ink and papervaries across machines
//>>>> Net revenue for a job depends on choice of machine.
//>> Account for set up time between jobs
//>>>> Need to reserve time slots to reload paper
//>> Is there a valid greedy stratgey?

