## iteratorについて

begin()やend()の指す位置は実行タイミングによって変わる

```cpp
std::list<int> int_list;
std::list<int>::const_iterator it;

it = int_list.begin();

int_list.push_back(0);
```

と

```cpp
std::list<int> int_list;
std::list<int>::const_iterator it;

int_list.push_back(0);

it = int_list.begin();
```

で、

```cpp
std::cout << *it << std::endl;
```

の結果は違う。