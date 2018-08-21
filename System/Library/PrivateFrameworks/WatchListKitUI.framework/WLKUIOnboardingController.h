/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WLKUIAccessViewController, NSArray, NSDictionary;

@interface WLKUIOnboardingController : NSObject {

	WLKUIAccessViewController* _accessVC;
	NSArray* _bundleIDs;
	NSDictionary* _options;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(id)eligibleBundleIDs;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)dismiss;
-(void)present;
-(void)presentForBundleIDs:(id)arg1 withOptions:(id)arg2 ;
-(void)_runConsentFlow;
@end

