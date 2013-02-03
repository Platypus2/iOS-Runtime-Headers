/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

@class ASGeniusStatisticsConsumer;

@interface ASPostGeniusStatisticsOperation : ISOperation {
    ASGeniusStatisticsConsumer *_activeDataStoreConsumer;
    BOOL _ignorePostInterval;
}

@property BOOL shouldIgnorePostInterval;

+ (void)load;

- (id)_activeDataStoreConsumer;
- (id)_configuration;
- (id)_copyBodyDictionaryReturningError:(id*)arg1;
- (id)_copyDataUsageDictionary;
- (id)_copyDictionaryForInstalledApplication:(id)arg1 statistics:(id)arg2;
- (id)_copyDictionaryForSystemApplication:(id)arg1 statistics:(id)arg2;
- (id)_copyOperationForConfiguration:(id)arg1 bodyData:(id)arg2;
- (BOOL)_copyRequestBody:(id*)arg1 forDictionary:(id)arg2 returningError:(id*)arg3;
- (id)_copyStatisticsByKey;
- (void)_getKiloBytesSent:(float*)arg1 received:(float*)arg2 forPDP:(long)arg3;
- (BOOL)_postRequestDictionary:(id)arg1 returningError:(id*)arg2;
- (void)_setActiveDataStoreConsumer:(id)arg1;
- (BOOL)_shouldSendDataUsage;
- (BOOL)_shouldSendStatistics;
- (void)cancel;
- (void)dealloc;
- (void)run;
- (void)setScriptOptions:(id)arg1;
- (void)setShouldIgnorePostInterval:(BOOL)arg1;
- (BOOL)shouldIgnorePostInterval;

@end
