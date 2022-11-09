#include <iostream>
#include "Array.h"

using namespace std;

template <typename T>
void min(T tab[], int n) {
    T min = tab[0];
    for (int i = 1; i < n; i++) {
        if (tab[i] < min)
            min = tab[i];
    }
    cout << min;
}
int main()
{
    float tab[3] = { 1.5,-2.1,2};
    min<float>(tab, 3);

    arr<int> arr1(5);
    for (int j = 5; j > 0; j--) {
        arr1.add(j);
    }
    arr1.show();
    cout << endl;
    cout << "max wynosi: " << " ";
    arr1.maximum();
    arr1.sort1();
    cout << endl;
    int a;
    cout << "Podaj index: " << endl;
    cin >> a;
    cout << "Wartosc pod podanym indexem to: " << arr1.zwracanie(a) << endl;
    arr<string> arr2(5);
    arr2.add("mjdmjdd");
    arr2.add("dasda");
    arr2.show();
    cout << endl;
    arr2.sortowanie();
    arr2.show();
    cout << endl;
    cout << "najdluzyszy wyraz wpisany do tablicy: " << endl;
    arr2.maxS();
    return 0;
}
