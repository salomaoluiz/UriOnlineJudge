#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    double n, qtd[10000], total=0, totalC=0, totalR=0, totalS=0, perC=0, perR=0, perS=0;
    string tipo[10000];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> qtd[i];
        cin >> tipo[i];
    }

    for (int j = 0; j < n; j++)
    {
        total += qtd[j];
        if(tipo[j] == "S")
        {
            totalS += qtd[j];
        }
        else if(tipo[j] == "C")
        {
            totalC += qtd[j];
        }
        else if(tipo[j] == "R")
        {
            totalR+= qtd[j];
        }
    }
    perC = totalC*100/total;
    perS = totalS*100/total;
    perR = totalR*100/total;


    cout << "Total: " << total <<" cobaias"<<endl;
    cout << "Total de coelhos: " <<totalC <<endl;
    cout << "Total de ratos: " << totalR <<endl;
    cout << "Total de sapos: "<< totalS<<endl;
    std::cout.precision(2);
    std::cout << "Percentual de coelhos: " << std::fixed << perC <<" %"<<endl;
    std::cout << "Percentual de ratos: " << std::fixed << perR << " %" << endl;
    std::cout << "Percentual de sapos: " <<std::fixed << perS << " %"<<endl;
    return 0;
}
