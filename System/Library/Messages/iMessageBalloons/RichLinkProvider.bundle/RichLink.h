/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/RichLinkProvider.bundle/RichLinkProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class LPLinkMetadata;

@interface RichLink : NSObject <NSSecureCoding> {

	BOOL _placeholder;
	BOOL _needsSubresourceFetch;
	LPLinkMetadata* _metadata;

}

@property (nonatomic,copy) LPLinkMetadata * metadata;                            //@synthesize metadata=_metadata - In the implementation block
@property (assign,getter=isPlaceholder,nonatomic) BOOL placeholder;              //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,nonatomic) BOOL needsSubresourceFetch;                         //@synthesize needsSubresourceFetch=_needsSubresourceFetch - In the implementation block
+(id)linkWithDataRepresentation:(id)arg1 attachments:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(BOOL)needsSubresourceFetch;
-(void)setNeedsSubresourceFetch:(BOOL)arg1 ;
-(id)dataRepresentationWithOutOfLineAttachments:(id*)arg1 ;
-(void)setMetadata:(LPLinkMetadata *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isPlaceholder;
-(void)setPlaceholder:(BOOL)arg1 ;
-(LPLinkMetadata *)metadata;
@end

