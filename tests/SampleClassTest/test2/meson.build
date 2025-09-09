local_srcs = ['SampleClassTest.cpp', 'Mock.cpp']
foreach src : srcs
    local_srcs += '../../' + src
endforeach

local_incs = []
foreach inc : incs
    message('../../' + inc)
    local_incs += include_directories('../../' + inc)
endforeach

test(
    'SampleClassTest',
    executable(
        'SampleClassTest2',
        sources: local_srcs,
        include_directories: local_incs,
        dependencies: deps,
        link_args: ['-Wl,--allow-multiple-definition'],
    ),
)