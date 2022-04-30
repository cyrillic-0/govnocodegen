#include <iostream>
#include <fstream>

using namespace std;

int main() {
        int a; cout << "Enter a number to check until: "; cin >> a;
        
        ofstream f("oddoreven.cpp");
        f << "#include <iostream>\n\nusing namespace std;\n\n\n";
        f << "int main() {\n\tint x; cout << \"Enter a number: \"; cin >> x;\n";
        f << "\tswitch (x) {\n";
        f << "\t\tcase " << 0 << ":\n\t\t\tcout << \"Number is even\" << endl; break;\n";
        for (int i = 1; i <= a; i += 2) {
                f << "\t\tcase " << i << ":\n\t\t\tcout << \"Number is odd\" << endl; break;\n";
                f << "\t\tcase " << i+1 << ":\n\t\t\tcout << \"Number is even\" << endl; break;\n";
        }
        f << "\t}\n\treturn 0;\n}";
        f.close();

        system("g++ oddoreven.cpp -o oddoreven.exe");
        return 0;
}