/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface RKConversationTurn : NSObject {

	NSString* _text;
	NSString* _senderId;
	NSDate* _timestamp;

}

@property (readonly) NSString * text;                  //@synthesize text=_text - In the implementation block
@property (readonly) NSString * senderId;              //@synthesize senderId=_senderId - In the implementation block
@property (readonly) NSDate * timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
-(NSDate *)timestamp;
-(NSString *)text;
-(NSString *)senderId;
-(id)initWithString:(id)arg1 senderID:(id)arg2 timestamp:(id)arg3 ;
@end
