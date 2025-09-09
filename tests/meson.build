project(
    'SampleClassTest',
    'cpp',
    version: '0.1',
    default_options: ['warning_level=3', 'cpp_std=c++17'],
)

srcs = run_command('find', '../src', '-name', '*.cpp', check: true).stdout().splitlines()

incs = run_command(
    'find',
    '../src',
    '-path', '../src/builddir',
    '-prune',
    '-o',
    '-type', 'd',
    '-print',
    check: true,
).stdout().splitlines()
foreach inc : incs
    message(inc)
endforeach

deps = [dependency('gtest', required: true), dependency('gmock', required: true)]

# サブディレクトリをまとめてビルド
subdir('SampleClassTest/test1')
subdir('SampleClassTest/test2')