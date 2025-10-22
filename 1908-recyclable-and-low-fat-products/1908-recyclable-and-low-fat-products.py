import pandas as pd

def find_products(products: pd.DataFrame) -> pd.DataFrame:
    new_df = products[(products['low_fats'] == 'Y') & (products['recyclable'] == 'Y')]
    new_df.drop(['low_fats', 'recyclable'], axis=1, inplace= True)
    return new_df