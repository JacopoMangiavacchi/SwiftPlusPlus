# SwiftPlusPlus

Instructions:

1) swift package init --type library

2) add a CLibrary folder under Sources

3) customize Package.swift adding CLibrary dependencies in Target

    targets: [
        .target(
            name: "SwiftPlusPlus",
            dependencies: ["CLibrary"]),
        .testTarget(
            name: "SwiftPlusPlusTests",
            dependencies: ["SwiftPlusPlus", "CLibrary"]),
    ]

4) 
