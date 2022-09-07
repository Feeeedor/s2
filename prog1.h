namespace prog1{
    struct stolbi{
        int stolbnum;//номер столбца
        double k;//само число
        struct stolbi* right;
    };
    struct stroki{
        int stroknum;//номер строки
        struct stroki* down;
        struct stolbi* right;
    };
    struct matrix{
        int m;//число строк
        int n;//число столбцов
        struct stroki* start;
    };
    template <class T>
    
        int getNum(T &a){
    std::cin>>a;
    if(!std::cin.good())
    return -1;
    return 1;
}
    
    matrix *input();
}