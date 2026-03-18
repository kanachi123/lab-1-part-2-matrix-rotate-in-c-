#include <iostream>

class ListNode 
{
public:
    ListNode(const double data, ListNode* next = nullptr);
    double _data;
    ListNode* _nextPtr;
};

ListNode::ListNode(const double data, ListNode* next) : _data(data), _nextPtr(next) {}

class List {
public:
    
    List();
    ~List();
    void insertAtFront(const double data);
    void insertAtBack(const double data);
    bool removeFromFront(double& data);
    bool removeFromBack(double& data);
    bool isEmpty() const;
    void print() const;
    int _count = 0;

private:
    ListNode* createNode(const double data) const;
    ListNode* _firstPtr;
    ListNode* _lastPtr;
};

List::List() : _firstPtr(nullptr), _lastPtr(nullptr) {}

List::~List() {
    while (!isEmpty()) 
    {
        ListNode* temp = _firstPtr;
        _firstPtr = _firstPtr->_nextPtr;
        delete temp;
    }
}

void List::insertAtFront(const double data) {
    ListNode* newNode = createNode(data);
    if (isEmpty()) 
    {
        _firstPtr = _lastPtr = newNode;
    }
    else 
    {
        newNode->_nextPtr = _firstPtr;
        _firstPtr = newNode;
        _count++;
    }
}

void List::insertAtBack(const double data) {
    ListNode* newNode = createNode(data);
    if (isEmpty()) {
        _firstPtr = _lastPtr = newNode;
    }
    else {
        _lastPtr->_nextPtr = newNode;
        _lastPtr = newNode;
        _count++;
    }
}

bool List::removeFromFront(double& data) {
    if (isEmpty()) {
        return false;
    }
    else 
    {
        ListNode* temp = _firstPtr;
        data = _firstPtr->_data;
        if (_firstPtr == _lastPtr) 
        {
            _firstPtr = _lastPtr = nullptr;
        }
        else 
        {
            _firstPtr = _firstPtr->_nextPtr;
        }
        delete temp;
        _count--;
        return true;
    }
}

bool List::removeFromBack(double& data) {
    if (isEmpty()) {
        return false;
    }
    else {
        ListNode* temp = _firstPtr;
        if (_firstPtr == _lastPtr) {
            data = _firstPtr->_data;
            _firstPtr = _lastPtr = nullptr;
        }
        else {
            while (temp->_nextPtr != _lastPtr) {
                temp = temp->_nextPtr;
            }
            data = _lastPtr->_data;
            temp->_nextPtr = nullptr;
            delete _lastPtr;
            _lastPtr = temp;
        }
        _count--;
        return true;
    }
}

bool List::isEmpty() const {
    return _firstPtr == nullptr;
}

void List::print() const {
    if (isEmpty()) {
        std::cout << "List is empty." << std::endl;
    }
    else {
        std::cout << "List contents: ";
        ListNode* current = _firstPtr;
        while (current != nullptr) {
            std::cout << current->_data << " ";
            current = current->_nextPtr;
        }
        std::cout << std::endl;
    }
}

ListNode* List::createNode(const double data) const {
    return new ListNode(data);
}

int main() {
    List myList;

    myList.insertAtFront(10);
    myList.insertAtFront(20);
    myList.insertAtBack(30);
    myList.print();
    
    std::cout<<" "<<myList._count<<std::endl;

    double removedData;
    if (myList.removeFromFront(removedData)) {
        std::cout << "Removed data from the front: " << removedData<< std::endl;
    }
    else {
        std::cout << "List is empty." << std::endl;
    }

    myList.print();

    if (myList.removeFromBack(removedData)) {
        std::cout << "Removed data from the back: " << removedData << std::endl;
    }
    else {
        std::cout << "List is empty." << std::endl;
    }

    myList.print();

    return 0;
}
