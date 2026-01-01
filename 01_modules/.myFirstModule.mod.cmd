savedcmd_myFirstModule.mod := printf '%s\n'   myFirstModule.o | awk '!x[$$0]++ { print("./"$$0) }' > myFirstModule.mod
