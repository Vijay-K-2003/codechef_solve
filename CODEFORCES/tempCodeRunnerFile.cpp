int n;
    cin >> n;
    // n = 3 () () ()
    // n = 4 () () () ()
    string s = "()";
    string str = "";
    for(int i = 0 ; i < n ; i++)
    {
        str += s;
    }
    cout << str << "\n";
