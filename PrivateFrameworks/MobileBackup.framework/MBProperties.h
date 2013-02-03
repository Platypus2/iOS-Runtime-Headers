/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@class NSString, NSData, NSDate, NSDictionary, NSMutableDictionary;

@interface MBProperties : NSObject {
    NSMutableDictionary *_plist;
    BOOL _protect;
    BOOL _protected;
}

@property(readonly) NSDictionary * applications;
@property(readonly) NSString * buildVersion;
@property(retain) NSDate * date;
@property(readonly) NSString * deviceID;
@property(readonly) NSString * deviceName;
@property(getter=isEncrypted) BOOL encrypted;
@property(readonly) BOOL hasCorruptSQLiteDBs;
@property(retain) NSData * keybagData;
@property(retain) NSDictionary * lockdownKeys;
@property(getter=wasPasscodeSet) BOOL passcodeSet;
@property(readonly) NSString * productType;
@property(readonly) id propertyList;
@property(getter=isProtected) BOOL protected;
@property(readonly) NSString * serialNumber;
@property double systemDomainsVersion;
@property double version;

+ (id)properties;
+ (id)propertiesWithFile:(id)arg1 error:(id*)arg2;

- (BOOL)_boolForKey:(id)arg1;
- (id)_dataForKey:(id)arg1;
- (id)_dictionaryForKey:(id)arg1;
- (void)_setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)_setData:(id)arg1 forKey:(id)arg2;
- (void)_setDictionary:(id)arg1 forKey:(id)arg2;
- (id)_stringForLockdownKey:(id)arg1;
- (void)addApp:(id)arg1;
- (void)addAppsFromArray:(id)arg1;
- (id)appWithBundleID:(id)arg1;
- (id)applications;
- (id)buildVersion;
- (id)date;
- (void)dealloc;
- (id)description;
- (id)deviceID;
- (id)deviceName;
- (BOOL)hasCorruptSQLiteDBs;
- (id)init;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithFile:(id)arg1 error:(id*)arg2;
- (BOOL)isEncrypted;
- (BOOL)isProtected;
- (id)keybagData;
- (id)lockdownKeys;
- (id)objectForKey:(id)arg1;
- (id)productType;
- (id)propertyList;
- (void)removeObjectForKey:(id)arg1;
- (id)serialNumber;
- (void)setDate:(id)arg1;
- (void)setEncrypted:(BOOL)arg1;
- (void)setKeybagData:(id)arg1;
- (void)setLockdownKeys:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setPasscodeSet:(BOOL)arg1;
- (void)setProtected:(BOOL)arg1;
- (void)setSystemDomainsVersion:(double)arg1;
- (void)setVersion:(double)arg1;
- (double)systemDomainsVersion;
- (double)version;
- (BOOL)wasPasscodeSet;
- (BOOL)writeToFile:(id)arg1 error:(id*)arg2;

@end
