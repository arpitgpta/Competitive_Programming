#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define int long long int
using namespace std;
#define pii pair <int, int>
#define mii map<int, int>
#define pb push_back
#define deb(x) cout << #x << " " << x << endl
#define deb2(x, y) cout << #x << " " << x << " " << #y << " " << y << endl
#define Loop(s, e, itr) for (int itr = s; itr < e; itr++)
#define loop(n) for(int i = 0; i < n; i++)
#define vin vector<int>
#define w(t) int tc; cin >> tc; for(int t = 1; t <= tc; t++)
#define vec vector
#define mk_arr(n, t, s) t* n = new t[s]; loop(s) cin >> n[i]; 
#define mi_arr(n, s) int* n = new int[s]; loop(s) cin >> n[i]; 
#define arr_out(n, s) Loop(0, s, lout) cout << n[lout] << " ";
#define pi(x) printf("%lld ", x);


class BST{
public:
    BST(){
        root = NULL;
    }

    struct node
    {
        int data;
        int val;
        node* l;
        node* r;
        node(int a){
            data = a;
            l = r = NULL;
        }
    };

    node* root;

    int insert(int a){
        node *temp = new node(a);
        node* prev = root;
        int ans = 1;
        if(root == NULL) root = temp;
        else{
            while(1){
                if(prev->data > a){
                    if(prev->l == NULL) {prev->l = temp; ans *= 2; break;}
                    else prev = prev->l, ans *= 2;
                }
                else{
                    if(prev->r == NULL) {prev->r = temp; ans = (ans*2+1); break;}
                    else prev = prev->r, ans = (ans*2+1);
                }
            } 
        }
        return ans;
    }

    int find(int a){
        node* temp = root;
        int ans = 1;
        while(temp->data != a){
            if(temp->data > a) temp = temp->l, ans *= 2;
            else temp = temp->r, ans = ans*2+1;
        }        
        return ans;
    }

    node* del(int a){
        node* temp = root;
        node** prev = &root;
        while(temp->data != a){
            if(temp->data < a) prev = &(temp->r), temp = temp->r;
            else prev = &(temp->l), temp = temp->l;
        }
        node* rep = NULL;
        // if(temp->l == NULL){
        //     if(temp->r == NULL) *prev = NULL;
        //     else{
        //         rep = temp->r;
        //         while(rep->l != NULL) rep = rep->l;
        //         int rd = rep->data;
        //         int rv = rep->val;
        //         del(rep->data);
        //         (*prev)->data = rd;
        //         (*prev)->val = rv;                
        //     } 
        // }
        // else {
        //     rep = temp->l;
        //     while(rep->r != NULL) rep = rep->r;
        //     int rd = rep->data;
        //     int rv = rep->val;
        //     del(rep->data);
        //     (*prev)->data = rd;
        //     (*prev)->val = rv;                
        // }

        if(temp->r == NULL){
            if(temp->l == NULL) *prev = NULL;
            else{
                rep = temp->l;
                while(rep->r != NULL) rep = rep->r;
                int rd = rep->data;
                int rv = rep->val;
                del(rep->data);
                (*prev)->data = rd;
                (*prev)->val = rv;                
            } 
        }
        else {
            rep = temp->r;
            while(rep->l != NULL) rep = rep->l;
            int rd = rep->data;
            int rv = rep->val;
            del(rep->data);
            (*prev)->data = rd;
            (*prev)->val = rv;                
        }

        return temp;
    }

    void inorder(node* root){
        if(root == NULL) return;
        inorder(root->l);
        cout << root->data << " ";
        inorder(root->r);
    }
};

int32_t main(){
    BST *bst = new BST();
    int q;
    cin >> q;
    char g, ch;
    int a;
    while(q--){
        scanf("%c %c %lld", &g, &ch, &a);
        if(ch == 'i'){
            cout << bst->insert(a) << endl;
        }
        else{
            cout << bst->find(a) << endl; 
            bst->del(a);
        }    
        // cout << "inorder ";bst->inorder(bst->root); cout << endl;   
    }
}