from bs4 import BeautifulSoup
import requests
import re


def get_number_of_pages():
    base_url = "http://books.toscrape.com/catalogue/category/books_1/index.html"

    html_content = requests.get(base_url).text

    soup = BeautifulSoup(html_content, "lxml")

    text_in_li_current = soup.find("li", attrs={"class": "current"}).text
    cleared_of_whitespace_text_in_li_current = re.findall(r"Page.*of \d*", text_in_li_current)[0]

    split_text_in_li_current = cleared_of_whitespace_text_in_li_current.split(" ")

    number_of_pages_text = split_text_in_li_current[-1]
    number_of_pages = int(number_of_pages_text)

    return number_of_pages


def get_list_of_all_urls():
    urls_of_site = []
    number_of_pages = get_number_of_pages()

    for page_num in range(1, number_of_pages + 1):
        urls_of_site.append("https://books.toscrape.com/catalogue/page-" + str(page_num) + ".html")

    return urls_of_site


def get_titles_from_current_url(url: str):
    current_titles = []

    html_content = requests.get(url).text
    soup = BeautifulSoup(html_content, "lxml")

    for article in soup.find_all("article", attrs={"class": "product_pod"}):
        h3 = article.find("h3")
        title = h3.find("a").text
        current_titles.append(title)

    return current_titles


def get_list_of_titles():
    titles = []
    urls_of_site = get_list_of_all_urls()
    page_id = 1

    for url in urls_of_site:
        print("Getting titles from Page", page_id)
        page_id += 1
        titles_from_url = get_titles_from_current_url(url)
        titles.extend(titles_from_url)

    return titles


titles = get_list_of_titles()

# regex to match titles starting with S or M and have length between 10 and 20 chars
regex_to_match = "^[SM].{10,20}$"
r = re.compile(regex_to_match)
searched_titles = list(filter(r.match, titles))

print("\n---------------------RESULTS:------------")
print("Result titles are", len(searched_titles))

num = 1

for title in searched_titles:
    print(f"{num}: {title}")
    num += 1
