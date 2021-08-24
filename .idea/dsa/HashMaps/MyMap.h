#include "iostream"

using namespace std;

template<typename v>
class MapNode {
public:
    string key;
    v value;
    MapNode *next;

    MapNode(string key, v value) {
        this->key = key;
        this->value = value;
        next = NULL;
    }

    ~MapNode() {
        delete next;
    }
};

template<typename v>
class MyMap {
    MapNode<v>** bucket;
    int count;
    int numBuckets;
public:
    MyMap() {
        count = 0;
        numBuckets = 5;
        bucket=new MapNode<v>*[numBuckets];
        for (int i = 0; i < numBuckets; i++) {
            bucket[i] = NULL;
        }
    }

    ~MyMap() {
        for (int i = 0; i < numBuckets; ++i) {
            delete bucket[i];
        }
        delete bucket;
    }

    int size() {
        return this->count;
    }

private:
    int getByHash(string key){
        int hashCode=0;
        int currCoeff=1;
        for(int i=key.length()-1;i>=0;i--){
            hashCode+=key[i]*currCoeff;
            hashCode=hashCode%numBuckets;
            currCoeff*=37;
            currCoeff=currCoeff%numBuckets;
        }
        return hashCode%numBuckets;
    }

    void rehash(){
        MapNode<v>** temp=bucket;
        bucket=new MapNode<v>*[2*numBuckets];
        for (int i = 0; i < 2*numBuckets; ++i) {
            bucket[i]=NULL;
        }
        int oldSize=numBuckets;
        numBuckets*=2;
        count=0;
        for (int i = 0; i < oldSize; ++i) {
            MapNode<v>* head=temp[i];
            while (head!=NULL){
                insert(head->key,head->value);
                head=head->next;
            }
        }
        for (int i = 0; i < oldSize; ++i) {
            MapNode<v>* head=temp[i];
            delete head;
        }
        delete temp;
    }
public:
    void insert(string key, v value) {
        int index=getByHash( key);
        MapNode<v>* head=bucket[index];
        while (head!=NULL){     //here we are simply checkin if there is any key present in my earlier
                                //map ,if yes ther we simply update the same key with new value
            if(head->key==key){
                head->value=value;
                return;
            }
            head=head->next;
        }
        head=bucket[index];
        MapNode<v>* node=new MapNode<v>(key,value);
        node->next=head;
        bucket[index]=node;
        count++;
        double loadFactor=(1.0*count)/numBuckets;
        if(loadFactor>0.7){
            rehash();
        }
    }

    v getValue(string key) {
        int index=getByHash( key);
        MapNode<v>* head=bucket[index];
        while (head!=NULL){
            if(key==head->key){
                return head->value;
            }
            head=head->next;
        }
        return 0;

    }

    v remove(string key) {
        int index=getByHash( key);
        MapNode<v>* head=bucket[index];
        MapNode<v>* prev=NULL;
        while (head!=NULL){
            if(key==head->key) {
                if (prev == NULL) {
                    bucket[index]=head->next;
                } else {
                    prev->next = head->next;
                }
                head->next = NULL;
                v val=head->value;
                count--;
                delete head;
                return val;
            }
            prev=head;
            head=head->next;
        }
        return 0;
    }
};