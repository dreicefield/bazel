# overview
This is an artifical bazel workspace with packages `//src/a`, `//src/b` and `//src/c`.
Package "b" depends on "a".
Package "c" depends on a package "d" that is autogenerated.

# bazel interview questions
- How do you build and run target `//src/a:a`
- How do you figure out the actual compile (gcc) and link (ld) commands that bazel runs when building `//src/a:a`
- Try to build `//src/b:b`. Why is the build failing? How can you fix it?
- How can you query for all dependencies of `//src/b:b`?
- There is a script `scripts/generator.py` that generates more bazel packages based on a config files `config/config.yaml`. Package "c" depends on a target that is generated by the script. What are the options to successfully model the dependency and run the target `//src/c:c`