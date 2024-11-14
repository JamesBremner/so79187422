#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include "cSO79187422.h"

void test1()
{
    cSO79187422 L;

    // Add A and B
    L.addEnd( sElement("A"));
    L.addEnd( sElement("B"));
    L.text();

    // Add C at 1th pos
    L.addAt(1,sElement("C"));
    L.text();

    // Move A to 1
    L.move(L.find(sElement("A")),1);
    L.text();
}

main()
{
    test1();
    return 0;
}
