/*Richard Zhou*/
#define INIT 1 
#define DIGITS 8
#define NUM 7

struct node{
        char data;
        struct node *right;
        struct node *left;
};

void printBST(struct node* rootPtr);
struct node* delete(struct node* rootPtr,char del);
struct node* insert(struct node* rootPtr, char var);
char getMin(struct node* rootPtr);
struct node* createNode(char val);

void swap(char* x, char* y);
void makeSortedArray(struct node* rootPtr,char *arr);
struct node* createBalancedBST(struct node* tree,char arr[], int first, int last);
void printTree(struct node* rootPtr, int space);
int part1();
int part2();
int fileBST(char *arr);
int fileBalancedBST(char *arr);
struct node* fileInsert(struct node* rootPtr, char *arr);
void encrypt(char arr[]);
