/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDRoot : NSObject {
    BOOL mAppBundleColorMapLoaded;
    struct __CFDictionary { } *mAppBundleResourceToColorMap;
    struct __CFURL { } *mAppBundleResourcesUrl;
    BOOL mAppBundleResourcesUrlInitialized;
    int mAppBundleVersion;
    unsigned long long mDocVersion;
    struct __CFDictionary { } *mUidToObjectMap;
}

+ (struct _xmlNs { struct _xmlNs {} *x1; int x2; char *x3; char *x4; void *x5; struct _xmlDoc {} *x6; }*)appNamespace;

- (const char *)addIdentifiedObject:(id)arg1 fromCurrentNode:(struct _xmlTextReader { }*)arg2;
- (BOOL)addObject:(id)arg1 withOwnedXmlUid:(const char *)arg2;
- (BOOL)appBundleCanProcessCurrentDocVersion;
- (struct __CFURL { }*)appBundleResourcesUrl;
- (Class)classForName:(const char *)arg1;
- (id)colorForMissingAppBundleResource:(struct __CFString { }*)arg1 processorBundle:(struct __CFBundle { }*)arg2;
- (struct __CFURL { }*)createUrlToAppBundleResource:(struct __CFString { }*)arg1 processorBundle:(struct __CFBundle { }*)arg2 fileExists:(BOOL*)arg3;
- (struct __CFURL { }*)createUrlToAppBundleResource:(struct __CFString { }*)arg1 processorBundle:(struct __CFBundle { }*)arg2;
- (void)dealloc;
- (unsigned int)documentReleaseVersion;
- (void)forgetAboutObjectWithXmlUid:(const char *)arg1;
- (BOOL)includeStyleWithIdentifier:(const char *)arg1 parentIdentifier:(const char *)arg2 uid:(const char *)arg3;
- (id)init;
- (void)initializeAppBundleResourcesUrl;
- (void)loadAppBundleResourceToColorMap;
- (id)objectWithXmlUid:(const char *)arg1;
- (BOOL)readDocumentVersion:(struct _xmlTextReader { }*)arg1 isTooNew:(BOOL*)arg2;
- (BOOL)readDocumentVersion:(struct _xmlTextReader { }*)arg1;

@end
