target("main")
    set_kind("binary")
    add_files("main.cc")

target("main2")
    set_kind("binary")
    add_files("main2.c")

add_rules("mode.debug", "mode.release")
target("main3")
    set_kind("binary")
    add_files("main3.zig")
