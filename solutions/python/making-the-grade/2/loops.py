"""Functions for organizing and calculating student exam scores."""


def round_scores(student_scores):
    """Round all provided student scores.

    :param student_scores: list - float or int of student exam scores.
    :return: list - student scores *rounded* to nearest integer value.
    """
    new_list = []
    while student_scores:
        new_list.append(round(student_scores.pop()))
        
    return new_list


def count_failed_students(student_scores):
    """Count the number of failing students out of the group provided.

    :param student_scores: list - containing int student scores.
    :return: int - count of student scores at or below 40.
    """

    counter = 0
    for score in student_scores:
        if score <= 40:
            counter+=1
        else:
            continue
    return counter            
        


def above_threshold(student_scores, threshold):
    """Determine how many of the provided student scores were 'the best' based on the provided threshold.

    :param student_scores: list - of integer scores.
    :param threshold: int - threshold to cross to be the "best" score.
    :return: list - of integer scores that are at or above the "best" threshold.
    """
    new_list = []
    for item in student_scores:
        if item >= threshold:
            new_list.append(item)
        else:
            continue
    return new_list            
        
    


def letter_grades(highest):
    """Create a list of grade thresholds based on the provided highest grade.

    :param highest: int - value of highest exam score.
    :return: list - of lower threshold scores for each D-A letter grade interval.
            For example, where the highest score is 100, and failing is <= 40,
            The result would be [41, 56, 71, 86]:

            41 <= "D" <= 55
            56 <= "C" <= 70
            71 <= "B" <= 85
            86 <= "A" <= 100
    """
    span = highest - 40
    step = int(span / 4.0)
    final_list = [41]
    for i in range(1, 4):
        final_list.append((i*step) + 41)

    return final_list

    

def student_ranking(student_scores, student_names):
    """Organize the student's rank, name, and grade information in descending order.

    :param student_scores: list - of scores in descending order.
    :param student_names: list - of string names by exam score in descending order.
    :return: list - of strings in format ["<rank>. <student name>: <score>"].
    """

    # stringa finale: "(indice + 1). (Nome): (punteggio)"

    string_list = []
    
    for index, item in enumerate(student_names):
        final_string = str((index+1)) + '. ' + student_names[index] + ': ' + str(student_scores[index])
        string_list.append(final_string)
    return string_list


def perfect_score(student_info):
    """Create a list that contains the name and grade of the first student to make a perfect score on the exam.

    :param student_info: list - of [<student name>, <score>] lists.
    :return: list - first `[<student name>, 100]` or `[]` if no student score of 100 is found.
    """

    for name, score in student_info:
        if score == 100:
            final = [name, score]
            return final
        else:
            continue
    return []