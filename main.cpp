#include <iostream>
#include "SelInSSort.h"
#include "QS_Partition.h"
#include "QS_MedianOFThree.h"
#include "output.h"
int main() {
    //int arr[] = {2, 8,3,1,9,7,1};
    //int n = sizeof (arr) / sizeof (arr[0]);

    //Selection_Sort ss;
    //ss(arr, arr + n);
    //Insertion_Sort in;
    //in(arr, arr + n);
    //Std_Sort sort;
    //sort(arr, arr + n);
    //Q_Sort_Partition qs;
    //qs(arr, arr + n);
    //Q_Sort_MF3 qs3;
    //qs3(arr, arr + n);
    /*for(int i = 0; i < n; i++){
        std::cout << arr[i]<< " ";
    }*/

    auto start = std::chrono::high_resolution_clock::now();


    //printIfile(Insertion_Sort(), Konstant, "Insr_sort/Insertion_sort_Kons.txt");
    //printIfile(Selection_Sort(), Konstant, "Sele_sort/Selection_sort_konst.txt");
    //printIfile(Std_Sort(), stigande, "Std_sort/Std_sort_Stigande.txt");

    printIfile(Q_Sort_Partition(), stigande, "QS_part/Quick_Sort_PN_Stigandeeee.txt");
    //printIfile(Q_Sort_MF3(), Konstant,"QS_MO3/Quick_Sort_MO3_konsttt.txt");



    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "Total time to test all sorts: " << duration.count()/60 << " minutes.\n";
    return 0;
}
