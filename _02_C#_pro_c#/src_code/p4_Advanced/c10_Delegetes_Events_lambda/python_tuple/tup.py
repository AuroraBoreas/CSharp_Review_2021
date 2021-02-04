"""

this module demonstrates concept of tuple in Python 

@ZL, 20210204

"""

from collections import namedtuple
import logging
logging.basicConfig(level=logging.DEBUG, format="%(asctime)s %(message)s")

t1 = (3.14, 2.718, 42, "hello, world")

# __getitem__
_, _, _, s = t1
logging.debug("unbox and get last item: {}".format(s))

# __setitem__
# t1[0] = 42  # not OK

# iterator
for (no, item) in enumerate(t1):
    logging.debug("item{} is : {}".format(no, item))

person = namedtuple("person", ("name", "sex", "age"))

a = person("ZL", "male", 35)
b = person("XY", "female", 35)

logging.debug("name: {}, sex: {}, age: {}".format(*a))
logging.debug("name: {}, sex: {}, age: {}".format(*b))