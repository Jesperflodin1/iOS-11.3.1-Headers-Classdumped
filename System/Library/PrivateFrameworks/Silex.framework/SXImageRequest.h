/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Silex/Silex-Structs.h>
@class NSString, NSURL;

@interface SXImageRequest : NSObject {

	BOOL _preserveColorspace;
	NSString* _imageIdentifier;
	NSURL* _URL;
	unsigned long long _qualities;
	/*^block*/id _loadingBlock;
	CGSize _size;

}

@property (nonatomic,readonly) NSString * imageIdentifier;                //@synthesize imageIdentifier=_imageIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                               //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) CGSize size;                               //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) unsigned long long qualities;              //@synthesize qualities=_qualities - In the implementation block
@property (nonatomic,copy) id loadingBlock;                               //@synthesize loadingBlock=_loadingBlock - In the implementation block
@property (nonatomic,readonly) BOOL preserveColorspace;                   //@synthesize preserveColorspace=_preserveColorspace - In the implementation block
-(CGSize)size;
-(NSURL *)URL;
-(id)loadingBlock;
-(NSString *)imageIdentifier;
-(id)initWithImageIdentifier:(id)arg1 imageQualities:(unsigned long long)arg2 url:(id)arg3 size:(CGSize)arg4 preserveColorspace:(BOOL)arg5 loadingBlock:(/*^block*/id)arg6 ;
-(unsigned long long)qualities;
-(void)setLoadingBlock:(id)arg1 ;
-(BOOL)preserveColorspace;
@end

