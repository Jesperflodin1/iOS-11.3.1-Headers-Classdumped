/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFPINEntryViewControllerProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSMutableData, WFRemotePINEntryViewController;

@interface WebFilterEvaluator : NSObject <WFPINEntryViewControllerProtocol, NSSecureCoding> {

	unsigned long long _filterState;
	NSURL* _url;
	NSString* _pageTitle;
	NSMutableData* _buffer;
	/*^block*/id _completion;
	WFRemotePINEntryViewController* _remoteViewController;

}

@property (nonatomic,retain) WFRemotePINEntryViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
+(BOOL)isManagedSession;
+(BOOL)supportsSecureCoding;
+(id)createWithResponse:(id)arg1 ;
-(id)initWithResponse:(id)arg1 ;
-(void)unblockWithCompletion:(/*^block*/id)arg1 ;
-(id)dataComplete;
-(int)filterState;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(WFRemotePINEntryViewController *)remoteViewController;
-(void)setRemoteViewController:(WFRemotePINEntryViewController *)arg1 ;
-(void)userDidCancel;
-(id)addData:(id)arg1 ;
-(void)userEnteredCorrectPIN;
-(id)debugPageForPageWithData:(id)arg1 forURL:(id)arg2 debugString:(id)arg3 ;
-(id)blockPageForPageWithTitle:(id)arg1 origURL:(id)arg2 ;
-(BOOL)wasBlocked;
-(void)attemptUnblockWithCompletion:(/*^block*/id)arg1 ;
@end

