/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSet, NSMutableDictionary, NSString;

@interface PFUbiquityExportContext : NSObject {
    NSString *_localPeerID;
    NSMutableDictionary *_storeNameToStoreExportContext;
    NSSet *_storesToExportFrom;
    NSMutableDictionary *_ubiquityRootPathToStack;
}

@property(readonly) NSString * localPeerID;
@property(retain) NSSet * storesToExportFrom;

- (void)dealloc;
- (id)description;
- (id)initWithLocalPeerID:(id)arg1;
- (id)localPeerID;
- (void)setStoresToExportFrom:(id)arg1;
- (id)storeExportContextForStore:(id)arg1;
- (id)storeExportContextForStoreName:(id)arg1;
- (id)storesToExportFrom;

@end
