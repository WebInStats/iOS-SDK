// swift-tools-version: 5.7
import PackageDescription

let package = Package(
    name: "iOS_wis",
    platforms: [
        .iOS(.v13) // Minimum iOS sürümünü burada belirtebilirsiniz
    ],
    products: [
        .library(
            name: "iOS_wis",
            targets: ["iOS_wis"]
        )
    ],
    targets: [
        .binaryTarget(
            name: "iOS_wis",
            path: "./iOS_wis.xcframework"
        )
    ]
)
