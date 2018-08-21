/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDRoot.h>

@interface GQDBGPresentation : GQDRoot {

	CFArrayRef mThemes;
	CGSize mSlideSize;

}
+(id)parseNumberOutOfBasename:(id)arg1 returningNumber:(int*)arg2 ;
+(xmlNs*)appNamespace;
+(void)initialize;
-(void)loadAppBundleResourceToColorMap;
-(CFStringRef)createUpgradedAppBundleResourcePath:(CFStringRef)arg1 processorBundle:(CFBundleRef)arg2 ;
-(void)addTheme:(id)arg1 ;
-(id)colorForMissingAppBundleResource:(CFStringRef)arg1 processorBundle:(CFBundleRef)arg2 ;
-(CFURLRef)createUrlToAppBundleResource:(CFStringRef)arg1 processorBundle:(CFBundleRef)arg2 fileUrl:(CFURLRef)arg3 ;
-(void)initializeAppBundleResourcesUrl:(CFURLRef)arg1 ;
-(id)init;
-(void)dealloc;
-(CGSize)slideSize;
-(CFArrayRef)themes;
@end

