#include "LinkedList.h"

template <typename T>

class Stack : public LinkedList<T>{
	public:
		bool Delete (T &element){
			Node <T> *temp;

			if(this->first == 0)
				return false;
				
			temp = this->first;
			element = temp->data;
			this->first = temp->link;
			this->current_size--;
			delete temp;
			return true;
			}
};
