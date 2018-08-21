/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VSCuratedViewModel.h>

@class VSCredentialEntryField, NSURL, NSString, VSExpressionEvaluator;

@interface VSCredentialEntryViewModel : VSCuratedViewModel {

	VSCredentialEntryField* _usernameField;
	VSCredentialEntryField* _passwordField;
	NSURL* _linkURL;
	NSString* _linkTitle;
	NSString* _recentsTitle;
	NSString* _recentsMessage;
	NSString* _additionalMessage;
	VSExpressionEvaluator* _buttonExpressionEvaluator;
	NSString* _originalUsername;
	NSString* _originalPassword;

}

@property (nonatomic,retain) VSExpressionEvaluator * buttonExpressionEvaluator;              //@synthesize buttonExpressionEvaluator=_buttonExpressionEvaluator - In the implementation block
@property (nonatomic,copy) NSString * originalUsername;                                      //@synthesize originalUsername=_originalUsername - In the implementation block
@property (nonatomic,copy) NSString * originalPassword;                                      //@synthesize originalPassword=_originalPassword - In the implementation block
@property (nonatomic,retain) VSCredentialEntryField * usernameField;                         //@synthesize usernameField=_usernameField - In the implementation block
@property (nonatomic,retain) VSCredentialEntryField * passwordField;                         //@synthesize passwordField=_passwordField - In the implementation block
@property (nonatomic,copy) NSURL * linkURL;                                                  //@synthesize linkURL=_linkURL - In the implementation block
@property (nonatomic,copy) NSString * linkTitle;                                             //@synthesize linkTitle=_linkTitle - In the implementation block
@property (nonatomic,copy) NSString * recentsTitle;                                          //@synthesize recentsTitle=_recentsTitle - In the implementation block
@property (nonatomic,copy) NSString * recentsMessage;                                        //@synthesize recentsMessage=_recentsMessage - In the implementation block
@property (nonatomic,copy) NSString * additionalMessage;                                     //@synthesize additionalMessage=_additionalMessage - In the implementation block
-(id)init;
-(VSCredentialEntryField *)passwordField;
-(NSURL *)linkURL;
-(void)configureWithRequest:(id)arg1 ;
-(VSCredentialEntryField *)usernameField;
-(void)setUsernameField:(VSCredentialEntryField *)arg1 ;
-(void)setPasswordField:(VSCredentialEntryField *)arg1 ;
-(void)setLinkTitle:(NSString *)arg1 ;
-(void)setLinkURL:(NSURL *)arg1 ;
-(void)setAdditionalMessage:(NSString *)arg1 ;
-(void)_bindField:(id)arg1 ;
-(void)setButtonExpressionEvaluator:(VSExpressionEvaluator *)arg1 ;
-(void)_unbindField:(id)arg1 ;
-(void)setOriginalUsername:(NSString *)arg1 ;
-(void)setOriginalPassword:(NSString *)arg1 ;
-(void)setRecentsTitle:(NSString *)arg1 ;
-(void)setRecentsMessage:(NSString *)arg1 ;
-(NSString *)linkTitle;
-(NSString *)recentsTitle;
-(NSString *)recentsMessage;
-(NSString *)additionalMessage;
-(VSExpressionEvaluator *)buttonExpressionEvaluator;
-(NSString *)originalUsername;
-(NSString *)originalPassword;
@end

