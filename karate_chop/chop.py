def chop(target, field):
  if len(field) == 0 :
    return -1
  elif field[0] == target:
    return 0
  else:
    return -1
