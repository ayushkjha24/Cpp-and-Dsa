//Prove that the average time Complexity of Push_back 
//operation in Vector is O(1) time

/*
The push_back operation in a vector has an
average time complexity of O(1) time. 
This is because the operation involves appending a new element to the end of the vector,
which can be done in constant time, 
regardless of the size of the vector. Furthermore, the vector's underlying 
array resizes itself automatically to accommodate the new element, which takes O(n) time
in the worst case. However, since the resize operation is only performed when the vector is full and
the prob of resize operation happening is 1/n(n+1) in average case, it average 
time complexity of the operation is O(1).  
*/