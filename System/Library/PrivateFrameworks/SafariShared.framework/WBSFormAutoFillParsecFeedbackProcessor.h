/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSFormAutoFillFeedbackProcessor.h>

@protocol WBSParsecGlobalFeedbackDispatcher, OS_dispatch_queue, WBSFormAutoFillFeedbackDomainPolicyProvider;
@class WBSCrowdsourcedFeedbackDomainNormalizer, NSObject, NSString;

@interface WBSFormAutoFillParsecFeedbackProcessor : NSObject <WBSFormAutoFillFeedbackProcessor> {

	id<WBSParsecGlobalFeedbackDispatcher> _globalFeedbackDispatcher;
	unsigned long long _autoFillVersion;
	WBSCrowdsourcedFeedbackDomainNormalizer* _domainNormalizer;
	NSObject*<OS_dispatch_queue> _internalQueue;
	id<WBSFormAutoFillFeedbackDomainPolicyProvider> _domainPolicyProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<WBSFormAutoFillFeedbackDomainPolicyProvider> domainPolicyProvider;              //@synthesize domainPolicyProvider=_domainPolicyProvider - In the implementation block
-(id)init;
-(void)sendFeedbackWithCorrectionSet:(id)arg1 ;
-(void)_getFeedbackWithCorrectionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_feedbackWithCorrectionSet:(id)arg1 includeOrigin:(BOOL)arg2 ;
-(id<WBSFormAutoFillFeedbackDomainPolicyProvider>)domainPolicyProvider;
-(void)setDomainPolicyProvider:(id<WBSFormAutoFillFeedbackDomainPolicyProvider>)arg1 ;
-(id)initWithGlobalFeedbackDispatcher:(id)arg1 domainPolicyProvider:(id)arg2 autoFillVersion:(unsigned long long)arg3 ;
@end
