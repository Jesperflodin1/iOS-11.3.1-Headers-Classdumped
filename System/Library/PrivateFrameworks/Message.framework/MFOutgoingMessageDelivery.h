/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFDeliveryDelegate;
@class MFMessage, MFMutableMessageHeaders, NSArray, NSString, MFPlainTextDocument, MailAccount, DeliveryAccount, NSDictionary, MFMailDelivery, MFAttachmentCompositionContext;

@interface MFOutgoingMessageDelivery : NSObject {

	MFMessage* _message;
	MFMutableMessageHeaders* _headers;
	NSArray* _mixedContent;
	BOOL _textPartsAreHTML;
	NSString* _htmlBody;
	MFPlainTextDocument* _plainTextAlternative;
	NSArray* _otherHTMLAndAttachments;
	NSArray* _charsets;
	id<MFDeliveryDelegate> _delegate;
	MailAccount* _archiveAccount;
	DeliveryAccount* _deliveryAccount;
	NSDictionary* _compositionSpecification;
	MFMailDelivery* _currentDeliveryObject;
	BOOL _isUserRequested;
	MFAttachmentCompositionContext* _attachmentContext;
	unsigned long long _conversationFlags;
	long long _originalConversationId;

}

@property (nonatomic,retain) MFAttachmentCompositionContext * attachmentContext;              //@synthesize attachmentContext=_attachmentContext - In the implementation block
@property (nonatomic,retain) NSDictionary * compositionSpecification;                         //@synthesize compositionSpecification=_compositionSpecification - In the implementation block
@property (assign,nonatomic) unsigned long long conversationFlags;                            //@synthesize conversationFlags=_conversationFlags - In the implementation block
@property (assign,nonatomic) long long originalConversationId;                                //@synthesize originalConversationId=_originalConversationId - In the implementation block
@property (assign,nonatomic) BOOL isUserRequested;                                            //@synthesize isUserRequested=_isUserRequested - In the implementation block
+(id)newWithMessage:(id)arg1 ;
+(id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5 ;
+(id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)message;
-(BOOL)isUserRequested;
-(void)setIsUserRequested:(BOOL)arg1 ;
-(id)originalHeaders;
-(long long)deliveryStatus;
-(id)_currentDeliveryObject;
-(id)_deliverSynchronouslyWithCurrentSettings:(BOOL)arg1 ;
-(id)_deliveryAccountForInitializers;
-(long long)originalConversationId;
-(unsigned long long)conversationFlags;
-(NSDictionary *)compositionSpecification;
-(void)setArchiveAccount:(id)arg1 ;
-(void)setCompositionSpecification:(NSDictionary *)arg1 ;
-(void)setConversationFlags:(unsigned long long)arg1 ;
-(MFAttachmentCompositionContext *)attachmentContext;
-(void)setAttachmentContext:(MFAttachmentCompositionContext *)arg1 ;
-(void)setOriginalConversationId:(long long)arg1 ;
-(id)deliverSynchronouslyWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5 ;
-(id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3 ;
-(void)setAccount:(id)arg1 ;
-(id)account;
-(id)initWithMessage:(id)arg1 ;
@end

