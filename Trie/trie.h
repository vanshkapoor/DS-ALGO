// implementation of complete tree here

class trie
{
    TrieNode *root;
    public:
        trie(){
            root = new TrieNode('\0');
        };


        void insert(TrieNode *root, string word)
        {

            // base case
            if(word.size() == 0)
            {
                root ->terminal=true;
                return;
            }

            int index = word[0] - 'a';

            // check for word now
            TrieNode *child;
            if(root->children[index] != nullptr)
            {
                // means that the element is there
                child = root->children[index];
            }else{
                child = new TrieNode(word[0]);
                root->children[index] = child;                    
            }

            // recursive call
            insert(child,word.substr(1));
        }


        // helper function for insert
        void inert_word(string word)
        {
            insert(root,word);
        }



        // SEARCH
        bool search_word(TrieNode *root, string word)
        {
            if(word.size() == 0)
            {
                if(root->terminal)
                {
                    return true;
                }else{
                    return false;
                }
            }

            int index = word[0]-'a';
            if(root->children[index] == nullptr)
            {
                return false;
            }else{
                search_word(root->children[index],word.substr(1));
            }


        }




};
