project(
    'sysinfopp', 'cpp',
    default_options: ['cpp_std=c++17'],
    version: '0.0.1',
    license: 'BSD-3'
)

subdir('sysinfopp')
if get_option('build_tests')
    subdir('test')
else
    message('Skipping tests')
endif
if get_option('build_samples')
    subdir('samples')
else
    message('Skipping samples')
endif
