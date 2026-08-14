import pandas as pd

def duplicate_emails(person: pd.DataFrame) -> pd.DataFrame:
    result = person.groupby(email).size().reset_index(name = "count")
    return result["count" > 1]