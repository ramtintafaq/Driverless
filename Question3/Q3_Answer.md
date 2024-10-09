
# Q3) Medium

The major bottleneck in the code is the `searchPoint` function because `myList` is a linked list. In a linked list, elements cannot be accessed directly by their index, meaning we must traverse the list from the beginning to find a point by its ID. When dealing with a large number of points in real-time, this linear search (O(n)) becomes a significant performance issue.

A more efficient solution is to use a `HashMap`, where points can be stored with their ID as the key. This approach provides an average time complexity of O(1) for search operations, making it much more suitable for this scenario.

**Conclusion**:  
While a LinkedList is beneficial for adding or removing elements from the beginning or end, it is not ideal for frequent search operations because in a linked list, we can only access the first element directly. To reach any other element, we must follow the reference to the next element repeatedly until we find the desired one, making the search process slow (O(n) time complexity). In this case, using a HashMap would significantly improve performance by allowing direct access to points based on their ID through hashing, which provides an average search time complexity of O(1).
