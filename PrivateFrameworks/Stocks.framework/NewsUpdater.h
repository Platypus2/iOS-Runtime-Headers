/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class <NewsUpdaterDelegate>, StockNewsItemCollection, Stock;

@interface NewsUpdater : XMLHTTPRequest {
    <NewsUpdaterDelegate> *_delegate;
    BOOL _firstLoad;
    StockNewsItemCollection *_lastNewsItemCollection;
    double _lastResponseTimestamp;
    Stock *_stock;
}

@property <NewsUpdaterDelegate> * delegate;

+ (id)_newsItemCollectionCache;
+ (id)sharedNewsUpdater;

- (void)clearNewsCacheOnDisk;
- (id)delegate;
- (void)didParseData;
- (void)failWithError:(id)arg1;
- (BOOL)fetchNewsForStock:(id)arg1;
- (id)init;
- (void)loadNewsCacheFromDiskForSymbol:(id)arg1;
- (int)parseData:(id)arg1;
- (void)resetLocale;
- (void)saveLastResponse;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldReloadOnResume;

@end
