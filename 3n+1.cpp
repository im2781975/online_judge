using namespace std;
void Collatz Conjecture(){
    int n, x; cin >> n >> x;
    for(int i = 0; i < n; i++){
        (x % 2 == 0) ? x /= 2 : x = 3 * x + 1;
        cout << x << " ";
    }
}
using namespace std;
//if the charge is less than 60% will take 1 minute to charge for every 1%. If the charge is less than 80%  will take 2 minute 
// And finally from 80% it will take 3 minutes .if the current charge is X% then how many minutes it will take to charge completely.
void cntMinute(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int minute[n];
    if(arr[i] >= 0 && arr[i] < 60)
        minute[i] = (60 - arr[i]) * 1;
    else if(arr[i] >= 60 && arr[i] < 80)
        minute[i] = (80 - arr[i]) * 2 + 40;
    else if(arr[i] >= 80 && arr[i] <= 100)
        minute[i] = (100 - arr[i]) * 3 + 140;
    for(int i = 0; i < n; i++)
        cout << minute[i] << " ";
}
using namespace std;
// determine how many 01 and 10 pair exist in the a string.
void pairMatch(){
    int n; cin >> n;
    string str; cin >> str;
    int cnt = 0;
    for(int i = 0, j = 1; str[j]; i++, j++){
        if((str[i] == '1' && str[j] == '0') || (str[i] == '0' && str[j] == '1')
            cnt++;
    }
    cout << cnt;
}
using namespace std;
void binarySearch(){
    vector <int> vec {2, 6, 8, 10, 12, 14, 15, 18, 19, 28, 30};
    int low = 0, high = vec.size() - 1;
    int trg = 15, res = -1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == trg){
            res = mid;
            break;
        }
        else if(arr[mid] > trg)
             high = mid - 1;
        else
            low = mid + 1;
    }
    cout << res;
}
using namespace std;
void Diffrence(){
    int a, b; cin >> a >> b;
    if(a >= 0 && b >= 0 && a <= 100 && b <= 100){
        int dist = abs(a - b)
        cout << dist;
    }
}
using namespace std;
void pattern(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = i; j >= 1; j--)
            cout << j << " ";
        cout << "\n";
    }
}
// divide N among 3 people such that every person get the same amount. If possible give same amount to 3 people, print -1 otherwise print the amount.
void divideAgain(){
    int x; cin >> x;
    (x % 3 == 0)? cout << x / 3 ; cout << -1;
}
using namespace std;
//captain put the notebooks of girls first, and then the boys. captain should keep the boy's notebooks to the left side and then the girl's notebooks. 
//If the last index of a girl's notebook is K then can you print them in the right order? Note: If K is 0, that means there is no girl's notebook.
void divideThem(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int m; cin >> m;
    //girls notebook
    for(int i = m; i <= n; i++)
        cout << arr[i] << " ";
    //boys botebook
    for(int i = 0; i < m; i++)
        cout << arr[i] << " ";
}
using namespace std;
void fifaYear(){
    int year; cin >> year;
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        cout << "Yes";
    else
        cout << "No";
}
using namespace std;
void FirstLastIdx(){
    vector <int> arr{1, 2, 3, 3, 3, 4, 5, 6};
    int low = 0, high = arr.size() - 1;
    int trg = 3, firstIdx = -1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == trg){
            firstIdx = mid;
            high = mid - 1;
        }
        else if(arr[mid] > trg)
            high = mid - 1;
        else
            low = mid + 1;
    }
    low = 0, high = arr.size() - 1;
    int lastIdx = -1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == trg){
            lastIdx = mid;
            low = mid + 1;
        }
        else if(arr[mid] > trg)
            high = mid - 1;
        else
            low = mid + 1;
    }
    cout << firstIdx << " " << lastIdx;
}
using namespace std;
// given an array of N positive integers. Find the maximum even value from the array. For finding, can perform only one of the following operations-
//Choose any even value from the array.
// Choose any two(must be different) values from the array and perform summation on those two values. If it will even you can pick those two values.
void pickValue(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    int res = ans = 0;
    int evenCnt = oddCnt = 2;
    for(int i = n - 1; i >= 0; i--){
        if(arr[i] % 2 == 0 && evenCnt > 0){
            evenCnt--;
            res += arr[i];
        }
        else if(arr[i] % 2 == 1 && oddCnt > 0){
            oddCnt--;
            ans += arr[i];
        }
    }
    if(oddCnt > 0)
        cout << res;
    else
        cout << max(res, ans);
}
