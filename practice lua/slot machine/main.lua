function spin()
  math.randomseed(os.time())
  for i=1, 3 do
    io.write(math.random(3))
  end

  print("\nWould you like to spin again?\n(1\\0)")
  ans = io.read("*n")

  if ans == 1 then
    spin()
  elseif ans == 0 then
    print("goodbye!")
  end
end

spin()