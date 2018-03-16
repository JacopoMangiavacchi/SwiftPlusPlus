// swift-tools-version:4.0
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "SwiftPlusPlus",
    products: [
        // Products define the executables and libraries produced by a package, and make them visible to other packages.
        .library(
            name: "CListWrapper", 
            targets: ["CListWrapper"]),
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
            name: "CListWrapper",
            path: "./Sources/CListWrapper"
        ),
        .target(
            name: "SwiftPlusPlus",
            dependencies: ["CListWrapper"]),
        .testTarget(
            name: "SwiftPlusPlusTests",
            dependencies: ["SwiftPlusPlus", "CListWrapper"]),
    ]
)
