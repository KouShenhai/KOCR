# KOCR

这是一个 C++23 + Qt 6 的最小 CMake 工程。程序使用 Qt Core 的 `QFile` 和
`QTextStream`，在当前工作目录创建 `test.csv` 并写入 `test,3333`。

## 环境要求

- CMake 3.21 或更高版本
- Qt 6.5 或更高版本（包含 Qt Core）
- 支持 C++23、且与 Qt 安装包匹配的编译器

## Windows 构建和运行

将 `<Qt安装目录>` 替换为包含 `lib/cmake/Qt6` 的目录：

```powershell
cmake -S . -B build-qt6 -G "MinGW Makefiles" -DCMAKE_PREFIX_PATH="<Qt安装目录>"
cmake --build build-qt6
./build-qt6/kocr.exe
Get-Content ./test.csv
```

预期 CSV 内容：

```text
test,3333
```

