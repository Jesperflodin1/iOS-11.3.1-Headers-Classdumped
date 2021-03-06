/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TLKView.h>

@class NSString, CKTextBalloonView;

@interface TLKMessageView : TLKView {

	NSString* _messageText;
	unsigned long long _messageServiceType;
	unsigned long long _messageStatus;
	CKTextBalloonView* _textBalloonView;

}

@property (retain) CKTextBalloonView * textBalloonView;                //@synthesize textBalloonView=_textBalloonView - In the implementation block
@property (retain) NSString * messageText;                             //@synthesize messageText=_messageText - In the implementation block
@property (assign) unsigned long long messageServiceType;              //@synthesize messageServiceType=_messageServiceType - In the implementation block
@property (assign) unsigned long long messageStatus;                   //@synthesize messageStatus=_messageStatus - In the implementation block
-(id)init;
-(NSString *)messageText;
-(void)setMessageText:(NSString *)arg1 ;
-(void)observedPropertiesChanged;
-(id)observableProperties;
-(void)setTextBalloonView:(CKTextBalloonView *)arg1 ;
-(CKTextBalloonView *)textBalloonView;
-(unsigned long long)messageStatus;
-(void)setMessageStatus:(unsigned long long)arg1 ;
-(unsigned long long)messageServiceType;
-(void)setMessageServiceType:(unsigned long long)arg1 ;
@end

