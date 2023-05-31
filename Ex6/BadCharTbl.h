#include <string>

class BadCharTbl{
    private:
    
    static const int len = 256;
    int badChar[len];

    public:
    
    BadCharTbl(){
    
    }

    BadCharTbl(const std::string s, size_t size){
        Init(s, size);
    }

    void Init(const std::string s, size_t size){
        for (int i = 0; i < len; i++){
            badChar[i] = -1;
        }

        for (int i = 0; i < size; i++){
            badChar[int(s[i])] = i;
        }
    }

    int operator[] (unsigned char c) const{
        return badChar[c];
    }
};