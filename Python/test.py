test_pattern = "AAAAAAAA55555555AAAAAAAA55555555"
print test_pattern

test_pattern = '%X' % (long(test_pattern, 16) + 1)
print test_pattern
