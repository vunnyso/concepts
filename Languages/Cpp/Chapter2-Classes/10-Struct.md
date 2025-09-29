<h1 style="text-align:center;"> Structure </p>

### Structure

- Creates a user-defined type through keyword struct
- No difference as compared to a class, expect default access is public
- Frequently used
  - to represent simple abstract types such as point, vector3D, etc.
  - for implementing function objects

### Example

```cpp
struct Point {
  int x, y;
};

void DrawLine(Point start, Point end) {
  std::cout << "Start point x: " << start.x << " and start point y: " << start.y
            << std::endl;
}

int main() {
  Point p1{1, 2};
  Point p2{3, 4};
  DrawLine(p1, p2);
  return 0;
}
```
