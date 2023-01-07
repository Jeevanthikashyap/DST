/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* sort(struct ListNode* first){
	struct ListNode* temp1,*temp2,*head;
	 head = first;
	int swap;
	
	if(first==NULL)
	printf("EMPTY\n");
	else{
		for(temp1=first;temp1->next!=NULL;temp1=temp1->next){
			for(temp2=temp1->next;temp2!=NULL;temp2=temp2->next){
				if(temp1->val>temp2->val){
				swap=temp1->val;
				temp1->val=temp2->val;
				temp2->val=swap;
				}	
			}		
		}
	}
	return head;
}

struct ListNode* merging(struct ListNode* first1,struct  ListNode* first2){
	struct ListNode* temp=first1;
    if(first1==NULL && first2==NULL){
	return NULL;
    }
    if(first1==NULL){
        return first2;
    }

    while(first1->next!=NULL){
		first1=first1->next;
	}
	first1->next=first2;
	return temp;
}

struct ListNode* mergeTwoLists(struct ListNode* first1, struct ListNode* first2){

first1=merging(first1,first2);
first1=sort(first1);
return first1;
 }
 