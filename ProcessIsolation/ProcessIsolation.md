# Process Isolation
## Good Code
In this code, the data is not occupying the same place in memory, so it is easier to distinguish between different data points and gives a better guarantee that the data won't be incorrect.

## Bad Code
The two numbers occupy the same place in memory, and it becomes difficult to distinguish between which data point is which once the two are combined.
