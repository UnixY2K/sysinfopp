fs = import('fs')

sysinfopp_impl_incl = [ include_directories('include') ]
sysinfopp_impl_srcs = []
sysinfopp_impl_args = []
sysinfopp_impl_link = []
sysinfopp_impl_deps = []

impl_dir = host_machine.system()

sysinfopp_impl_src_dir = 'impl' / impl_dir

if fs.is_dir(impl_dir)
    message('Using ' + impl_dir + ' implementation: ')
    subdir(impl_dir)
else
    message('platform ' + impl_dir + ' not supported, using fallback')
    sysinfopp_impl_src_dir = 'impl' / 'fallback'
    subdir('fallback')
endif
