import pandas as pd

def count_salary_categories(accounts: pd.DataFrame) -> pd.DataFrame:
    low_count = (accounts['income'] < 20000).sum() 
    avg_count = ((accounts['income'] >= 20000) & (accounts['income'] <= 50000)).sum() 
    high_count = (accounts['income'] > 50000).sum()

    sal_category = [('Low Salary', low_count), ('Average Salary', avg_count), ('High Salary', high_count)]

    df = pd.DataFrame(sal_category, columns = ['Category', 'accounts_count'])
    return df 