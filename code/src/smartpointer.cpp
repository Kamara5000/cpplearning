#include <iostream>
#include <memory>
//smart pointers in C++ are template classes provided by the standard library to manage dynamic memory automatically they help prevent memory leaks and dangling pointers by ensuring proper deallocation of memory when it is no longer needed

//std::unique_ptr
//std::unique_ptr is a smart pointer that owns a dynamically allocated object exclusively meaning only one unique_ptr can point to a particular object at a time when the unique_ptr goes out of scope the memory is automatically deallocated

int main() {
    std::unique_ptr<int> uniquePtr1 = std::make_unique<int>(42); //create a unique_ptr managing an integer with value 42
    std::cout << "Unique Pointer Value: " << *uniquePtr1 << std::endl; //dereference unique_ptr to access the value

    //std::unique_ptr<int> uniquePtr2 = uniquePtr1; //error: cannot copy unique_ptr because it has exclusive ownership and copying would violate that also it has been deleted
    std::unique_ptr<int> uniquePtr2 = std::move(uniquePtr1); //transfer ownership using std::move
    if (!uniquePtr1) {
        std::cout << "uniquePtr1 is now null after move." << std::endl;
    }
    std::cout << "Unique Pointer 2 Value: " << *uniquePtr2 << std::endl;

    return 0;
}

class Weapon {
public: 
    std::string name;
    int damage;

    Weapon(std::string weaponName, int weaponDamage) : name(weaponName), damage(weaponDamage) {
        std::cout << "Weapon " << name << " created with damage " << damage << std::endl;
    }

    ~Weapon() {
        std::cout << "Weapon " << name << " destroyed." << std::endl;
    }
};

int main4() {
    {
        std::unique_ptr<Weapon> sword = std::make_unique<Weapon>("Sword", 50); //dynamically allocate Weapon object on the heap
        //use sword...
    } //sword goes out of scope here and memory is automatically deallocated

    return 0;
}

//std::shared_ptr
//std::shared_ptr is a smart pointer that allows multiple pointers to share ownership of a dynamically allocated object it keeps track of the number of shared_ptr instances pointing to the same object using reference counting when the last shared_ptr pointing to the object is destroyed the memory is automatically deallocated  
int main5() {
    std::shared_ptr<int> sharedPtr1 = std::make_shared<int>(100); //create a shared_ptr managing an integer with value 100
    {
        std::shared_ptr<int> sharedPtr2 = sharedPtr1; //shared ownership
        std::cout << "Shared Pointer 2 Value: " << *sharedPtr2 << std::endl;
        std::cout << "Reference Count: " << sharedPtr1.use_count() << std::endl; //output reference count
    } //sharedPtr2 goes out of scope here but memory is not deallocated because sharedPtr1 still owns it it will be deallocated when sharedPtr1 goes out of scope

    std::cout << "Reference Count after sharedPtr2 goes out of scope: " << sharedPtr1.use_count() << std::endl;

    return 0;
}

//std::weak_ptr
//std::weak_ptr is a smart pointer that provides a non-owning reference to an object managed by std::shared_ptr it is used to break circular references that can lead to memory leaks because weak_ptr does not affect the reference count of the shared_ptr it points to
int main6() {   
    std::shared_ptr<int> sharedPtr = std::make_shared<int>(200); //create a shared_ptr managing an integer with value 200
    std::weak_ptr<int> weakPtr = sharedPtr; //create a weak_ptr pointing to the same object

    std::cout << "Reference Count: " << sharedPtr.use_count() << std::endl; //output reference count

    if (auto lockedPtr = weakPtr.lock()) { //attempt to get a shared_ptr from weak_ptr
        std::cout << "Locked Pointer Value: " << *lockedPtr << std::endl;
    } else {
        std::cout << "Object has been deallocated." << std::endl;
    }

    sharedPtr.reset(); //release ownership of the object

    if (auto lockedPtr = weakPtr.lock()) { //attempt to get a shared_ptr from weak_ptr again
        std::cout << "Locked Pointer Value: " << *lockedPtr << std::endl;
    } else {
        std::cout << "Object has been deallocated." << std::endl;
    }

    return 0;
}