#include <string>
using namespace std;

struct Work {
  string author;
  string name;
  int year;
};

void f()
{
  Work s9 {"Beethoven",
            "Symphony No. 9 in D minor, Op. 125; Choral",
            1824
          }; // memberwise initialization

  Work currently_playing (s9);
  Work none{};
}

int main()
{
  f();
}
