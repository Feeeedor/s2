namespace prog1{
    struct stolbi{
        int stolbnum;//номер столбца
        double k;//само число
        struct stolbi* next;
    };
    struct stroki{
        int stroknum;//номер строки
        struct stroki* next;
        struct stolbi* next;
    };
    struct matrix{
        int m;//число строк
        int n;//число столбцов
        struct stroki* start;
    };
    template <class T>
    int getNum(T &a);
}