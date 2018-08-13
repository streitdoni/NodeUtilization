'''
Created on Apr 25, 2018

@author: klement
'''
import sys
import re as re

parameters = [sys.argv[1], sys.argv[2], sys.argv[3]]

type = sys.argv[4]


def findnth(string, substring, n):
    parts = string.split(substring, n + 1)
    if len(parts) <= n + 1:
        return -1
    return len(string) - len(parts[-1]) - len(substring)

for parameter in parameters:
    path = '/home/klement/omnetpp-workspace/RouteBalancing/results/' + parameter + type + '.dat'

    with open(path, 'w') as csvfile:
        files = [
            "/home/klement/omnetpp-workspace/RouteBalancing/results/AODV" + type + "Network-#0.vec",
            "/home/klement/omnetpp-workspace/RouteBalancing/results/AODV" + type + "Network-#1.vec",
            "/home/klement/omnetpp-workspace/RouteBalancing/results/AODV" + type + "Network-#2.vec",
            "/home/klement/omnetpp-workspace/RouteBalancing/results/AODV" + type + "Network-#3.vec",
            "/home/klement/omnetpp-workspace/RouteBalancing/results/AODV" + type + "Network-#4.vec",
            "/home/klement/omnetpp-workspace/RouteBalancing/results/AODV" + type + "Network-#5.vec",
            "/home/klement/omnetpp-workspace/RouteBalancing/results/AODV" + type + "Network-#6.vec",
            "/home/klement/omnetpp-workspace/RouteBalancing/results/AODV" + type + "Network-#7.vec",
            "/home/klement/omnetpp-workspace/RouteBalancing/results/AODV" + type + "Network-#8.vec",
            "/home/klement/omnetpp-workspace/RouteBalancing/results/AODV" + type + "Network-#9.vec",
        ]

        runs = 10
        computedVectorValues = {}
        parseString = parameter

        for file in files:

            content = [x.strip() for x in open(file).readlines()]
            vectorNumbers = []

            for i in range(len(content)):

                if parseString in content[i]:
                    indexFirst = findnth(content[i], ' ', 0)
                    indexLast = findnth(content[i], ' ', 1)
                    vectorNumbers.append((content[i][indexFirst + 1:indexLast]))

            for currentVector in vectorNumbers:
                vectorLine = []

                for i in range(len(content)):
                    hasMatch = re.match(currentVector, content[i])

                    if hasMatch:
                        tmp = content[i].split('\t')
                        first = tmp[2].split('.')
                        vectorLine.append((int(first[0]), float(tmp[3])))

                newSecond = False
                secondValue = 0
                numOfElements = 0

                for i in range(len(vectorLine)):

                    secondValue = secondValue + vectorLine[i][1]
                    numOfElements += 1
                    j = i + 1
                    if len(vectorLine) == j or vectorLine[i][0] != vectorLine[j][0]:
                        bytes = secondValue / numOfElements
                        secondValue = 0
                        numOfElements = 0
                        if vectorLine[i][0] in computedVectorValues:
                            computedVectorValues[vectorLine[i][0]] += bytes
                        else:
                            computedVectorValues[vectorLine[i][0]] = bytes

        keys = computedVectorValues.keys()
        for key in sorted(keys):
            csvfile.write(str(key) + "\t" + str(computedVectorValues[key] / runs))
            csvfile.write('\n')

