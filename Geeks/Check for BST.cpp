void inorder(Node*root, vector <int>&a){
    if(root!=NULL){
        inorder(root->left, a);
        a.push_back(root->data);
        inorder(root->right, a);
    }
}
bool isBST(Node* root) {
    vector <int> a;
    inorder(root,a);
    int i;
    for(i=0;i<a.size();i++){
        if(i<a.size()-1 && a[i]>a[i+1]) break;
    }
    if(i==a.size()) return true;
    else return false;
}
