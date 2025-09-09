project('GoogleTest', 'cpp')

srcs = run_command('find', '.', '-name', '*.cpp', check: true).stdout().splitlines()
ret = run_command(
    'find',
    '.',
    '-path', './builddir',
    '-prune',
    '-o',
    '-type', 'd',
    '-print',
    check: true,
).stdout().splitlines()

foreach src : srcs
    message(src)
endforeach

incs = []
foreach inc : ret
    incs += include_directories(inc)
endforeach

executable(
    'main',
    sources: srcs,
    include_directories: incs,
)