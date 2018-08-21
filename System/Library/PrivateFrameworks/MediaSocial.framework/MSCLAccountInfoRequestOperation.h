/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVComplexOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, SKUIMediaSocialAuthor;

@interface MSCLAccountInfoRequestOperation : SSVComplexOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _serviceIdentifier;
	SKUIMediaSocialAuthor* _author;
	/*^block*/id _outputBlock;

}

@property (nonatomic,copy,readonly) NSString * serviceIdentifier;                //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) SKUIMediaSocialAuthor * author;              //@synthesize author=_author - In the implementation block
@property (nonatomic,copy) id outputBlock;                                       //@synthesize outputBlock=_outputBlock - In the implementation block
-(SKUIMediaSocialAuthor *)author;
-(void)main;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(id)_facebookPagesFromResponseDictionary:(id)arg1 ;
-(id)initWithServiceIdentifier:(id)arg1 forAuthor:(id)arg2 ;
-(NSString *)serviceIdentifier;
@end

