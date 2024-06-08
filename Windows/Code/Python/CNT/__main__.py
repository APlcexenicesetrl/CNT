import progress

main = progress.progress(0, 100, "Yellow&Red")
for i in range(100):
    main.setup(1)