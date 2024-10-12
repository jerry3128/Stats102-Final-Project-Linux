# .gr is graph file
# .tf is tree decomposition file

import os
import pandas as pd
import shutil

GraphNumbers = 2000
TreeDecompusitionNumbers = 100
L = 51
R = 75

def GenGraph():
    if not os.path.exists(f'data-generator/data'): os.mkdir(f'data-generator/data')
    for i in range(1, GraphNumbers+1):
        if not os.path.exists(f'data-generator/data/data{i}'): os.mkdir(f'data-generator/data/data{i}')
        FileName = f'data-generator/data/data{i}/data{i}.gr'
        EdgeNum = '0'
        if    0 < i and i <=  800: EdgeNum =  '20'
        if  800 < i and i <= 1200: EdgeNum =  '40'
        if 1200 < i and i <= 1600: EdgeNum =  '60'
        if 1600 < i and i <= 1800: EdgeNum =  '80'
        if 1800< i and i <=  2000: EdgeNum = '100'
        os.system('data-generator/graph-generator.exe ' + EdgeNum + ' > ' + FileName)
        print(f'data {i}: Complete.')

        # if use this size of data, the generate time may be 30 mins.
        # time.sleep(1.2)
    
def GenDecomposition():
    # now goes to linux environment use dflat to get the tree decomposition of the graph.
    pass

def GenRuntime():
    if not os.path.exists('data-generator/task3'): os.mkdir(f'data-generator/task3')
    
    for i in range(1, GraphNumbers + 1):
        for j in range(L, R + 1):
            shutil.copy(f'data-generator/data/data{i}/data{i}.gr', 'data-generator/task3/graph.gr')
            shutil.copy(f'data-generator/data/data{i}/data{i}_{j}.td', 'data-generator/task3/graph.td')
            os.system(f'./data-generator/3colorabilityTask3 > data-generator/data/data{i}/data{i}_{j}.info')
        print(f"done graph {i}")
    
    shutil.rmtree('data-generator/task3')

def GenInformation():
    # planned freatures
    # Tree Width (power), Average Bag Size, Decomposition Overhead Ratio, Average Lifetime, Average Depth
    # Introduce/Forget/Join/Leaf Percentage, Sum of Join node distance
    # Branching Factor, Bag Adjacency Factor, Bag Connectedness Factor, Bag Neighborhood Coverage Factor
    # Vertex Neighbor Count, Vertex Connectedness Factor
    
    # these variables are information
    # Graph ID                                  : Graph ID
    # Tree decomposition ID                     : Tree decomposition ID
    
    # these variables are features
    # Tree Width                                : Tree Width.
    # Average Bag Size                          : Average of size of nodes on tree decomposition.
    # Decomposition Overhead Ratio              : Sum of bag size divided by size of graph.
    # Average Lifetime                          : The times each ndoes remains in the tree decomposition. (The same as Decomposition Overhead Ratio)
    # Average Depth                             : Average depth of tree.
    # Node percentage                           : Introduce/Forget/Join/Leaf's Percentage of tree (sum of them is 100%)
    # Sum of Join node distance                 : Find all pairs of Join nodes and plus their distances.
    # Branching Factor                          : Average of number of childs
    # Bag Adjacency Factor                      : Pair of nodes in a tree node, the adjacencent pairs divided by the total pairs.
    # Bag Connectedness Factor                  : Pair of nodes in a tree node, the reachable pairs divided by the total pairs.
    # Bag Neighborhood Coverage Factor          : Average of Average of (neighboors(v)and treenodes(<- first enumerate))/neighboors(v) 
    # Vertex Neighbor Count (thrown)            : sum of neighboors(v)and treenodes
    # Vertex Connectedness Factor (thrown)      : Pair of nodes in a tree node and all graph, the reachable pairs divided by the total pairs.

    # these variables we need to predict.
    # runtime                                   : execution time of the input
    # units                                     : Linearly correlated to runtime 
    
    if not os.path.exists('data-generator/temp'): os.mkdir(f'data-generator/temp')
    for i in range(1, GraphNumbers + 1):
        for j in range(L, R + 1):
            shutil.copy(f'data-generator/data/data{i}/data{i}.gr', 'data-generator/temp/graph.gr')
            shutil.copy(f'data-generator/data/data{i}/data{i}_{j}.td', 'data-generator/temp/graph.td')
            shutil.copy(f'data-generator/data/data{i}/data{i}_{j}.info', 'data-generator/temp/graph.info')
            os.system(f'./data-generator/GetFeatures > data-generator/data/data{i}/data{i}_{j}.details')
        print(f"done graph {i}")
            
    shutil.rmtree('data-generator/temp')

def GenCSV():
    df = []
    for i in range(1, GraphNumbers + 1):
        for j in range(1, TreeDecompusitionNumbers + 1):
            FileName = f'data-generator/data/data{i}/data{i}_{j}.details'
            mp = dict()
            mp['Graph ID'] = i
            mp['Tree decomposition ID'] = j
            
            with open(FileName, 'r') as file:
                lines = file.readlines()
            
            for line in lines:
                line = line.strip()
                if line.find('units') != -1:
                    mp['run time'] = line.split(' ')[0].split('-')[0]
                    mp['units'] = line.split(' ')[1].split('-')[0]

            def get(s):
                for line in lines:
                    line = line.strip()
                    if line.startswith(s):
                        mp[s] = line.split(':')[1]
            
            get('Tree Width')
            get('Decomposition Overhead Ratio')
            get('Average Depth')
            get('Join Percentage')
            get('Forget Percentage')
            get('Introduce Percentage')
            get('Leaf Percentage')
            get('Sum of Join node distances')
            get('Branching Factor')
            get('Bag Adjacency Factor')
            get('Bag Connectedness Factor')
            get('Bag Neighborhood Coverage Factor')
            
            df.append(mp)
        print(f"done graph {i}")
    
    pd.DataFrame(df).to_csv('data-generator/data.csv', index = False)
    
    
            
# GenGraph()
# GenDecomposition()
GenRuntime()
# GenInformation()
# GenCSV()
