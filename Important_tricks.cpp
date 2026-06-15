//B_monstar
sort(v.begin(), v.end(), [&](pair<ll,ll> a, pair<ll,ll> b) {
    if (a.first != b.first)
        return a.first > b.first;
    return a.second < b.second;
//C_Move_Brackets
    string chk = "()";
    while(s.find(chk) != string::npos){
        size_t pos = s.find(chk);
        if(pos != string::npos){
            s.erase(pos,chk.length());
        }
    }    

    string num;
    cin >> num;  // Input large number as a string
    
    for (int k = 2; k <= 10; k++) {
        if (isDivisibleBy(num, k))
            cout << "Divisible by " << k << "\n";
        else
            cout << "Not divisible by " << k << "\n";
    }
