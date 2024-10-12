import matplotlib.pyplot as plt
import seaborn as sns
import pandas as pd
import numpy as np

data_df = pd.read_csv('data.csv')
test_df = pd.read_csv('test.csv')
features = ['Tree Width', 'Decomposition Overhead Ratio', 'Average Depth', 'Sum of Join node distances', 'Branching Factor', 'Bag Adjacency Factor', 'Bag Connectedness Factor', 'Bag Neighborhood Coverage Factor']

from sklearn.linear_model import LinearRegression
from sklearn.preprocessing import PolynomialFeatures
from sklearn.metrics import mean_squared_error

X = [data_df[data_df['Tree Width'] == i][features] for i in range(15)]
y = [data_df[data_df['Tree Width'] == i]['units' ] for i in range(15)]

X_predict = [test_df[test_df['Tree Width'] == i][features] for i in range(15)]
y_predict = [test_df[test_df['Tree Width'] == i]['units' ] for i in range(15)]

for i in range(15):
    if(len(X[i]) == 0 or len(X_predict[i]) == 0): continue
    
    poly = PolynomialFeatures(degree = 1)
    X_poly = poly.fit_transform(X[i])
    model = LinearRegression()
    model.fit(X_poly, y[i])
    predictions = model.predict(poly.fit_transform(X_predict[i]))
    
    if(i == 3): plt.legend()
    plt.scatter(X_predict[i]['Tree Width'], np.log(y_predict[i])  , color = 'blue'  , alpha = 0.5, label = 'log for real')
    plt.scatter(X_predict[i]['Tree Width'], np.log(predictions)   , color = 'orange', alpha = 0.5, label = 'log for predict')

plt.show()
