
# 二进制练习

这套练习围绕 CS:APP Data Lab 的前 9 道整数题，练习补码、位运算和整数边界。
每题都需要补全一个 C 函数。题目会检查函数行为；合法操作符和操作数上限列在题目说明中，完成后请自行检查是否符合要求。

题目顺序：

1. `bitXor`：只用 `~` 和 `&` 实现异或
2. `tmin`：构造最小的 32 位补码整数
3. `isTmax`：判断是否为最大的 32 位补码整数
4. `allOddBits`：检查所有奇数编号位是否为 1
5. `negate`：用补码表示取相反数
6. `isAsciiDigit`：判断整数是否是 ASCII 数字字符编码
7. `conditional`：实现条件选择
8. `isLessOrEqual`：判断整数大小关系
9. `logicalNeg`：不使用逻辑非运算符实现逻辑非

开始前先读对应题目的 `README.md`，然后运行：

```bash
clings
```

常用命令：

```bash
clings list
clings hint
clings tests 01_bitXor
clings check 01_bitXor
clings check
clings score --json
```

公开测试用于快速反馈，不等于对所有输入的完整证明。请特别检查题目要求的边界值和代码限制。

## 代码限制

每题只允许使用题目说明里列出的合法操作符，列表之外的一律不能用。常见的有：

- 比较运算符：`==`、`!=`、`<`、`>`、`<=`、`>=`
- 逻辑运算符：`&&`、`||`
- 三元运算符：`?:`
- 算术运算符：`-`、`*`、`/`、`%`（`+` 是否可用看具体题目）
- 自增自减：`++`、`--`

控制流语句一律禁止，包括 `if`、`else`、`switch`、`for`、`while`、`do`、`goto`。此外不能定义宏或额外的函数，不能调用函数，不能做强制类型转换，也不能使用 `int` 以外的类型。

容易误会的一点：`=` 不在被限制的操作符之列，可以正常用来声明和赋值局部变量，也不计入操作符上限。被禁止的是参与运算的那些操作符。所以这样写是允许的：

```c
int mask = x & 0xFF;
int shifted = mask << 4;
return shifted | y;
```

这些限制只作用于你补全的那个函数体，题目文件里现成的 `main`、`scanf` 之类不用管，也不需要改。

请自己确认是否符合要求了再提交。

## 环境要求

作为过来人，我们强烈推荐你使用 Linux 作为开发环境；对于 Windows 玩家，最好的选择是 WSL。Windows 的包管理始终是相当难评的一个点，~~FUCK MICROSOFT~~。

**一键安装：**

对于 Linux / WSL Ubuntu：

```bash
sudo apt update && sudo apt install -y build-essential
bash setup.sh
source "$HOME/.local/bin/env"
```

对于 macOS（没有 `apt`，先装 Xcode Command Line Tools）：

```bash
xcode-select --install
bash setup.sh
source "$HOME/.local/bin/env"
```

这样你就完成了：安装依赖并运行 `clings doctor` 自检。
看到 `compiler smoke test: ok` 就说明环境正常，可以开始 coding 了。
