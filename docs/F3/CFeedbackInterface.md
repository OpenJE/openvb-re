# F3::CFeedbackInterface

[Return to `F3`](/docs/F3.md)

## C++

- [`CFeedbackInterface.hpp`](/c++/include/CFeedbackInterface.hpp)
- [`CFeedbackInterface.cpp`](/c++/source/CFeedbackInterface.cpp)

## References

- [`F3::HeapTracker`](/docs/F3/HeapTracker.md)
- [`F3::GUI::Interface`](/docs/F3/GUI/Interface.md)
- [`F3::CEngineInterface`](/docs/F3/CEngineInterface.md)

## Inheritance

```mermaid
graph TD;
    F3::HeapTracker --> F3::GUI::Interface
    F3::GUI::Interface --> F3::CEngineInterface
    F3::CEngineInterface --> F3::CFeedbackInterface
```

[Return to `F3`](/docs/F3.md)