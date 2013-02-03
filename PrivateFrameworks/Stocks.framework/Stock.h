/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class UIView, NSString, StockChartData, NSURL;

@interface Stock : NSObject {
    StockChartData *_chartDataArray[7];
    BOOL _marketIsOpen;
    UIView *_rowView;
    int _rowViewDataType;
    NSString *averageVolume;
    NSString *companyName;
    NSString *dividendYield;
    NSString *exchange;
    NSString *high;
    NSURL *infoURL;
    NSString *low;
    NSString *marketcap;
    NSString *nonRealtimeChange;
    NSString *nonRealtimePrice;
    NSString *open;
    NSString *peRatio;
    unsigned int pricePrecision;
    NSString *realtimeChange;
    NSString *realtimePrice;
    NSString *realtimeTimestamp;
    NSString *shortCompanyName;
    NSString *symbol;
    double timeMetadataLastUpdated;
    double timeQuoteLastUpdated;
    BOOL usesAlternativeDataSource;
    NSString *volume;
    NSString *yearHigh;
    NSString *yearLow;
}

@property(retain) NSString * averageVolume;
@property(readonly) NSString * change;
@property(retain) NSString * companyName;
@property(retain) NSString * dividendYield;
@property(retain) NSString * exchange;
@property(retain) NSString * high;
@property(retain) NSURL * infoURL;
@property(retain) NSString * low;
@property(retain) NSString * marketcap;
@property(retain) NSString * nonRealtimeChange;
@property(retain) NSString * nonRealtimePrice;
@property(retain) NSString * open;
@property(retain) NSString * peRatio;
@property(readonly) NSString * price;
@property(readonly) unsigned int pricePrecision;
@property(retain) NSString * realtimeChange;
@property(retain) NSString * realtimePrice;
@property(retain) NSString * realtimeTimestamp;
@property int rowViewDataType;
@property(retain) NSString * shortCompanyName;
@property(retain) NSString * symbol;
@property double timeMetadataLastUpdated;
@property double timeQuoteLastUpdated;
@property BOOL usesAlternativeDataSource;
@property(retain) NSString * volume;
@property(retain) NSString * yearHigh;
@property(retain) NSString * yearLow;

+ (id)BlankValueString;
+ (void)DeleteChartData:(id)arg1;
+ (void)RemoveChartDataFromLRU:(id)arg1;
+ (void)UpdateChartDataInLRU:(id)arg1;
+ (void)_checkForAddedStocks;
+ (void)_createGTStocksArrays;
+ (id)_defaultStockDictionaries;
+ (void)_loadStocksFromDefaults;
+ (id)_localeStocks;
+ (id)_potentiallyAbsentKeys;
+ (void)addStock:(id)arg1;
+ (BOOL)anyMarketOpen;
+ (BOOL)anyMarketOpenWithRealtimePrice;
+ (BOOL)anyPriceIsRealtime;
+ (void)clearCachedChartData;
+ (void)clearCachedChartDataImageSets;
+ (void)clearCachedRowViews;
+ (void)flushStocks;
+ (id)formattedStringForNumber:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3 groupingSeparators:(BOOL)arg4;
+ (id)formattedStringForNumber:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3;
+ (id)formattedStringForString:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3;
+ (id)gtDataSourceStocks;
+ (void)handleSyncedDataChanged:(id)arg1;
+ (void)initialize;
+ (id)listStocks;
+ (BOOL)localeUsesASCIIDigits;
+ (id)localizedMagnitudeAbbreviatedStringWithString:(id)arg1 fractionDigits:(unsigned int)arg2;
+ (id)localizedMagnitudeAbbreviatedStringWithString:(id)arg1;
+ (id)makeSyncableStockListFromList:(id)arg1;
+ (void)moveStockFromIndex:(int)arg1 toIndex:(int)arg2;
+ (id)nonGTDataSourceStocks;
+ (id)postfixCharacterForEngineeringMagnitude:(unsigned int)arg1;
+ (void)removeStock:(id)arg1;
+ (void)resetLocale;
+ (void)saveChanges;
+ (void)setListStocks:(id)arg1;
+ (BOOL)setLocalStockListFromSyncableStockList:(id)arg1;
+ (void)startObservers;
+ (id)stockForURL:(id)arg1;
+ (id)stockWithSymbol:(id)arg1;
+ (void)stopObservers;
+ (id)urlForStock:(id)arg1;

- (void)_updatePricePrecision;
- (id)archiveDictionary;
- (id)averageVolume;
- (id)change;
- (float)changeFloatPercent:(BOOL)arg1;
- (BOOL)changeIsNegative;
- (BOOL)changeIsZero;
- (id)chartDataForInterval:(int)arg1;
- (void)clearCachedGraphImageSets;
- (void)clearRowView;
- (id)companyName;
- (void)dealloc;
- (id)description;
- (id)dividendYield;
- (id)exchange;
- (id)formattedChangePercent:(BOOL)arg1;
- (id)formattedPrice;
- (id)high;
- (id)infoURL;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isIndex;
- (id)listName;
- (id)low;
- (BOOL)marketIsOpen;
- (id)marketcap;
- (id)nonRealtimeChange;
- (id)nonRealtimePrice;
- (id)open;
- (id)peRatio;
- (id)price;
- (BOOL)priceIsRealtime;
- (unsigned int)pricePrecision;
- (id)realtimeChange;
- (id)realtimePrice;
- (id)realtimeTimestamp;
- (void)resetLocale;
- (id)rowView;
- (int)rowViewDataType;
- (void)setAverageVolume:(id)arg1;
- (void)setChartData:(id)arg1 forInterval:(int)arg2;
- (void)setCompanyName:(id)arg1;
- (void)setDividendYield:(id)arg1;
- (void)setExchange:(id)arg1;
- (void)setHigh:(id)arg1;
- (void)setInfoURL:(id)arg1;
- (void)setLow:(id)arg1;
- (void)setMarketcap:(id)arg1;
- (void)setNonRealtimeChange:(id)arg1;
- (void)setNonRealtimePrice:(id)arg1;
- (void)setOpen:(id)arg1;
- (void)setPeRatio:(id)arg1;
- (void)setRealtimeChange:(id)arg1;
- (void)setRealtimePrice:(id)arg1;
- (void)setRealtimeTimestamp:(id)arg1;
- (void)setRowView:(id)arg1 withDataType:(int)arg2;
- (void)setRowViewDataType:(int)arg1;
- (void)setShortCompanyName:(id)arg1;
- (void)setSymbol:(id)arg1;
- (void)setTimeMetadataLastUpdated:(double)arg1;
- (void)setTimeQuoteLastUpdated:(double)arg1;
- (void)setUsesAlternativeDataSource:(BOOL)arg1;
- (void)setVolume:(id)arg1;
- (void)setYearHigh:(id)arg1;
- (void)setYearLow:(id)arg1;
- (id)shortCompanyName;
- (id)symbol;
- (double)timeMetadataLastUpdated;
- (double)timeQuoteLastUpdated;
- (void)updateMetadataWithDictionary:(id)arg1 forTime:(double)arg2;
- (void)updateQuoteWithDictionary:(id)arg1 forTime:(double)arg2;
- (BOOL)usesAlternativeDataSource;
- (id)volume;
- (id)yearHigh;
- (id)yearLow;

@end
