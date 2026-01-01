1. write first kernel module
    a. compile out-of-tree
        - explore make 
    b. exlpore layout of module
        - init /exit routines
        - rules - no userspace headers/functions 
                - no systemcalls
                - only use avaliable functions in kernel modules.symvers
        - exporting symbols
        - exporting modules comments
