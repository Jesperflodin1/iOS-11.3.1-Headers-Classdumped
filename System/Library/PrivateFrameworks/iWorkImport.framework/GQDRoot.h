/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface GQDRoot : NSObject {

	CFDictionaryRef mUidToObjectMap;
	BOOL mAppBundleColorMapLoaded;
	CFDictionaryRef mAppBundleResourceToColorMap;
	BOOL mAppBundleResourcesUrlInitialized;
	CFURLRef mAppBundleResourcesUrl;
	BOOL mIsOldAssetNameMapInitialized;
	CFDictionaryRef mOldAssetNameMap;
	int mAppBundleVersion;
	unsigned long long mDocVersion;

}
+(xmlNs*)appNamespace;
-(const char*)addIdentifiedObject:(id)arg1 fromCurrentNode:(xmlTextReaderRef)arg2 ;
-(id)objectWithXmlUid:(const char*)arg1 ;
-(BOOL)addObject:(id)arg1 withOwnedXmlUid:(const char*)arg2 ;
-(void)forgetAboutObject:(id)arg1 withXmlUid:(const char*)arg2 ;
-(void)loadAppBundleResourceToColorMap;
-(CFURLRef)appBundleResourcesUrl:(CFURLRef)arg1 ;
-(BOOL)appBundleCanProcessCurrentDocVersion;
-(id)colorForMissingAppBundleResource:(CFStringRef)arg1 processorBundle:(CFBundleRef)arg2 ;
-(CFURLRef)createUrlToAppBundleResource:(CFStringRef)arg1 processorBundle:(CFBundleRef)arg2 fileUrl:(CFURLRef)arg3 ;
-(void)initializeAppBundleResourcesUrl:(CFURLRef)arg1 ;
-(BOOL)readDocumentVersion:(xmlTextReaderRef)arg1 isTooNew:(BOOL*)arg2 ;
-(unsigned long long)documentReleaseVersion;
-(BOOL)includeStyleWithIdentifier:(const char*)arg1 parentIdentifier:(const char*)arg2 uid:(const char*)arg3 ;
-(CFURLRef)createUrlToAppBundleResource:(CFStringRef)arg1 processorBundle:(CFBundleRef)arg2 fileExists:(BOOL*)arg3 fileUrl:(CFURLRef)arg4 ;
-(BOOL)readDocumentVersion:(xmlTextReaderRef)arg1 ;
-(id)init;
-(void)dealloc;
-(id)uuid;
-(Class)classForName:(const char*)arg1 ;
@end

