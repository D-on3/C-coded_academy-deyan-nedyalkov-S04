Students examination system.
We have a bunch of data about 280 students, who have passed 10 exams and have collected up to 100 points per exam. Our task is to check which students have passed their exams successfully and which of them have to retake failed exams.

A student is considered to have successful session if the average result from the 10 exams is at least 80.

Any exam which has result bellow 80 can be retaken. Failed exam can be retaken up to 3 times. If any of those has result >= 80, it is considered as passed.

If after exam re-take, if the session is passed, student is free from other re-takes.

After re-takes are done, we should print out the students who passed the session in descending order.

After the students passed the session, we should print out the failed as well.

The way we print out the information depends on our will. We can make it as raw as possible, or we can play with it to make it looking more friendly to the Head master.

** Specifics: All the data from students_exams.csv is stored as string. You need to take care of converting the points into int in order to use them in calculations.