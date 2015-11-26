class Std_interface {
public:
  virtual void start() = 0;
  virtual void suspend() = 0;
  virtual void resume() = 0;
  virtual void quit() = 0;
  virtual void full_size() = 0;
  virtual void small() = 0;

  virtual ~Std_interface() {}
};

using Pstd_mem = void (Std_interface::*)();

void f(Std_interface* p)
{
  Pstd_mem s = &Std_interface::suspend;
  p->suspend();
  p->*s();
}
int main() {}
