import unittest
from check_values import CheckValues


class TestCheckValues(unittest.TestCase):

    def setUp(self) -> None:
        self.obj = CheckValues()

    def test_equal(self):
        for_check = [200, 202, 204, 206, 208, 210, 212, 214, 216, 218, 220,
                     222, 224, 226, 228, 230, 232, 234, 236, 238, 240]
        self.assertEqual(for_check,self.obj.find_all_between_200_240())