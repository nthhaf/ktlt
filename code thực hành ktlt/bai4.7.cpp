// Nguyễn Thanh Hà - 20210298
/* Bài tập 7:
Viết các hàm thực hiện các phép giao và hợp của hai tập hợp được biểu diễn bằng set.
*/
#include <iostream>
#include <set>

using namespace std;

template<class T>
set<T> set_union(const set<T> &a, const set<T> &b) {
    //*****************
    // YOUR CODE HERE - Nguyễn Thanh Hà - 20210298
    set<T> c;
    for (const T &x : a) {
        c.insert(x);
    }
    for (const T &x : b) {
        c.insert(x);
    }
    return c;
    //*****************
}

template<class T>
set<T> set_intersection(const set<T> &a, const set<T> &b) {
    //*****************
    // YOUR CODE HERE - Nguyễn Thanh Hà - 20210298
    set<T> c;
    for (const T &x : a) {
        if (b.find(x) != b.end()) {
            c.insert(x);
        }
    }
    return c;
    //*****************
}

template<class T>
void print_set(const std::set<T> &a) {
    for (const T &x : a) {
        std::cout << x << ' ';
    }
    std::cout << std::endl;
}

int main() {
    std::set<int> a = {1, 2, 3, 5, 7};
    std::set<int> b = {2, 4, 5, 6, 9};
    std::set<int> c = set_union(a, b);
    std::set<int> d = set_intersection(a, b);
    
    std::cout << "Union: "; print_set(c);
    std::cout << "Intersection: "; print_set(d);

    return 0;
}
// Nguyễn Thanh Hà - 20210298