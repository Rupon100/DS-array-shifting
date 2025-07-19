 #!/bin/bash
for f in *.c; do
  exe="${f%.c}.out"
  echo "🔧 Compiling $f..."
  clang "$f" -o "$exe" && echo "🚀 Running $exe"
  echo "--------------------------"
  ./"$exe"
  echo -e "\n✅ Finished running $exe"
  echo "=========================="
done

