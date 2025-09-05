test(
    'SampleClassTest2',
    executable(
        'SampleClassTest',
        'SampleClassTest.cpp',
        './Mock.cpp',
        '../../../src/SampleClass.cpp',
        include_directories: incs,
        dependencies: deps,
        link_args: ['-Wl,--allow-multiple-definition'],
    ),
)