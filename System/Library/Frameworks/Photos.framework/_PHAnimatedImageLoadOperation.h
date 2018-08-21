/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSURL, PHAnimatedImage;

@interface _PHAnimatedImageLoadOperation : NSOperation {

	long long _cacheStrategy;
	BOOL _useSharedImageDecoding;
	NSURL* _animatedImageURL;
	PHAnimatedImage* _animatedImage;

}

@property (retain) PHAnimatedImage * animatedImage;              //@synthesize animatedImage=_animatedImage - In the implementation block
+(long long)nextRequestID;
+(id)_requestIsolationQueue;
+(id)_inq_animatedImageLoadingOperations;
+(void)_registerOperation:(id)arg1 forRequestID:(long long)arg2 ;
+(id)_animatedImageSharedLoadingQueue;
+(id)_removeOperation:(long long)arg1 ;
-(void)main;
-(id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useSharedDecoding:(BOOL)arg3 ;
-(PHAnimatedImage *)animatedImage;
-(void)setAnimatedImage:(PHAnimatedImage *)arg1 ;
@end

