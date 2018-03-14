// swift-tools-version:4.0
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "SwiftPlusPlus",
    products: [
        // Products define the executables and libraries produced by a package, and make them visible to other packages.
        .library(
            name: "cfactorial", 
            targets: ["cfactorial"]),
        .library(
            name: "SwiftPlusPlus",
            targets: ["SwiftPlusPlus"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        // .package(url: /* package url */, from: "1.0.0"),
    ],
    targets: [
        .target(
            name: "cfactorial",
            path: "./Sources/factorial"
        ),
        .target(
            name: "SwiftPlusPlus",
            dependencies: ["cfactorial"]),
        .testTarget(
            name: "SwiftPlusPlusTests",
            dependencies: ["SwiftPlusPlus", "cfactorial"]),
    ]
)
