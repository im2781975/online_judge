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
