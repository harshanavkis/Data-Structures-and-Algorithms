//while deleting the prop of the BST must be preserved
//leaf node removal is easy and the prop of BST is preserved
//also deletion of node with one child is easy
//CASE 3: node to be deleted has two children
// find minimum in right subtree and delete that node(first set node to be deleted as min value and then delete the original node)
//node with min value will not have a left child
//or choose max node in left sub tree


find min in right
copy the value in the targeted node
delete duplicate from right sub tree