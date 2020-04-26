from selenium import webdriver

driver = webdriver.Chrome()
st1 = 'https://epaper.jagran.com/epaper/23-apr-2020-262-national-edition-national-page-'
st2 = '.html'
g = 0
for i in range(1, 17):
    driver.get(st1 + str(i) + st2)
    input(g)