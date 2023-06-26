load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")
load("@rules_foreign_cc//foreign_cc:repositories.bzl", "rules_foreign_cc_dependencies")

http_archive(
    name = "com_google_googletest",
    strip_prefix = "googletest-5ab508a01f9eb089207ee87fd547d290da39d015",
    urls = ["https://github.com/google/googletest/archive/5ab508a01f9eb089207ee87fd547d290da39d015.zip"],
)

http_archive(
    name = "bazel_skylib",
    sha256 = "f7be3474d42aae265405a592bb7da8e171919d74c16f082a5457840f06054728",
    urls = ["https://github.com/bazelbuild/bazel-skylib/releases/download/1.2.1/bazel-skylib-1.2.1.tar.gz"],
)

http_archive(
    name = "rules_foreign_cc",
    # TODO: Get the latest sha256 value from a bazel debug message or the latest
    #       release on the releases page: https://github.com/bazelbuild/rules_foreign_cc/releases
    #
    # sha256 = "...",
    strip_prefix = "rules_foreign_cc-6ecc134b114f6e086537f5f0148d166467042226",
    url = "https://github.com/bazelbuild/rules_foreign_cc/archive/6ecc134b114f6e086537f5f0148d166467042226.tar.gz",
)

rules_foreign_cc_dependencies()

_ALL_CONTENT = """\
filegroup(
    name = "all_srcs",
    srcs = glob(["**"]),
    visibility = ["//visibility:public"],
)
"""

git_repository(
    name = "polyscope",
    branch = "master",
    build_file_content = _ALL_CONTENT,
    recursive_init_submodules = 1,
    remote = "https://github.com/nmwsharp/polyscope.git",
)

http_archive(
    name = "imgui",
    build_file_content =
        """
# from https://stackoverflow.com/a/68435053
cc_library(
    name = 'imgui',
    srcs = glob(['*.cpp']),
    includes = ['.'],
    hdrs = glob(['*.h']),
    visibility = ['//visibility:public'],
)
""",
    #sha256 = "8586084f71f9bde545ee7fa6d00288b264a2b7ac3607b974e54d13e7162c1c72",
    strip_prefix = "imgui-1.89.6/",
    urls = ["https://github.com/ocornut/imgui/archive/refs/tags/v1.89.6.tar.gz"],
)
