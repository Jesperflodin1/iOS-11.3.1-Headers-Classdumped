/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonChatItem.h>

@class NSArray, IMMessage, UIItemProvider;

@interface CKMessagePartChatItem : CKBalloonChatItem {

	NSArray* _visibleAssociatedMessageChatItems;

}

@property (nonatomic,copy,readonly) NSArray * messageAcknowledgments; 
@property (nonatomic,readonly) IMMessage * message; 
@property (nonatomic,readonly) char color; 
@property (nonatomic,copy,readonly) NSArray * pasteboardItems; 
@property (nonatomic,readonly) NSArray * visibleAssociatedMessageChatItems;              //@synthesize visibleAssociatedMessageChatItems=_visibleAssociatedMessageChatItems - In the implementation block
@property (nonatomic,readonly) BOOL canSendMessageAcknowledgment; 
@property (nonatomic,readonly) NSRange messagePartRange; 
@property (nonatomic,readonly) BOOL hasMessageAcknowledgment; 
@property (nonatomic,readonly) BOOL hasStickers; 
@property (nonatomic,readonly) UIItemProvider * dragItemProvider; 
-(id)time;
-(id)description;
-(id)sender;
-(char)color;
-(IMMessage *)message;
-(BOOL)canCopy;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(BOOL)isFromMe;
-(BOOL)failed;
-(void)configureBalloonView:(id)arg1 ;
-(id)composition;
-(NSRange)messagePartRange;
-(BOOL)canForward;
-(NSArray *)pasteboardItems;
-(BOOL)canSendAsTextMessage;
-(NSArray *)visibleAssociatedMessageChatItems;
-(UIItemProvider *)dragItemProvider;
-(BOOL)canSendMessageAcknowledgment;
-(BOOL)canAttachStickers;
-(BOOL)stickersSnapToPoint;
-(BOOL)hasMessageAcknowledgment;
-(id)votingCounts;
-(long long)selectedType;
-(NSArray *)messageAcknowledgments;
-(id)aggregateAcknowledgmentChatItem;
-(BOOL)shouldShowVotingView;
-(BOOL)_isSURFRelatedMessage;
-(BOOL)hasStickers;
@end

