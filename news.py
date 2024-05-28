import feedparser

def fetch_rss_feed(url):
    try:
        feed = feedparser.parse(url)
        if feed.entries:
            print("Latest News:")
            for idx, entry in enumerate(feed.entries, start=1):
                title = entry.title
                link = entry.link
                print(f"{idx}. {title} - {link}")
        else:
            print("No news found in the feed.")

    except Exception as e:
        print(f"An error occurred: {str(e)}")

if __name__ == "__main__":
    # Example RSS feed URL (replace with the actual feed URL)
    rss_url = "https://example.com/feed"
    fetch_rss_feed(rss_url)
