//class PasscodeStorage {
//public:
//    PasscodeStorage(int* passcode, int n);
//    bool isPasscode(int* attempt, int n);
//
//    void swap(PasscodeStorage other); //Helper swap
//
//    ~PasscodeStorage(); //Destructor
//    PasscodeStorage(const PasscodeStorage& other); //Copy Constructor
//
//    PasscodeStorage& operator=(PasscodeStorage other);  //Assignment Operator
//
//private:
//    int* m_passcode;
//    int m_len;
//};
//
//
//
//
//PasscodeStorage::PasscodeStorage(int* passcode, int n)
//{
//    m_len = n;
//    m_passcode = new int[n];
//    for (int i = 0; i < n; i++) {
//        m_passcode[i] = passcode[i];
//    }
//}
//
//bool PasscodeStorage::isPasscode(int* attempt, int n) {
//    if (m_len != n) {
//        return false;
//    }
//
//    for (int i = 0; i < n; i++) {
//        if (m_passcode[i] != attempt[i]) {
//            return false;
//        }
//    }
//    return true;
//
//}
//
//PasscodeStorage::PasscodeStorage(const PasscodeStorage& other) {
//    m_len = other.m_len;
//    m_passcode = new int[m_len];
//    for (int i = 0; i < other.m_len; i++) {
//        m_passcode[i] = other.m_passcode[i];
//    }
//}
//
//
//
//
//PasscodeStorage& PasscodeStorage::operator=(PasscodeStorage other) {
//    //Approach 1
//    //m_len = other.m_len;
//    //delete[] m_passcode;
//    //m_passcode = new int[m_len];
//    //for (int i = 0; i < other.m_len; i++) {
//    //    m_passcode[i] = other.m_passcode[i];
//    //}
//    //return *this;
//
//    //Approach 2 (THIS IS THE BETTER APPROACH)
//    PasscodeStorage temp(other); //Calls copy constructor (to create copy of other)
//    swap(temp);   //Swap the data of current with the temp
//    return *this;       //Return a reference to the current (and when leaving the function, destructor is called on temp).
//}
//
//void PasscodeStorage::swap(PasscodeStorage other) {
//    ///ADDED CODE: Extends my current array to the target size
//    if (m_len < other.m_len) {
//        int* currArr = new int[other.m_len];
//        
//        for (int i = 0; i < m_len; i++) {
//            currArr[i] = m_passcode[i];
//        }
//        delete [] m_passcode;
//        m_passcode = currArr;
//    }
//    ///End of Added Code
//
//    m_len = other.m_len;
//    int temp;
//
//
//    for (int i = 0; i < other.m_len; i++) {
//        temp = m_passcode[i];
//        m_passcode[i] = other.m_passcode[i];
//        other.m_passcode[i] = temp;
//    }
//}
//
//PasscodeStorage::~PasscodeStorage()
//{   
//    delete[] m_passcode;
//}
//
//int main() {
//    int a1[5] = { 1, 2, 3, 4, 5 };
//    int a2[5] = { 5, 6, 7, 8, 9 };
//    PasscodeStorage s = PasscodeStorage(a1, 5);
//    PasscodeStorage s2 = PasscodeStorage(a2, 5);
//
//    PasscodeStorage s3(s);
//    (s2 = s);
//}