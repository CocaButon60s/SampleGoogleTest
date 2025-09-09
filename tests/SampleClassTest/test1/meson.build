local_srcs = ['SampleClassTest.cpp']
foreach src : srcs
    local_srcs += '../../' + src
endforeach
local_incs = []
foreach inc : incs
    local_incs += include_directories('../../' + inc)
endforeach

test(
    'SampleClassTest1',
    executable(
        'SampleClassTest',
        sources: local_srcs,
        include_directories: local_incs,
        dependencies: deps,
        link_args: ['-Wl,--allow-multiple-definition'],
    ),
)