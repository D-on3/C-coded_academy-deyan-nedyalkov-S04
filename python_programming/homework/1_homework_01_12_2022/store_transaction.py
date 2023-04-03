transactions_even = []


def store_transactions(transaction_id, transactions):
    """
    :param transaction_id:
    :param transactions: transactions_even
    :return: transactions
    """
    # Write code that stores the transaction_id if it is an even number
    # The function should return the transactions

    transactions_even = [
        idx for idx, transaction in enumerate(transactions) if idx % 2 != 0
    ]
    return transactions_even


print(store_transactions(3, [1, 2, 3, 4, 5, 6, 7, 8, 9]))
print(transactions_even)
