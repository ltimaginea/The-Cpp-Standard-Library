# Type Trait

用以检验 copy 和 move 语义的那些个 trait ，只检验是否相应的表达式为可能。例如，一个“带有 copy 构造函数（接受常量实参）但没有 move 构造函数”的类型，仍然是 move constructible 。 参见下文的 *References* 链接。

`is_nothrow...type trait` 特别被用来阐述 `noexcept` 异常明细。举例 [Ch05_04_SynthesizedMoveConstructor_noexcept_false.cpp](./Ch05_04_SynthesizedMoveConstructor_noexcept_false.cpp) 和 [Ch05_04_SynthesizedMoveConstructor_noexcept_true.cpp](./Ch05_04_SynthesizedMoveConstructor_noexcept_true.cpp) 。

## References

* [is_move_constructible - C++ Reference (cplusplus.com)](http://www.cplusplus.com/reference/type_traits/is_move_constructible/)
* [is_nothrow_move_constructible - C++ Reference (cplusplus.com)](http://www.cplusplus.com/reference/type_traits/is_nothrow_move_constructible/)
* [std::is_move_constructible, std::is_trivially_move_constructible, std::is_nothrow_move_constructible - cppreference.com](https://en.cppreference.com/w/cpp/types/is_move_constructible)

