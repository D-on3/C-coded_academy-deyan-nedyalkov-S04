import json

import yaml


def pretty_print_dict(dictionary={}):
    """
    :param dictionary:
    :return: NOne
    If we have the following dictionary
    {
        level1: {
            attr1: value,
            attr2: value,
            level2: {
                attr1: value,
                attr2: value,
                level3: {
                    attr1: value,
                }
            }
        }
    }
    The desired output is the dictionary data printed in a pretty manner - tabulated (4 tabs) per
    level
    """
    print(json.dumps(dictionary, indent=4))


pretty_print_dict(
    {
        "level1": {
            "attr1": 2,
            "attr2": 3,
            "level2": {
                "attr1": 4,
                "attr2": 5,
                "level3": {
                    "attr1": 6,
                },
            },
        }
    }
)
