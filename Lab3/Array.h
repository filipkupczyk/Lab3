#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
template <typename T>
class arr{
private:
    T* tab;
    int max;
    int index;
public:
    arr(int max1);
    arr();
    ~arr();
    void sortowanie();
    void sort1();
    void maximum();
    void maxS();
    void show();
    int zwracanie(int index1);
    void add(T value);
};
template <typename T>
arr<T>::arr(int max1) {
    tab = new T[max1];
    this->max = max1;
}
template <typename T>
arr<T>::arr() {
    tab = new T[10];
    this->max1 = 10;
}
template <typename T>
arr<T>::~arr() {
    delete[] tab;
}
template <typename T>
void arr<T>::sort1() {
    sort(tab, tab + max);
    cout << "\nElementy uporzadkowane:\n";
    for (int i = 0; i < max; i++)
        cout << tab[i] << ' ';
}
template <typename T>
void arr<T>::maximum() {
    int maximum = tab[0];
    for (int i = 0; i < max; i++) {

        if (maximum < tab[i]) {
            maximum = tab[i];
        };

    }
    cout << maximum << endl;
}
template <>
void arr<string>::maxS() {
    string pom;
    int m = tab[0].length();
    for (int i = 0; i < max; i++) {

        if (m < tab[i].length()) {
            m = tab[i].length();
            pom = tab[i];
        }

    }
    cout << pom << endl;
}

template <typename T>
void arr<T>::show() {
    for (int i = 0; i < max; i++) {
        cout << tab[i] << ' ';
    }
}
template <typename T>
void arr<T>::add(T value)
{
    tab[index] = value;
    index++;
}
template <typename T>
int arr<T>::zwracanie(int index1) {
    return tab[index1];
}
template <>
void arr<string>::sortowanie() {

    for (int i = 0; i < max; i++)
        for (int j = 1; j < max - i; j++)
            if (tab[j - 1].length() > tab[j].length())
                swap(tab[j - 1], tab[j]);

}
#endif


