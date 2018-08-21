/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLAuthenticationChallenge, NSString;

@interface ISAuthenticationChallenge : NSObject {

	NSURLAuthenticationChallenge* _challenge;
	NSString* _localizedMessage;
	NSString* _localizedTitle;

}

@property (retain) NSString * localizedMessage;                                  //@synthesize localizedMessage=_localizedMessage - In the implementation block
@property (retain) NSString * localizedTitle;                                    //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (readonly) BOOL hasPassword; 
@property (retain,readonly) NSString * password; 
@property (retain,readonly) NSString * user; 
@property (readonly) long long failureCount; 
@property (readonly) BOOL userNameIsEditable; 
@property (readonly) BOOL userNameIsEmail; 
@property (readonly) id<NSURLAuthenticationChallengeSender> sender; 
-(void)dealloc;
-(id<NSURLAuthenticationChallengeSender>)sender;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSString *)password;
-(id)initWithAuthenticationChallenge:(id)arg1 ;
-(void)useCredential:(id)arg1 ;
-(BOOL)userNameIsEditable;
-(BOOL)userNameIsEmail;
-(BOOL)hasPassword;
-(void)setLocalizedMessage:(NSString *)arg1 ;
-(NSString *)localizedMessage;
-(long long)failureCount;
-(void)cancelAuthentication;
-(NSString *)user;
@end

