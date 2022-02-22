
#include <iostream>

using namespace std;
int func(int ch){
    int a;
    while (ch != 0) {
        a = ch % 10;
        ch /= 10;
    }
    return a;
}
void sort(int a,int b) {
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    func(56679);
    setlocale(LC_ALL, "Russian");
    int number;
    cout << " ";
    cin >> number;
    if (number == 1) {
        int arr[10000];
        int p = 0;
        int n;
        int a;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            arr[i] = a;
        }
        for (int i = 0; i < n; i++)
        {
            
            for (int j = 2; j < arr[i]/2; j++)
            {
                if (arr[i] % j == 0 || arr[i] == 1) {
                    p = 1;
                    break;
                }
            }

            if (p == 1){
                for (int i = 0; i < n; i++) {
                    for (int j = i; j < n - 1; j++) {
                        if (arr[j] > arr[j + 1]) {
                            int temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }
            }
            if (p == 1) { 
                
                for (int i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }
                break;
            }
        }
    }
    if (number == 2) {
        int arr[1000];
        int mult[1000];
        int p = 0;
        int umn = 1;
        int n;
        int a;
        int ch;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            arr[i] = a;
        }
    
        for (int i = 0; i < n; i++)
        {
            ch = arr[i];
            while (ch != 0) {  
                umn *= (ch % 10);
                ch /= 10;
            }
            mult[i] = umn;
            umn = 1;
            cout << mult[i] << " ";
            cout << endl;
        }
       
        int temp1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (mult[j] > mult[j + 1]) {
                    temp1 = mult[j];
                    mult[j] = mult[j + 1];
                    mult[j + 1] = temp1;
                    temp1 = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp1;

                }
                if (mult[j] == mult[j + 1]) {
                    if (func(arr[j]) > func(arr[j + 1])) {
                        temp1 = mult[j];
                        mult[j] = mult[j + 1];
                        mult[j + 1] = temp1;
                        temp1 = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp1;

                    }
                    else if(func(arr[j]) == func(arr[j + 1])){
                        if (arr[j] > arr[j + 1]) {
                            temp1 = mult[j];
                            mult[j] = mult[j + 1];
                            mult[j + 1] = temp1;
                            temp1 = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp1;
                        }

                    }
                }
            }

        }
        

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";

        }
        cout << endl;
        for (int i = 0; i < n; i++) {
            cout << mult[i] << " ";
        }
    }
    if (number == 3) {
        int n;
        int m;
        int min = 9999;
        int point;
        int y;
        int p;
        cin >> n;
        cin >> m;
        int arr[100][100];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n - 1; j++) {
                if (arr[i][j] % 2 == 0) {
                    point++;
                }
                p = j;
            }
            if (point < min) {
                min = point;
                y = p;
            }
            point = 0;
        }
        for (int i = 0; i > m; i++)
        {
            arr[p][i] *= arr[p][i];
        }
    }
}


