import sys
import os
from multiprocessing import Pool
from contextlib import closing

withStandard = sys.argv[1]

runs = 10


def executeQoS(runs):
    print("Started with QoS run: " + str(runs))
    command = "./RouteBalancing -m -u Cmdenv -n .:/home/klement/Repositories/Simulations/inetmanet-3.x/src -l /home/klement/Repositories/Simulations/inetmanet-3.x/src/INET omnetpp.ini -c AODVQoSNetwork -r" + str(
        runs) + " >./results/qos" + str(runs)
    os.system(command)
    print("Ended QoS run " + str(runs))


def executeStandard(runs):
    print("Started with Standard run: " + str(runs))
    command = "./RouteBalancing -m -u Cmdenv -n .:/home/klement/Repositories/Simulations/inetmanet-3.x/src -l /home/klement/Repositories/Simulations/inetmanet-3.x/src/INET omnetpp.ini -c AODVStandardNetwork -r" + str(
        runs) + " >./results/standard" + str(runs)
    os.system(command)
    print("Ended standard run " + str(runs))


print("____AnalyzerStarted")
numAgents = 10
with closing(Pool(processes=numAgents)) as pool:
    result = pool.map(executeQoS, [0, 1, 2, 3, 4, 5, 6, 7, 8, 9], 1)
if withStandard:
    with closing(Pool(processes=numAgents)) as pool:
        result = pool.map(executeStandard, [0, 1, 2, 3, 4, 5, 6, 7, 8, 9], 1)

print("Finished with run" + str(runs))
print("___Analyzer ended___")
