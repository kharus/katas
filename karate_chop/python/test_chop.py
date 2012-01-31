from chop import chop
import unittest

class TestChop(unittest.TestCase):

    def setUp(self):
        self.seq = list(range(10))

    def test_empty_array(self):
        self.assertEqual(-1, chop(3,[]))

    def test_element_missing(self):
        self.assertEqual(-1, chop(3, [1]))

    def test_one_element(self):
        self.assertEqual(0, chop(1, [1]))

    def test_find_first(self):
        self.assertEqual(0,  chop(1, [1, 3, 5]))

    def test_find_middle(self):
        self.assertEqual(1,  chop(3, [1, 3, 5]))

    def test_find_last(self):
        self.assertEqual(2,  chop(5, [1, 3, 5]))

    def test_miss_before(self):
        self.assertEqual(-1, chop(0, [1, 3, 5, 7]))

    def test_miss_middle(self):
        self.assertEqual(-1, chop(4, [1, 3, 5, 7]))

    def test_miss_after(self):
        self.assertEqual(-1, chop(8, [1, 3, 5, 7]))

    
if __name__ == '__main__':
    unittest.main()
