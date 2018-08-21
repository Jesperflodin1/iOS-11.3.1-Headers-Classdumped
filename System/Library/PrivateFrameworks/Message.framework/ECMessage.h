/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray, NSDate;


@protocol ECMessage <NSCopying,NSObject>
@property (nonatomic,copy,readonly) NSString * persistentID; 
@property (nonatomic,copy,readonly) NSString * subject; 
@property (nonatomic,copy,readonly) NSArray * from; 
@property (nonatomic,copy,readonly) NSArray * to; 
@property (nonatomic,copy,readonly) NSArray * cc; 
@property (nonatomic,readonly) NSDate * dateReceived; 
@property (nonatomic,copy,readonly) NSArray * listUnsubscribe; 
@property (nonatomic,copy,readonly) NSString * remoteID; 
@property (nonatomic,readonly) id<ECMailbox> mailbox; 
@property (nonatomic,readonly) long long conversationID; 
@property (nonatomic,readonly) BOOL flagged; 
@property (nonatomic,readonly) BOOL answered; 
@property (nonatomic,readonly) BOOL junk; 
@property (nonatomic,readonly) BOOL senderVIP; 
@property (nonatomic,readonly) BOOL conversationVIP; 
@property (nonatomic,readonly) BOOL conversationMuted; 
@property (nonatomic,readonly) id<ECMimePart> messageBody; 
@required
-(id<ECMimePart>)messageBody;
-(NSArray *)from;
-(NSArray *)to;
-(NSString *)subject;
-(BOOL)flagged;
-(NSDate *)dateReceived;
-(BOOL)senderVIP;
-(NSArray *)listUnsubscribe;
-(BOOL)answered;
-(BOOL)junk;
-(BOOL)conversationVIP;
-(BOOL)conversationMuted;
-(NSString *)persistentID;
-(id<ECMailbox>)mailbox;
-(NSArray *)cc;
-(long long)conversationID;
-(NSString *)remoteID;

@end

