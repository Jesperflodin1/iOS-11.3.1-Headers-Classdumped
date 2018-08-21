/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LPMetadataProviderSpecializationDelegate;
@class NSURL;

@interface LPMetadataProviderSpecialization : NSObject {

	id<LPMetadataProviderSpecializationDelegate> _delegate;
	NSURL* _URL;

}

@property (assign,nonatomic,__weak) id<LPMetadataProviderSpecializationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                                             //@synthesize URL=_URL - In the implementation block
+(id)specializedMetadataProviderForResourceWithMIMEType:(id)arg1 URL:(id)arg2 ;
+(id)specializedMetadataProviderForURL:(id)arg1 ;
+(id)specializedMetadataProviderForMetadata:(id)arg1 URL:(id)arg2 ;
-(void)cancel;
-(id<LPMetadataProviderSpecializationDelegate>)delegate;
-(void)setDelegate:(id<LPMetadataProviderSpecializationDelegate>)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(void)start;
@end

