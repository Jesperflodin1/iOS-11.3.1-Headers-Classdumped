/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LPLinkMetadataStatusTransformerDelegate;
@class LPLinkMetadata, NSURL, NSAttributedString;

@interface LPLinkMetadataStatusTransformer : NSObject {

	LPLinkMetadata* _metadata;
	NSURL* _URL;
	BOOL _wantsStatusItem;
	id<LPLinkMetadataStatusTransformerDelegate> _delegate;

}

@property (nonatomic,retain) LPLinkMetadata * metadata;                                                //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic,__weak) id<LPLinkMetadataStatusTransformerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL wantsStatusItem;                                                   //@synthesize wantsStatusItem=_wantsStatusItem - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * statusText; 
@property (nonatomic,copy,readonly) NSURL * actionURL; 
@property (nonatomic,copy,readonly) NSURL * canonicalURL; 
-(void)setMetadata:(LPLinkMetadata *)arg1 ;
-(id<LPLinkMetadataStatusTransformerDelegate>)delegate;
-(void)setDelegate:(id<LPLinkMetadataStatusTransformerDelegate>)arg1 ;
-(void)dealloc;
-(id)originalURL;
-(LPLinkMetadata *)metadata;
-(NSURL *)actionURL;
-(BOOL)wantsStatusItem;
-(NSAttributedString *)statusText;
-(id)initWithMetadata:(id)arg1 URL:(id)arg2 ;
-(NSURL *)canonicalURL;
@end
