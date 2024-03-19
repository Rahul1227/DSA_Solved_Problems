

// solution:
/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 *		Node() : data(0), next(nullptr){};
 *		Node(int x) : data(x), next(nullptr){};
 *		Node(int x, Node *next) : data(x), next(next){};
 * };
 */

Node* insert(int k, int val, Node *head) {
	Node *newNode = new Node(val);
	//checking if the head is empty or not
	if(head==nullptr){
		newNode->next=newNode;
		return newNode;
	}
	if(k==0){
		newNode->next=head;
		Node*temp=head;
		while(temp->next!=head){
			temp=temp->next;
		}
		temp->next=newNode;
		return newNode;
	
	}

	Node *temp=head;
	int count=1;
	while(count<k){
		temp=temp->next;
		count++;
	}
	newNode->next=temp->next;
	temp->next=newNode;
	return head;
}