// Pseudo code Q8 Written Assignment 

// Given a Min heap array and value Q
// Report all keys <= Q

// Min heap must be O(k) times 
// k is number of output

// Assume we have Heap constructor here... whatever
// Assume we have std::namespace...whatever


allKeysLessThanQ(int q, int node = 0, int *heap) {
	
	// if q at root return q, break (children will be bigger, this is a Minheap)
	if (node->key == q) {
		cout << to_string(heap[node])<< endl;
		return;
	}
	
	// if root is less than q, print root 
	if(node->key < q) {
		cout << to_string(heap[node])+ ", "<< endl;
	}

	int left = (2 * node) + 1; 
	int right = (2 * node) + 2; 

	// check & break when left->key or right->key bigger than q

	// Still has left and left child's key less than or equal to q
	if(left < size && left->key <= q) {

		cout << to_string(heap[left])+ ", "<< endl;
 		node = left; 
			// recurse through left
		allKeysLessThanQ(q, node, heap);
	}

	// Still has right and lright child's key less than or equal to q
	if(right < size && right->key <= q) {

		cout << to_string(heap[left])+ ", "<< endl;
 		node = right;
 			// recurse through right
		allKeysLessThanQ(q, node, heap);
	}

}
