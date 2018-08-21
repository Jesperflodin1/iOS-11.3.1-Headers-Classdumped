/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DAMessageFetchAttachmentRequest : NSObject {

	NSString* _messageID;
	NSString* _attachmentName;

}

@property (nonatomic,copy) NSString * messageID;                   //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * attachmentName;              //@synthesize attachmentName=_attachmentName - In the implementation block
-(NSString *)messageID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithAttachmentName:(id)arg1 andMessageServerID:(id)arg2 ;
-(void)setAttachmentName:(NSString *)arg1 ;
-(NSString *)attachmentName;
-(void)setMessageID:(NSString *)arg1 ;
@end

