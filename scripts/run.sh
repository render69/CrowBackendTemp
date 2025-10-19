#!/usr/bin/env bash
set -e

BUILD_DIR="build"
EXEC="./CrowBackend"

if [ ! -f "$BUILD_DIR/$EXEC" ]; then
    echo "⚙️ Building project first..."
    ./scripts/build.sh
fi

echo "🚀 Starting CrowBackend..."
cd $BUILD_DIR
$EXEC
