src_folder = 'NetSlash/src/'

cxx_binary(
  name = 'NetSlash',
  header_namespace = 'cordial',
  headers = subdir_glob([
    (src_folder, '**/*.h'),
  ]),
  srcs = glob([
    src_folder+'/**/*.cpp',
  ]),
)