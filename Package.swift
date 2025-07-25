// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterMdx",
    products: [
        .library(name: "TreeSitterMdx", targets: ["TreeSitterMdx"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterMdx",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterMdxTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterMdx",
            ],
            path: "bindings/swift/TreeSitterMdxTests"
        )
    ],
    cLanguageStandard: .c11
)
