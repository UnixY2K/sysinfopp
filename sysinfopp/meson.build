
sysinfopp_api_incl = include_directories('include')
sysinfopp_api_priv = include_directories('private')

sysinfopp_deps = []
sysinfopp_incl = [sysinfopp_api_incl, sysinfopp_api_priv]
sysinfopp_link = []
sysinfopp_deps = []
sysinfopp_args = []
sysinfopp_srcs = [
    'src/sysinfopp.cpp'
]

## add platform specific files
subdir('impl')

sysinfopp_deps += sysinfopp_impl_deps
sysinfopp_incl += sysinfopp_impl_incl
sysinfopp_link += sysinfopp_impl_link
sysinfopp_args += sysinfopp_impl_args
sysinfopp_srcs += sysinfopp_impl_srcs


sysinfopp_lib = library('sysinfopp',
                        sysinfopp_srcs,
                        include_directories: sysinfopp_incl,
                        link_with: sysinfopp_link,
                        cpp_args: sysinfopp_args,
                        dependencies: sysinfopp_deps)

sysinfopp_dep = declare_dependency(
    link_with: sysinfopp_lib,
    include_directories: sysinfopp_api_incl,
)