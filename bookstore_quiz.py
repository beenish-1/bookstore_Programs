n = int(input("How many orders? "))

total_revenue = 0
budget_count = 0

for i in range(n):
    price = int(input("Enter price: "))
    if price < 900:
        print("Budget Order")
        budget_count += 1
    total_revenue += price
    
print("\nTotal Revenue:", total_revenue)
print("Budget Orders:", budget_count)
