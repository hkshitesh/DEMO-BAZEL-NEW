load("@rules_cc//cc:defs.bzl","cc_binary","cc_library")

cc_binary(
    name = "hello-world",
    srcs = ["hello-world.cc"],
    deps = [":hello-greet"],
)


cc_library(
    name = "hello-greet",
    srcs = ["hello-greet.cc"],
    hdrs = ["hello-greet.h"],
)