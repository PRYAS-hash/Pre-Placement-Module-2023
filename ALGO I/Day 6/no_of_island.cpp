class Solution {
public:
    Node* connect(Node* root) {
        Node* prev=NULL;
        Node* finalroot=root;
        while(root){
            
            for(auto curr=root;curr;curr=curr->next){
                
                if(curr->left){
                  if(!prev)root=curr->left;
                  else prev->next=curr->left;
                  prev=curr->left;
                  
                }
                if(curr->right){
                    if(!prev)root=curr->right;
                    else prev->next=curr->right;
                    prev=curr->right; 
                    
                }
            }
            if(prev==NULL)break; // Nothing left to explore
            prev=NULL;
        }
        return finalroot;
    }
};
