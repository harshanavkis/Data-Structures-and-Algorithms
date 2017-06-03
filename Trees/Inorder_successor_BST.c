//Find node that would come immediately after the given node in inorder traversal
//in BST this would be  the next higher number during traversal
//try to find successor in O(H) time where H is height of tree
// if for node there is a right subtree the next inorder successor is the node as left as possible
//Case 1:Node has right subtree Find min in right subtree or  go deep to leftmost node in right subtree
//Case 2: No right subtree = if going from left then successor will be the parent else it will be the grandparent
// Create an extra field in struct pointing to the parent of the given node
//or walk down from root to node and deepest ancestor in left will be the successor only if there is no right subtree

