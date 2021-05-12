import sys

def BinarySearch(len, target, An):
  start = 0
  end   = len - 1
  while start <= end:
    mid = (start + end) // 2
    if target == An[mid]:
      return 1
    else:
      if target < An[mid]:
        end = mid - 1
      else:
        start = mid + 1
  return 0

N, An= int(input()), list(map(int, sys.stdin.readline().split()))
M, Mn = int(input()),  list(map(int, sys.stdin.readline().split()))
An.sort()
LAn = len(An)

for a in Mn:
  print(BinarySearch(LAn, a, An))



