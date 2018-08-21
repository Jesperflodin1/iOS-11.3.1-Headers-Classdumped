/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIShareUIAccessoryPlugIn.h>

@protocol UIShareUIAccessoryHosting, UIShareUIAccessoryPresenting;
@class NSArray, UIViewController, NSString;

@interface DCDocumentAttributesShareSheetPlugIn : NSObject <UIShareUIAccessoryPlugIn> {

	id<UIShareUIAccessoryHosting> _host;
	NSArray* _URLs;
	UIViewController*<UIShareUIAccessoryPresenting> _inlineAccessoryViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<UIShareUIAccessoryHosting> host;                                                  //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) NSArray * URLs;                                                                             //@synthesize URLs=_URLs - In the implementation block
@property (nonatomic,readonly) UIViewController*<UIShareUIAccessoryPresenting> inlineAccessoryViewController;              //@synthesize inlineAccessoryViewController=_inlineAccessoryViewController - In the implementation block
+(id)shareSheetPlugInWithPresentingHost:(id)arg1 URLs:(id)arg2 ;
-(NSArray *)URLs;
-(id<UIShareUIAccessoryHosting>)host;
-(id)initWithPresentingHost:(id)arg1 URLs:(id)arg2 itemLoader:(id)arg3 ;
-(void)commitPendingChanges;
-(UIViewController*<UIShareUIAccessoryPresenting>)inlineAccessoryViewController;
@end

