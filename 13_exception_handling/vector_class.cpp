template<typename T, typename A = allocator<T>>
class vector {
private:
  T* elem;  // start of allocation
  T* space; // start of free space
  T* last;  // end of allocated space
  A alloc;  // allocator

public:
  using size_type = unsigned int;
  
  explicit vector(size_type n, const T& val = T(), const A& = A());
  
  vector(const vector& a);            // copy constructor
  vector& operator=(const vector& a); // copy assignment

  vector(vector&& a);             // move constructor
  vector& operator=(vector&& a);  // move assignment

  ~vector();

  size_type size() const { return space-elem; }
  size_type capacity() const { return last-elem; }
  void reserve(size_type n);                    // increase capacity to n

  void resize(size_type n, const T& = {});      // increase size to n
  void push_back(const T&);                     // add an element at the end

  // ...
};

template<typename T, typename A>
vector<T,A>::vector(size_type n, const T& val, const A& a)
  : alloc(a)
{
  elem = alloc.allocate(n);
  space = last = elem + n;
  for (T* p = elem; p!=last; ++p)
    a.construct(p,val);
}
