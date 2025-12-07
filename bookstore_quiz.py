#online link for Run
#link: https://onlinegdb.com/v4FdwSYCe

N = int(input("How many orders?: "))
totalRevenue = 0
budgetCount = 0
for i in range(N):
    price = int(input("Enter price for each order: "))
    if price < 900:
        print("Budget Order")
        budgetCount =budgetCount + 1
    totalRevenue = totalRevenue + price
    
print("\nTotal Revenue:", totalRevenue)
print("Budget Orders:", budgetCount)
