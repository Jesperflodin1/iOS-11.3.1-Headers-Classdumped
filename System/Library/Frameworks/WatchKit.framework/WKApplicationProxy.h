/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface WKApplicationProxy : NSObject {

	NSURL* _bundleURL;

}

@property (nonatomic,readonly) NSURL * bundleURL;              //@synthesize bundleURL=_bundleURL - In the implementation block
+(id)watchAppBundleUrlWithContainerUrl:(id)arg1 ;
+(id)gizmoAppBundleUrlWithPluginUrl:(id)arg1 ;
+(id)applicationsForContainerProxy:(id)arg1 ;
-(NSURL *)bundleURL;
-(id)initWithBundleURL:(id)arg1 ;
@end

