#include "gtest/gtest.h"
#include <cmath>
#include <iostream>
#include <iomanip>
#include <set>
#include <vector>


//------------------------------------------------------------------------------------------
//Files we are testing:

#include "../../includes/tokenizer/stokenize.h"
#include "../../includes/tokenizer/ftokenize.h"
using namespace std;

void test_stokenize_alfa();
void test_stokenize_num();
void test_stokenize_punc();
void test_stokenize_operator();
void test_stokenize_combined();
void test_f_tokenize_small();

bool test_tokenize(bool debug = false)
{
  test_stokenize_alfa();
  test_stokenize_num();
  test_stokenize_punc();
  test_stokenize_operator();
  test_stokenize_combined();
  test_f_tokenize_small();
  return true;
}

void test_stokenize_alfa(){
    char s[] = "I was acting like Sleepy Joe because I forgot to declare my private variables in my constructor";
    //    char s[] = "it";
    cout << "\n\ntokenizing: [" << s << "]\n" << endl;
    STokenizer stk(s);
    Token t;
    stk>>t;
    while(stk.more()){
        //process token here...
        cout<<setw(10)<<t.type_string()<<setw(10)<<t<<endl;


        t = Token();
        stk>>t;
    }

}

void test_stokenize_num() {
    char s[] = "3.14 69 420 110173";
    //    char s[] = "it";
    cout << "\n\ntokenizing: [" << s << "]\n" << endl;
    STokenizer stk(s);
    Token t;
    stk>>t;
    while(stk.more()){
        //process token here...
        cout<<setw(10)<<t.type_string()<<setw(10)<<t<<endl;


        t = Token();
        stk>>t;
    }

}

void test_stokenize_punc() {
    char s[] = "?. ;; , : `~!";
    //    char s[] = "it";
    cout << "\n\ntokenizing: [" << s << "]\n" << endl;
    STokenizer stk(s);
    Token t;
    stk>>t;
    while(stk.more()){
        //process token here...
        cout<<setw(10)<<t.type_string()<<setw(10)<<t<<endl;


        t = Token();
        stk>>t;
    }

}

void test_stokenize_operator() {
    char s[] = "(+) < > + - %";
    //    char s[] = "it";
    cout << "\n\ntokenizing: [" << s << "]\n" << endl;
    STokenizer stk(s);
    Token t;
    stk>>t;
    while(stk.more()){
        //process token here...
        cout<<setw(10)<<t.type_string()<<setw(10)<<t<<endl;


        t = Token();
        stk>>t;
    }

}

void test_stokenize_combined() {
    char s[] = "My mum (82F) told me (12M) to do the dishes (16) but I (12M) was too busy playing Fortnite (3 kills) so I (12M) grabbed my controller (DualShock 4) and threw it at her (138kph). She died, and I (12M) went to prison (18 years). While in prison I (12M) incited several riots (3) and assumed leadership of a gang responsible for smuggling drugs (cocaine) into the country. I (12M) also ordered the assassination of several celebrities (Michael Jackson, Elvis Presley and Jeffrey Epstein). Reddit, AITA?";
    //    char s[] = "it";
    cout << "\n\ntokenizing: [" << s << "]\n" << endl;
    STokenizer stk(s);
    Token t;
    stk>>t;
    while(stk.more()){
        //process token here...
        cout<<setw(10)<<t.type_string()<<setw(10)<<t<<endl;


        t = Token();
        stk>>t;
    }

}

void test_f_tokenize_small(){
    Token t;
    FTokenizer ftk("Unprofessional.txt");
    ftk>>t;
    int token_count = 0;
    while (ftk.more()){
        token_count++;
        cout<<setw(10)<<token_count
        <<setw(3)<<left<<":"<<setw(25)<<left<<t.token_str()
        <<t.type_string()<<endl;
        ftk>>t;
    }
        
    cout<<"Tokens Found: "<<token_count<<endl;
    cout<<"=========="<<endl;

}



TEST(TEST_TOKENIZER, TestTokenize) {
  bool success = test_tokenize(true);
  EXPECT_EQ(success, true);
}




int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  std::cout<<"\n\n----------running testB.cpp---------\n\n"<<std::endl;
  return RUN_ALL_TESTS();
}

