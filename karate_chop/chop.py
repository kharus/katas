def chop(target, field):
  if len(field) == 0 :
    return -1
  elif len(field) == 1:
    if field[0] == target:
      return 0
    else:
      return -1
  else:
    m = len(field)//2
    if target < field[m]:
      return chop(target, field[:m])
    else:
      index = chop(target, field[m:])
      if index == -1:
        return -1
      else:
        return index + m
