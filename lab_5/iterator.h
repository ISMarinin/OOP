#ifndef ITEATOR_H
#define ITEATOR_H

template <class node, class T> class Titerator {
public:
    Titerator(shared_ptr<node> n) { 
        node_ptr = n; 
    }

    shared_ptr<T> operator*() { 
        return node_ptr->GetValue(); 
    }
    shared_ptr<T> operator->() { 
        return node_ptr->GetValue(); 
    }
    
    void operator++() { 
        node_ptr = node_ptr->GetNext();
    }
    Titerator operator++(int) {
        Titerator other(*this);
        ++(*this);
        return other;
    }

    bool operator==(Titerator const &i) { 
        return node_ptr == i.node_ptr; 
    };
    bool operator!=(Titerator const &i) { 
        return node_ptr != i.node_ptr; 
    };

private:
    shared_ptr<node> node_ptr;
};

#endif 