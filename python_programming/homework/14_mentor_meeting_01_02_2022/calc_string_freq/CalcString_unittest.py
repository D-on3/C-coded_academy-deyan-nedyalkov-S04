import unittest
from CalcString import CalcString


class TestCalcString(unittest.TestCase):

    def setUp(self) -> None:
        self.calc_str_obj1 = CalcString()

    def test_expected_result(self):
        expected_dict = {'I': 5, 'and': 1, 'because': 2, 'but': 1, 'feel': 1,
                         'felt': 1, 'happy': 4, 'knew': 1, 'not': 1,
                         'others': 1, 'really': 1, 'saw': 1, 'should': 1,
                         'the': 1,
                         'was': 1, 'were': 1}
        self.assertEqual(expected_dict,self.calc_str_obj1.calc_freq())

    #def test_expected_result_false(self):



if __name__ == "__main__":
    unittest.main()