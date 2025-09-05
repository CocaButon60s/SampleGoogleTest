project(
    'SampleClassTest',
    'cpp',
    version: '0.1',
    default_options: ['warning_level=3', 'cpp_std=c++17'],
)

incs = [include_directories('../src')]
deps = [dependency('gtest', required: true), dependency('gmock', required: true)]

# サブディレクトリをまとめてビルド
subdir('SampleClassTest/test1')
subdir('SampleClassTest/test2')