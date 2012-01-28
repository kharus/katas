from chop import chop
import unittest

class TestChop(unittest.TestCase):

    def setUp(self):
        self.seq = list(range(10))

    def test_empty_array(self):
        self.assertEqual(-1, chop(3,[]))

    def test_element_missing(self):
        self.assertEqual(-1, chop(3, [1]))

if __name__ == '__main__':
    unittest.main()
