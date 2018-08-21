/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _CKAcknowledgmentTally : NSObject {

	long long _type;
	NSArray* _senders;
	NSArray* _contacts;

}

@property (assign,nonatomic) long long type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * senders;               //@synthesize senders=_senders - In the implementation block
@property (nonatomic,copy) NSArray * contacts;              //@synthesize contacts=_contacts - In the implementation block
-(id)description;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setSenders:(NSArray *)arg1 ;
-(NSArray *)senders;
-(id)initWithType:(long long)arg1 senders:(id)arg2 ;
-(NSArray *)contacts;
-(void)setContacts:(NSArray *)arg1 ;
@end
