/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UIView.h>

@class NSError;

@interface ASMessagesProvider.ErrorShieldView : UIView {

	 presenter;
	 errorView;
	 retryHandler;
	 isQRCodeBadgingEnabled;
	 diagnosticImageView;

}

@property (copy,nonatomic) NSError * error; 
@property (copy,nonatomic) id retryHandler; 
@property (assign,nonatomic) BOOL isQRCodeBadgingEnabled; 
-(void)setIsQRCodeBadgingEnabled:(BOOL)arg1 ;
-(void)internetDidBecomeReachable;
-(BOOL)isQRCodeBadgingEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)didMoveToWindow;
-(void)reload;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)retryHandler;
-(void)setRetryHandler:(id)arg1 ;
@end
