{
  "targets": [
    {
      "target_name": "tree_sitter_mdx_binding",
      "include_dirs": [
        "<!(node -e \"require('node-addon-api').include\")",
        "src"
      ],
      "sources": [
        "bindings/node/binding.cc",
        "src/parser.c",
        "src/scanner.c"
      ],
      "cflags_c": [
        "-std=c99",
      ],
      "conditions": [
        ["OS!='win'", {
          "cflags_c": [
            "-std=c99",
          ],
        }],
        ["OS=='mac'", {
          "xcode_settings": {
            "OTHER_CFLAGS": [
              "-std=c99",
            ],
          },
        }],
      ],
    }
  ]
}