#include <iostream>#include <cstring>#include "lb5.h"#include <fstream>using std::cin;using std::cout;using std::endl;int main(int argc, char *argv[]) {    char *text = new char[10000];    char sign = ' ';    int i = 0;    int count_of_sentences = 0;    if ((argc == 2 && (strcmp(argv[1], "--fromfile") == 0)) || (argc == 3 && ((strcmp(argv[2], "--fromfile") == 0) || (strcmp(argv[1], "--fromfile") == 0)))) {        std::ifstream input("input.txt");        cin.rdbuf(input.rdbuf());        while (1) {            sign = cin.peek();            if ((sign == '.') ||(sign == '!') || (sign == '?')) {                count_of_sentences += 1;                text[i] = sign;                text[i + 1] = '\n';                i += 2;                cin.ignore();            } else if (sign == ' ') {                if (text[i - 1] == '\n') {                    cin.ignore();                } else {                    text[i] = sign;                    i += 1;                    cin.ignore();                }            } else if (sign == '%') {                break;            } else {                text[i] = sign;                i += 1;                cout<<text[i];                cin.ignore();            }        }    }    else{        cout << "Enter text. After finishing input put %" << endl;        while (1) {            sign = cin.peek();            if ((sign == '.') ||(sign == '!') || (sign == '?')) {                count_of_sentences += 1;                text[i] = sign;                text[i + 1] = '\n';                i += 2;                cin.ignore();            } else if (sign == ' ') {                if (text[i - 1] == '\n') {                    cin.ignore();                } else {                    text[i] = sign;                    i += 1;                    cin.ignore();                }            } else if (sign == '%') {                break;            } else {                text[i] = sign;                i += 1;                cout<<text[i];                cin.ignore();            }        }    }    int lengths[count_of_sentences];    int ln = 1;    int j = 0;    for (int i = 0; i < strlen(text); ++i) {        if ((text[i] != '.') && (text[i] != '!') && (text[i] != '?')) {            ln += 1;        } else {            lengths[j] = ln;            j += 1;            ln = 0;        }    }    sort(lengths, count_of_sentences);    if ((argc == 2 && (strcmp(argv[1], "--tofile") == 0)) || (argc == 3 && ((strcmp(argv[2], "--tofile") == 0) || (strcmp(argv[1], "--tofile") == 0)))) {        std::ofstream output("output.txt");        cout.rdbuf(output.rdbuf());        sorting(lengths, text, count_of_sentences);    }    else{        sorting(lengths, text, count_of_sentences);    }    std::ofstream output("Nine.txt");    cout.rdbuf(output.rdbuf());    reverse(lengths, text, count_of_sentences);}